#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    ll sum = 0;
    ll d = INT_MIN;
    for(int i=0;i<n;++i){

        int f;cin>>f;
        v.push_back(f);
    }
    
    for(int i=0;i<n;++i){

        sum +=v[i];
        d= max(sum,d);
        if(sum<0)
        sum = 0;
    }
    cout<<d;


    return 0;
}