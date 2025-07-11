#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second

#define MP make_pair

const int N = 1e9 + 7;
const int INF=1e9;

void solve(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto v: s){
        mp[v]++;
    }
    s="";
    for(auto v: mp){
        for(int i=0;i<v.S;i++){
            s+=v.F;
        }
    }
    set<string>st;
    do{
        st.insert(s);
    }while(next_permutation(s.begin(), s.end()));

    cout<<st.size()<<endl;
    for(auto v: st){
        cout<<v<<endl;
    }
}

signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}
