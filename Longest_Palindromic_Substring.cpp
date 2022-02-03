#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    
    string ans = "";

    for(int i =0;i<s.size();++i)
    {
        string res = "";
        for(int j =i;j<s.size();++j)
        {

            bool k = true;
            res = res +s[j];
            for(int o = 0,r = res.size()-1;o<res.size()/2;++o,--r)
            {
                if(res[o]!=res[r])
                k =false;
            }
            if(k && ans.size()<res.size())
            ans = res;
        }
    }
    cout<<ans;

    return 0;
}