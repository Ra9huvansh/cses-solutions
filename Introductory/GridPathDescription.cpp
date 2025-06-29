#include <bits/stdc++.h>
using namespace std;
#define int long long
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
string s;
int grid[9][9];
int cnt=0;
 
void rec(int x, int y, int c){
    //pruning
    if(grid[x][y]) return;
    //base case
    if(x==7 and y==1){
        if(c==49){
            cnt++;
        }
        return;
    }
 
    bool down = grid[x+1][y];
    bool up = grid[x-1][y];
    bool right = grid[x][y+1];
    bool left = grid[x][y-1];
    if(up and down and !right and !left) return;
    if(right and left and !up and !down) return;
 
    grid[x][y]=1;
    char d=s[c-1];
    if(d=='?' || d=='D') rec(x+1, y, c+1);
    if(d=='?' || d=='U') rec(x-1, y, c+1);
    if(d=='?' || d=='R') rec(x, y+1, c+1);
    if(d=='?' || d=='L') rec(x, y-1, c+1);
    grid[x][y]=0;
 
}
 
void solve(){
    cin>>s;
    for(int i=0;i<9;i++){
        grid[0][i]=grid[8][i]=1;
        grid[i][0]=grid[i][8]=1;
    }
    rec(1,1,1);
    cout<<cnt<<endl;
}
 
signed main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}