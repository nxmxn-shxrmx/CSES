#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;

    vector<ll>v;
    ll s = 0;

    for(int i=0;i<n;++i){

        ll f;cin>>f;
        v.push_back(f);
        s+=f;
    }
    sort(v.begin(),v.end());
    ll ss  = 1;

    if(v[0]==1){
    
    for(int i=0;i<n;++i){
        if( v[i]<=ss){
            ss+=v[i];
        }
        else
        break;   

    }
    }
    
    cout<<ss;



    return 0;
}