#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;

    vector<pair<int,int>>v;
    for(int i= 0;i<n;++i){

        int f;cin>>f;
        v.push_back({f,i});
    }
     multiset<pair<int,int>>p(v.begin(),v.end());
    while (m--)
    {
        int a,b;cin>>a>>b;
        int t = v[a-1].first;
        v[a-1].first =v[b-1].first;
        v[b-1].first = t;
        multiset<pair<int,int>>p(v.begin(),v.end());

        if(is_sorted(v.begin(),v.end()))
        cout<<1;

        else{
        int s = 1;
        auto sss = --p.end();
        for(auto i =p.begin();i!=sss;i++){
            auto f = ++i;
            cout<<f->first<<" "<<f->second<<"\n";
        }
        cout<<s;

        }
        cout<<"\n";

    }
    



    return 0;
}