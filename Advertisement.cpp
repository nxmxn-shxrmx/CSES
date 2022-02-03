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
    vector<ll>v(n);
    stack<ll>s;

    vector<ll>ans(n);
    for(ll i = 0;i<n;++i)
    {
        cin>>v[i];
        while(!s.empty() && v[s.top()]>=v[i])
        s.pop();

        ans[i]+= i - (s.empty()?-1:s.top());
        ans[i] *= v[i];
        s.push(i);
    }
    stack<ll>rev;
    ll a = n;
    for(int i = n-1;~i;--i)
    {
        while(!rev.empty() && v[rev.top()]>=v[i])
        rev.pop(); 

        ll o = rev.empty()?n:rev.top();
        ans[i]+= v[i]*(o-i-1);
        a = max(ans[i],a);
        rev.push(i);
    }
    cout<<a<<"\n";

    return 0;
}