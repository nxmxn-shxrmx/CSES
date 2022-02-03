#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    set<pair<int,int>>s;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;

        if(i==0)
        cout<<0<<" ";

        else
        {
            //1 3 4 2
            bool k =true;
            while (s.size())
            {
                auto it = s.rbegin();
                auto u = *it;
                if(u.second<f)
                {
                    cout<<u.first<<" ";
                    k = false;
                    break;
                }
                else
                {
                    s.erase(u);
                }
            }
            if(k)
            cout<<0<<" ";
            
        }
        s.insert({i+1,f});   


    }



    return 0;
}