#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
int freq[26]={0};
 
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        freq[s[i]-'A']++;
    }
    int lc=-1;
    string ans="";
    for(int i=0;i<n;i++){
        bool filled=false;
        for(int j=0;j<26 and !filled;j++){
            if(freq[j]>0 and j!=lc){
                freq[j]--;
                int mode=0,total=0;
                for(int k=0;k<26;k++){
                    if(freq[k]>freq[mode]){
                        mode=k;
                    }
                    total+=freq[k];
                }
                if(freq[mode]<=(total+1)/2 and freq[j]<=(total/2)){
                    ans+=char(j+'A');
                    lc=j;
                    filled=true;
                }
                else{
                    freq[j]++;
                }
            }
        }
        if(!filled){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
 
signed main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}
