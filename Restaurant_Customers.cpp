#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    int c=INT_MIN;

    multiset<pair<int,bool>>v;
    while(t--){

        int n,m;
        cin>>n>>m;
        v.insert(make_pair(n,true));
        v.insert(make_pair(m,false));
    }
    int co=0;

    
    for(auto x:v){

        if(x.second)
        co++;

        else
        co--;

        c = max(co,c);

    }

    
    cout<<c;


    return 0;
}