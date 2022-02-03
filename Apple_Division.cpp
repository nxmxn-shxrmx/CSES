#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;

    ll a[n] ,s=0;
    for(int i=0;i<n;i++){

        cin>>a[i];
        s+=a[i];
        
    }

    ll ans = INT_MAX;

    for(int i=0;i<1<<n;i++){

        ll c =0;

        for(int j=0;j<n;j++){

            if((1<<j)&i){

                c+=a[j];
            }
        }
        ans = min(ans,abs(s-2*c));
    }
    cout<<ans;

    return 0;
}