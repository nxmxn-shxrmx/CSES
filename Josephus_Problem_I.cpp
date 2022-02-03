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

    for(int i=0;i<n;++i){

        v.push_back(i+1);
    }
    while(v.size()>1){
        vector<int>s;

        for(int i=0;i<v.size();++i){
            if(i%2)
            cout<<v[i]<<" ";

            else
            s.push_back(v[i]);
        }
        if(v.size()%2==0)
        v = s;

        else{

            int d = s.back();
            v.clear();
            s.pop_back();
            v.push_back(d);
            for(auto x:s){
                v.push_back(x);
            }
        }
    }
    cout<<v[0];



    return 0;
}