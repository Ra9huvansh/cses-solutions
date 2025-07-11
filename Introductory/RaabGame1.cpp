#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second

#define MP make_pair

const int N = 1e9 + 7;
const int INF=1e9;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a==0 and b==0){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==1){
        if(a==0 and b==0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    if(n==2){
        if(a==0 and b==0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(a==1 and b==1){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    if(a+b > n){
        cout<<"NO"<<endl;
        return;
    }
    if((a==0 and b!=0) || (b==0 and a!=0)){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<int>x,y;
    int redundant = n-(a+b);
    for(int i=n;i>n-redundant;i--){
        x.push_back(i);
        y.push_back(i);
    }
    n-=redundant;
    int c=a;
    int d=b;
    if(b>a){
        swap(a,b);
    }
    for(int i=2;i<=a;i++){
        x.push_back(i);
    }
    x.push_back(n);
    for(int i=1;i<=a;i++){
        y.push_back(i);
    }
    x.push_back(1);
    for(int i=a+1;i<=n-1;i++){
        x.push_back(i);
    }
    for(int i=a+1;i<=n;i++){
        y.push_back(i);
    }
    if(d>c){
        swap(x,y);
    }
    for(auto v: x){
        cout<<v<<" ";
    }
    cout<<endl;
    for(auto v: y){
        cout<<v<<" ";
    }
    cout<<endl;
}

signed main() {
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}
