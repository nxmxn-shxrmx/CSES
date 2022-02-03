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

    vector<pair<ll,ll>>v;
    for(int i=0;i<n;++i)
    {
        ll du,de;
        cin>>du>>de;
        v.push_back({du,de});
    }
    sort(begin(v),end(v));
    ll c =0;
    ll d =0;
    for(auto e:v)
    {

        c +=(e.second-e.first-d);
        d +=e.first;
    }
    cout<<c<<"\n";
// 7 -1 -4     
//6 10 
//5 12
//8 15
//
//
    return 0;
}