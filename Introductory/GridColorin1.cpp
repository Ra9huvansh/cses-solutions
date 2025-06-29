#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
void solve(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    char grpEven1='A', grpEven2='B', grpOdd1='C', grpOdd2='D';
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                if(arr[i][j]=='A'){
                    arr[i][j]=grpEven2;
                }
                else if(arr[i][j]=='B'){
                    arr[i][j]=grpEven1;
                }
                else{
                    arr[i][j]=grpEven1;
                }
            }
            else{
                if(arr[i][j]=='C'){
                    arr[i][j]=grpOdd2;
                }
                else if(arr[i][j]=='D'){
                    arr[i][j]=grpOdd1;
                }
                else{
                    arr[i][j]=grpOdd2;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
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
