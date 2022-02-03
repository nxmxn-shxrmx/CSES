#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
multiset<ll>l,r;
ll n,k;
void ins(ll d)
{
    ll x = *l.rbegin();
    if(d>x)
    {
        r.insert(d);
        if(r.size()>l.size())
        {
            l.insert(*r.begin());
            r.erase(r.find(*r.begin()));
        }
    }
    else
    {
        l.insert(d);
        if(l.size()>(k+1)/2)
        {
            r.insert(*l.rbegin());
            l.erase(l.find(*l.rbegin()));
        }
    }
}
void del(ll d)
{
    if(r.find(d)!=r.end())
    {
        r.erase(r.find(d));
    }
    else
    {
        l.erase(l.find(d));
        if(l.empty())
        {
            l.insert(*r.begin());
            r.erase(r.find(*r.begin()));
        }
    }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;

    vector<ll>v;
    ll f;cin>>f;
    l.insert(f);
    v.push_back(f);
    for(int i = 1;i<k;++i)
    {
        ll f;cin>>f;
        ins(f);
        v.push_back(f);
    }
    cout<<*l.rbegin()<<" ";
    for(int i = k;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        if(k==1)
        {
            ins(f);
            del(v[i-k]);
        }
        else
        {
            del(v[i-k]);
            ins(f);
        }

    cout<<*l.rbegin()<<" ";
     
    }

    return 0;
}
 // for(ll i =0;i<n;++i)
    // {
    //     ll f;cin>>f;
    //     v.push_back(f);
    //       s.insert(f);
    //     if(s.size()==k)
    //     {
    //         ll e = k/2;
    //         if(k%2==0)
    //         e--;
    //         auto it = s.begin();
    //         while(e--)
    //         ++it;
    //         cout<<*it<<" ";
        
    //         s.erase(s.find(v[w]));
    //         w++;
    //     }
    
    // 