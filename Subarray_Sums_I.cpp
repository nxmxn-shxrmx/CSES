#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    
    int c= 0;
    vector<int>v;
    map<ll,int>ma;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    int w =0;
    ll s =0;
    ma[0]++;
  /*  for(int i =0;i<n;++i)
    {
        s+=v[i];
        while(s>=m)
        {
            if(s==m)
            c++;

            s-=v[w];
            w++;
        }


    }

    */
   for(int i =0;i<n;++i)
   {
       s+=v[i];
       ll d= s-m;
       if(ma.find(d)!=ma.end())
       c+=ma[d];

       ma[s]++;

   }
   
    cout<<c<<"\n";

    return 0;
}