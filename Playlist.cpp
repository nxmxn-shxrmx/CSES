/*
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

 //  https://www.geeksforgeeks.org/longest-subarray-consisiting-of-unique-elements-from-an-array/ 

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;cin>>n;
    unordered_map<ll,ll>madd;
    ll dd = INT_MIN;
    vector<ll>vd;

    for(int i=0;i<n;++i){
        int f;cin>>f;
        vd.push_back(f);
    }
    for(ll i=0,j=0;i<n;++i){

        j = max(madd[vd[i]],j);

        dd = max(dd,i-j+1);
        madd[vd[i]]=1+i;

    }
    cout<<dd;

  
 
    ll gg=0; 
    for(int i=0;i<n;++i){

        ll f;cin>>f;
        if(madd.find(f)==madd.end()){
            madd[f]=false;
            vd.push_back(f);
            gg++;

        }
        else{
            if(vd[0]==f){
                vd.erase(vd.begin());
                vd.push_back(f);
            }
            else{
                auto it = find(vd.begin(),vd.end(),f);
                vd.erase(vd.begin(),it);

                vd.push_back(f);
    
                gg=1;
            }
        }
        dd = max(dd,gg);
    }
    cout<<dd;


    return 0;
}*/
#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>v;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    set<int>s;
    int ans = 1;
    for(int i =0,j=0;i<n;++i)
    {
        while(j<n && s.find(v[j])==s.end())
        {
        s.insert(v[j]);
        ++j;
        }
        ans = max(ans,j-i);
        s.erase(v[i]);
    }
    cout<<ans;
	return 0;
}