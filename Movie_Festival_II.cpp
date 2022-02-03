#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //1 8 3 2 6
    //5 10 6 5 9
    ll n,k;cin>>n>>k;
    multiset<ll>m,m1;
    vector<pair<ll,ll>>v;
    vector<pair<ll,ll>>v1;

    for(int i = 0;i<n;++i)
    {
        ll a,b;cin>>a>>b;
        v.push_back({b,a});
        v1.push_back({a,b});
    }
    sort(begin(v),end(v));
    sort(begin(v),end(v));
    m.insert(v[0].first);
    ll c =1;
    ll c1 = 1;
    // for(auto c:v)
    // cout<<c.first<<" "<<c.second<<"\n";
     for(int i = 1;i<n;++i)
    {
        if(m.size()!=k)
        {
            m.insert(v[i].first);
            c++;
        }
        else if(*m.begin()<=v[i].second)
        {
            m.insert(v[i].first);
            c++;
            m.erase(m.find(*m.begin()));
        }
        else
        continue;
    }
      for(int i = 1;i<n;++i)
    {
        if(m1.size()!=k)
        {
            m1.insert(v1[i].second);
            c1++;
        }
        else if(*m1.begin()<=v1[i].first)
        {
            m1.insert(v1[i].second);
            c++;
            m1.erase(m1.find(*m1.begin()));
        }
        else
        continue;
    }
    cout<<max(c1,c)<<"\n";

    return 0;
}