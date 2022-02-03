#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    vector<pair<int,int>>v;

    for(int i=0;i<n;++i){
        int a,g;
        cin>>a>>g;
        v.push_back(make_pair(g,a));
    }
    sort(v.begin(),v.end());
    int c=1;

    ll d = v[0].first;
  

    for(int i=1;i<n;++i){

        if(v[i].second>=d){
        c++;
        d = v[i].first;
        }
    }
  
    cout<<c;



    return 0;
}
