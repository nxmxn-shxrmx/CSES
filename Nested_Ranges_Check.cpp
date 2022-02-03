#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    vector<pair<pair<int,int>,int>>v;
    map<int,int>m1;
    map<int,int>m2;
    
    

    for(int  i =0;i<n;++i){
        int a,b;
        cin>>a>>b;

        v.push_back(make_pair(make_pair(a,b),i));
    }

    sort(begin(v),end(v));
    for(int i =0;i<n;++i){

        for(int j = i+1;j<n;++j){

            if(v[j].first.first>=v[i].first.first && v[j].first.second<=v[i].first.second){

                //p.push_back(make_pair(i,1));
                //t.push_back(make_pair(j,1));
                //k =1;
                m1[v[i].second] = 1;
                m2[v[j].second]=1;

            }
            if(v[i].first.first>=v[j].first.first && v[i].first.second<=v[j].first.second){

                //p.push_back(make_pair(j,1));
                //t.push_back(make_pair(i,1));
                m1[v[j].second]=1;
                m2[v[i].second]=1;
            }
        }
        
    }
    for(int i =0;i<n;++i){
        cout<<m1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;++i)
    cout<<m2[i]<<" ";
    return 0;
}