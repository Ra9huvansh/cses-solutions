#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
int n;
 
void rec(int n, int src, int aux, int dest){
    if(n == 0){
        return;
    }
    rec(n-1,src,dest,aux);
    cout<<src<<" "<<dest<<endl;
    rec(n-1,aux,src,dest);
 
}
 
void solve(){
    cin>>n;
    cout<<(1LL<<n)-1<<endl;
    rec(n,1,2,3);
}
 
signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}
