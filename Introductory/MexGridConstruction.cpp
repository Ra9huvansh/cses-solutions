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
    vector<vector<int>>grid(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vector<int>vis(2*n);
            for(int p=0;p<i;p++){
                vis[grid[p][j]]=1;
            }
            for(int q=0;q<j;q++){
                vis[grid[i][q]]=1;
            }
            int x=0;
            while(vis[x]) x++;

            grid[i][j]=x;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}
