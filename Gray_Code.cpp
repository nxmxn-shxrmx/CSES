#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n;cin>>n;
    ll m = 1<<n;

    vector<string>st;

    st.push_back("0");
    st.push_back("1");

    for(int i = 2;i<m;i=i<<1){

        for(int j =i-1;j>=0;j--){
            st.push_back(st[j]);
        }

        for(int j = 0;j<i;j++){
            st[j]="0"+st[j];
        }
        for(int j = i;j<i<<1;j++){
            st[j]="1"+st[j];
        }
    }
    for(auto x:st)
    cout<<x<<"\n";
    
    return 0;
}