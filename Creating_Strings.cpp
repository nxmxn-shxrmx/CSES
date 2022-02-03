#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string s;cin>>s;
    sort(s.begin(),s.end());

    vector<string>vv;
    do{
        vv.push_back(s);
    }while (next_permutation(s.begin(),s.end()));

    cout<<vv.size()<<endl;
    for(auto x:vv)
    cout<<x<<"\n";



    return 0;
}