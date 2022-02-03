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

    vector<pair<pair<ll,ll>,ll>>v;
    multiset<ll>s;
    for(int i =0;i<n;++i)
    {
        ll f,g;
        cin>>f>>g;
        v.push_back({{f,g},i});
        
    }
    sort(begin(v),end(v));
    priority_queue<pair<ll,ll>>q;
    ll c =0;
    vector<int>p(n);
    for(auto e:v)
    {
        if(q.empty())
        {
            c++;
            q.push({-e.first.second,c});
            p[e.second] = c;
        }
        else
        {
            auto m = q.top();
            if(-1*m.first<e.first.first)
            {
                q.pop();
                q.push({-e.first.second,m.second});
                p[e.second] = m.second;
            }
            else
            {
                c++;
                q.push({-e.first.second,c});
                p[e.second]=c;

            }
        }
        ll k = q.size();
        c = max(k,c);
    }
    cout<<c<<"\n";
    for(auto c:p)
    cout<<c<<" ";
    //2 4 4
    //1 2 4

    //1 2
    //2 4
    //4 4
    //1 2 3 4 5 6 7 8

    //1 2

    // 2

    //
    return 0;
}