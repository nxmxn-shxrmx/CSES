#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int f;cin>>f;
    vector<pair<int,int>>t;
    for(int i=0;i<f;++i){
        int n;cin>>n;
        t.push_back({n,i});
    }
    if(is_sorted(t.begin(),t.end())){
        cout<<1;
    }
    else{
        sort(t.begin(),t.end());
        int s =0;
        
        for(int i =0;i<f-1;i++){

            if(t[i].second>t[i+1].second)
            s++;

            else 
            continue;
        }
        cout<<s+1;
    }
    
    return 0;
}
