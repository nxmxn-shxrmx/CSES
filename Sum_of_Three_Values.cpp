 #include<bits/stdc++.h>
 
 using namespace std;
 
 #define ll long long
 #define mod (ll)(1e9 +7)
 
 int main(){
 
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     ll n,x;
     cin>>n>>x;
     vector<pair<ll,int>>v;
    
     for(int i =0;i<n;++i){
         ll f;cin>>f;
         v.push_back(make_pair(f,i+1));
     }
     sort(begin(v),end(v));
//1 2 5 7
     for(int i =0;i<n;++i){
         int k = n-1;
         int d = x-v[i].first;
         for(int j = i+1;j<n-1;++j){
                while (v[j].first+v[k].first>d)
                k--;

                if(j<k && v[j].first+v[k].first==d)
                {
                    cout<<v[j].second<<" "<<v[k].second<<" "<<v[i].second;
                    return 0;
                }
                
         }
     }
     cout<<"IMPOSSIBLE";
 
 
 
     return 0;
 }