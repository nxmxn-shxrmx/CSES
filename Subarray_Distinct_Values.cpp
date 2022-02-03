#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,k;cin>>n>>k;

    vector<ll>v;
    set<ll>s;
    for(int i =0;i<n;++i)
    {
        ll f;cin>>f;
        s.insert(f);
        v.push_back(f);
    }
    ll ki = s.size();
    
    if(ki<=k)
    cout<<n*(n+1)/2;

    else if(k==1)
    cout<<n;


    else
    {
        ll c=0;
        map<ll,ll>ma;
        int j =0;
        for(int i =0;i<n;++i)
        {
            while(j<n && ma.size()<k || ma.count(v[j])>0)
            {
                ma[v[j]]++;
                j++;
            }
            c +=j-i;
            ma[v[i]]--;
            if(ma[v[i]]==0)
            ma.erase(v[i]);
        }
        cout<<c<<" ";
    }
    



    return 0;
}