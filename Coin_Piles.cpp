#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll t;

    cin>>t;

    while(t--){

        ll a,b;

        cin>>a>>b;

    ll maxz = max(a,b);
    ll minz = min(a,b);

    ll s = a+b;

    if(s%3){
        cout<<"NO"<<"\n";
    }
    else{

        if(maxz<=2*minz){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    }
    return 0;

}