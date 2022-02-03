#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    map<int,int>m;

    for(int i=0;i<n;i++){
        int f;cin>>f;
        m[f]++;
    }
    int f = m.size();

    cout<<f<<"\n";


    return 0;
}