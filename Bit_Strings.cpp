#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 + 7)
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,sum = 1,w=2;

    cin>>n;

    while (n)
    {
        if(n&1){
            sum = (sum*w)%mod;

        }
        n =n>>1;
        w = (w*w)%mod;
    
    }
    cout<<sum;
    return 0;
}