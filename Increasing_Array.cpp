#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,c=0,ans = 0;
    cin >> n;
    for(int i =0;i<n;i++){

        ll b;cin>>b;

        c = max(b,c);

        ans  =ans+c-b;
        
}

    
    cout << ans;
    return 0;
}