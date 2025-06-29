#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
 
#define MP make_pair
 
const int N = 1e9 + 7;
const int INF=1e9;
 
void solve(){
    int k;
    cin>>k;
    if(k<=9){
        cout<<k<<endl;
        return;
    }
    int x=9;
    int cnt=1;
 
    while(x<=k){
        int p=1;
        for (int i = 0; i < cnt; i++) {
            p *= 10;
        }
        x += 9LL * p * (cnt + 1);
        //cout<<x<<endl;
        cnt++;
    }
    //cout<<cnt<<endl;
    int p=1;
    for (int i = 0; i < cnt-1; i++) {
        p *= 10;
    }
    int z=x-(9LL*p*cnt);
    //cout<<z<<endl;
    int rem=k-z;
    // while(rem>=(9*pow(10,cnt-1)*cnt)){
    //     rem-=(9*pow(10,cnt-1)*cnt);
    //     cnt++;
    // }
    // cout<<rem<<endl;
    int a=rem/cnt;
    int b=rem%cnt;
    // cout<<b<<endl;
    int m=p;
    int n=m+a-1;
    string str="";
    if(b!=0){
        str= to_string(n+1);
    }
    else{
        cout<<n%10<<endl;
        return;
    }
 
    for(int i=0;i<str.size();i++){
        if(i+1==b){
            cout<<str[i]<<endl;
            return;
        }
    }
}
 
signed main() {
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}