#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;

    ll s =0;
    ll c =0;
    map<ll,ll>ma;
    ma[0]++;
    for(ll i =0;i<n;++i)
    {
        ll f;cin>>f;
        s+=f;
        ll k =s%n;

        if(k<0)
        k = n+k;
        if(ma.find(k)!=ma.end())
        c+=ma[k];
        ma[k]++;
    }
    cout<<c<<" ";
    
    


    return 0;
}