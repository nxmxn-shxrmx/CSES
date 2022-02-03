#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin>>s;

    map<char,int>ma;
    ll ss = s.length();
    for(auto x:s){
        ma[x]++;
    }

    ll count  = 0;
    char a;

    for(auto x: ma){
        if(x.second%2){
            count++;
            a = x.first;
        }
    }
    if(count>1 ||(count==1 && ss%2==0))
    cout<<"NO SOLUTION";

    else{

        string fir = "",sec="",mid ="";

        for(auto x:ma){
            if(a!=x.first){
            string saa(x.second/2,x.first);
            fir +=saa;
            sec = saa+sec;
            }
            else{
                string mido(x.second,x.first);
                mid = mido; 
            }

        }
        cout<<fir+mid+sec;
    }


    return 0;
}