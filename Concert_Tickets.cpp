#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,m;
    cin>>n>>m;
    multiset<int>t;

    for(int i=0;i<n;++i){
        int f;cin>>f;
        t.insert(f);
    }
    while(m--){

        ll d;cin>>d;

        auto it  = t.lower_bound(d+1);
        if(it==t.begin()){
            cout<<-1<<"\n";
        }
        else{
            --it;
            cout<<*(it)<<"\n";
            t.erase(it);
        }
        
    }

    return 0;
}