#include<bits/stdc++.h>

using namespace std;
#define ll long long

#pragma GCC optimize("O3")

void dis(vector<ll>& so){
    for(auto i:so){

        cout<<i<<" ";

    }
    cout <<endl;
}

void output(ll n){

    ll s = n*(n+1)/2;

    if(s%2==0){

        vector<ll> s1,s2;
        ll as = s/2;
        for(ll i =n;i>0;i--){

            if(i<=as){

                s1.push_back(i);
                as-=i;
            }
            else{
                s2.push_back(i);
            }
        }

        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        dis(s1);
        cout<<s2.size()<<endl;
        dis(s2);

    }
    else{
        cout<<"NO";
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin>>n;

    output(n);

    return 0;
}