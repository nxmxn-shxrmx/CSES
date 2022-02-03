#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll a;

    for(ll i=1;i<n+1;i++){
        
        a = i*i;

        ll c = a*(a-1)/2 - 4*(i-1)*(i-2);
        cout<<c<<endl;
        
    }




    return 0;
}