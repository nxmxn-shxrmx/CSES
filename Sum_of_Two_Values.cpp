#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x;
    cin>>n>>x;

    vector<pair<int,int>>v;
    for(int i=0;i<n;++i){
        int f;cin>>f;
        v.push_back({f,i+1});
    }
    int l = 0,r=n-1;
    sort(v.begin(),v.end());
    bool s= true;
    while (l!=r)
    {
        if(v[l].first+v[r].first==x){
            cout<<v[l].second<<" "<<v[r].second;
            s= false;
            break;
        }
        else if(v[l].first+v[r].first>x)
        --r;

        else
        ++l;
    }
    
    if(s)
    cout<<"IMPOSSIBLE";
    


    return 0;
}