#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second

#define MP make_pair

const int N = 1e9 + 7;
const int INF=1e9;

void solve(){
    int n;
    cin>>n;
    vector<int>arr;
    arr.resize(n);
    int sum=0;
    for(auto &v: arr){
        cin>>v;
        sum+=v;
    }
    int mn=1e15;
    for(int i=0;i<(1LL<<n);i++){
        int s=0;
        for(int j=0;j<32;j++){
            if(i&(1LL<<j)){
                s+=arr[j];
            }
        }
        int rem=sum-s;
        mn=min(mn, abs(rem-s));
    }
    cout<<mn<<endl;
}

signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}
