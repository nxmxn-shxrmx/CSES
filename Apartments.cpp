#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,k;
    cin>>n>>m>>k;

    vector<int>fav;

    for(int i=0;i<n;++i){
        int f;cin>>f;
        fav.push_back(f);
    }
    sort(fav.begin(),fav.end());
    int s=0;

    multiset<int>mo;
    for(int i=0;i<m;++i){
        int f;cin>>f;
        mo.insert(f);
    }

    for(int i=0;i<n;++i){

        auto d = mo.lower_bound(fav[i]-k);

        if(d!=mo.end() and *d<=(fav[i]+k)){
            s++;
            mo.erase(d);
        }
    }
    cout<<s<<"\n";



    return 0;
}