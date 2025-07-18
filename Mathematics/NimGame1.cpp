#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second

#define MP make_pair

const int N = 1e9 + 7;
const int INF=1e18;


void solve(){
    int n;
    cin>>n;
    vector<int>arr;
    arr.resize(n);
    int xori=0;
    for(auto &v: arr){
        cin>>v;
        xori^=v;
    }
    if(xori==0){
        cout<<"second"<<endl;
    }
    else{
        cout<<"first"<<endl;
    }
}

signed main() {
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}
