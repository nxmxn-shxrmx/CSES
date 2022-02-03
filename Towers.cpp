#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    multiset<int>ss;

    for(int i=0;i<n;++i){

        int f;cin>>f;
        auto it = ss.lower_bound(f+1);

        if(it==ss.end())
        ss.insert(f);

        else{
            ss.erase(it);
            ss.insert(f); 
        }
        
    }
    int sd = ss.size();
    cout<<sd;
    

    return 0;
}