#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;

   /* vector<pair<ll,ll>>v;
    map<ll,ll>m;
    for (int i = 0; i < n; i++)
    {
        ll f;cin>>f;
        m[f]++;
    }
    for(auto& c :m){

        v.push_back({c.second,c.first});
    }
    sort(v.rbegin(),v.rend());

    ll d = v[0].first;
    ll ff = v[0].second;

    ll s = 0;

    if(d>1){
        v.erase(v.begin());

        for(int i =0;i<n-d;++i){
                ll oo = abs(v[i].second-ff);
                s+=(oo*v[i].first);

        }
        cout<<s;

    }
    else{

        ll d = v[n/2].second;
        for(int i=0;i<n;++i){

            s+=abs(v[i].second-d);

        }
        cout<<s;
    }
*/
vector<int>v;
for(int i=0;i<n;++i){

    int f;cin>>f;
    v.push_back(f);
}
sort(v.begin(),v.end());
if(n%2){
    ll d = 0;

    for(int i = n/2+1;i<n;++i){
        d+=v[i];

    }
    for(int i=0;i<n/2;++i){
        
        d-=v[i];
    }
    cout<<d;
}
else{
    ll d= 0;
    for(int i =n/2;i<n;++i){

        d+=v[i];
    }
    for(int i=0;i<n/2;++i){
        d-=v[i];
    }
    cout<<d;
}



    



    return 0;
}