#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t;
    cin>>n>>t;

    set<ll>s;
    s.insert(0);
    s.insert(n);
    multiset<ll>m;
    m.insert(n);

    while(t--)
    {
        ll f;cin>>f;
        auto it = s.upper_bound(f);
        auto it1 = it;
        --it;
        m.erase(m.find(*it1-*it));
        m.insert(*it1-f);
        m.insert(f-*it);
        auto k = m.end();
        s.insert(f);
        cout<<*(--k)<<" ";
    }

   


    return 0;
}