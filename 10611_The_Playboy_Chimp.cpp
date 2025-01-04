#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,q;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    cin>>q;
    while(q--){
        ll x,l=0,r=n-1,m,lb=-1,ub=-1;
        cin>>x;
        if(v.back()<x) lb=n;
        else{
            while(l<=r){
            m=(l+r)/2;
            if(v[m]>=x){
                lb=m;
                r=m-1;
            }
            else l=m+1;
            }
        }
        if(lb==-1 || lb-1<0) cout<<"X ";
        else cout<<v[lb-1]<<" ";
        l=0,r=n-1;
        while(l<=r){
            m=(l+r)/2;
            if(v[m]<=x){
                ub=m;
                l=m+1;
            }
            else r=m-1;
        }
        if(ub==-1 || ub+1>=n) co("X")
        else co(v[ub+1])
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    asikM();      
    return 0;
}