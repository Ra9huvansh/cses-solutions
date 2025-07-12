#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr;
    arr.resize(n);
    for(auto &v: arr){
        cin>>v;
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        --l,--r;
        cout<<arr[r]-(l ? arr[l-1] : 0)<<endl;
    }
}
 
signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}