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
    ll n,q,t=1;
    while(true){
        cin >>n>>q;
        if(n==0 && q==0) return;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;
        sort(v.begin(),v.end());
        cout<<"CASE# "<<t<<":\n";
        t++;
        while(q--){
            ll x,l=0,r=n-1,in=-1;
            cin>>x;
            while(l<=r){
                ll m=(l+r)/2;
                if(v[m]==x){
                    in=m;
                    break;
                }
                else if(v[m]>x) r=m-1;
                else l=m+1;
            }
            if(in==-1) cout<<x<<" not found\n";
            else cout<<x<<" found at "<<in+1<<endl;
        } 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (1)
    asikM();      
    return 0;
}