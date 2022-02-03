#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
vector<ll>v;
bool check(ll d,ll t)
{
    ll c=0;
    ll n =v.size();
    for(int i =0;i<n;++i)
    {
        if(v[i]>d)
        break;

        else
        {
            c += d/v[i];
        }
    }
    return c>=t;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,t;
    cin>>n>>t;

   
    for(int i =0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }
    sort(begin(v),end(v));
    ll r = t*v[0];

    ll l =0;
    while(r-l>0)
    {
        ll mid = (l+r)/2;
        if(check(mid,t))
        r = mid;

        else
        l = mid+1;

    }
    cout<<r<<"\n";


    return 0;
}