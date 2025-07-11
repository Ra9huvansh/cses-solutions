#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
char board[8][8];
vector<int>queens;
int way=0;
 
bool check(int row, int col){
    return board[row][col]=='.';
}
 
bool attack(int row, int col){
    bool risk=0;
    for(int i=0;i<queens.size();i++){
        if(queens[i]==col || (abs(row-i)==abs(col-queens[i]))){
            risk=1;
        }
    }
    return risk;
}
 
void rec(int level){
    //base case
    if(level==8){
        way++;
        return;
    }
    //loop over choices
    for(int col=0;col<8;col++){
        //check
        if(check(level, col) and !attack(level,col)){
            queens.push_back(col);
            rec(level+1);
            queens.pop_back();
        }
    }
}
 
void solve(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>board[i][j];
        }
    }
    //LCCM method
    rec(0);
    cout<<way<<endl;
}
 
signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
}