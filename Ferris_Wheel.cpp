#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    for(ll i=0;i<n;++i){
        ll f;cin>>f;
        v.push_back(f);
    }
    sort(v.begin(),v.end());
    ll s =0;

    for(int i=0,j=n-1;i<j;){

        if(v[j]+v[i]<=x){
            s++;
            ++i,--j;
        }
        else{

            s++;
            --j;
        
        
        }
        if(i==j){
            s++;
            break;
        }
    }
    cout<<s;
    

    return 0;
}