#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;cin>>n>>k;

    map<ll,int>m;

    ll c =0;
    ll s =0;
    m[0]++;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        s+=f;
        ll d = s-k;
        if(m.find(d)!=m.end())
        {
            c+=m[d];
        }

         m[s]++;
    }


    cout<<c<<"\n";
    



    return 0;
}