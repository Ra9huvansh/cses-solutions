#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
int n;
bool vis[1001][1001];
 
int dx[]={-2,-2,2,2,1,-1,1,-1};
int dy[]={1,-1,1,-1,-2,-2,2,2};
 
bool check(int r, int c){
    if(r<n and r>=0 and c<n and c>=0){
        return 1;
    }
    return 0;
}
 
void solve(){
    cin>>n;
    memset(vis,0,sizeof(vis));
    queue<pair<int,int>>q;
    vis[0][0]=1;
    q.push({0,0});
    int arr[1001][1001]={0};
    while(!q.empty()){
        int x=q.front().F;
        int y=q.front().S;
        q.pop();
        for(int i=0;i<8;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(check(xx,yy) and !vis[xx][yy]){
                arr[xx][yy]=arr[x][y]+1;
                vis[xx][yy]=1;
                q.push({xx,yy});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
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
