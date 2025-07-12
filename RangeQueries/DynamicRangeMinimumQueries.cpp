#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e18;
 
void build(int ind, int lo, int hi, vector<int>&arr, int seg[]){
    if(lo == hi){
        seg[ind] = arr[lo];
        return;
    }
 
    int mid = (lo+hi)/2;
    build(2*ind+1, lo, mid, arr, seg);
    build(2*ind+2, mid+1, hi, arr, seg);
    seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
}
 
int query(int ind, int lo, int hi, int l, int r, int seg[]){
    //no overlap
    // l r lo hi OR lo hi l r
    if(r<lo || l>hi){
        return INT_MAX;
    }
    //complete overlap
    // l lo hi r
    if(lo >=l and hi<=r){
        return seg[ind];
    }
 
    //partial overlap
    int mid = (lo+hi)/2;
    int left = query(2*ind+1, lo, mid, l, r, seg);
    int right = query(2*ind+2, mid+1, hi, l, r, seg);
    return min(left, right);
}
 
void update(int ind, int lo, int hi, int i, int val, int seg[]){
    if(lo==hi){
        seg[ind]=val;
        return;
    }
 
    int mid = (lo+hi)/2;
    if(i<=mid){
        update(2*ind+1, lo, mid, i, val, seg);
    }
    else{
        update(2*ind+2, mid+1, hi, i, val, seg);
    }
    seg[ind]=min(seg[2*ind+1], seg[2*ind+2]);
}
 
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr;
    arr.resize(n);
    for(auto &v: arr){
        cin>>v;
    }
    int seg[4*n];
    build(0,0,n-1,arr,seg);
    while(q--){
        int type;
        cin>>type;
        if(type == 2){
            int l,r;
            cin>>l>>r;
            --l,--r;
            cout<<query(0,0,n-1,l,r,seg)<<endl;
        }
        else{
            int i, val;
            cin>>i>>val;
            --i;
            update(0,0,n-1,i,val,seg);
            arr[i]=val;
        }
    }
}
 
signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}