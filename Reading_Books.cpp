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
    vector<ll>v;

    ll a =0;

    for(ll i =0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        a +=f;
    }
    sort(begin(v),end(v));

    ll res = v[n-1];
    cout<<max(2*res,a);

    return 0;
}