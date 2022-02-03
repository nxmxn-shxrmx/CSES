#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    ll c=0,i=5;


    while(i<=n){

        
        ll s = i;
        while(s){
            if(s%5){
                break;
            }
            c++;
            s/=5;
            }
    i+=5;
    }
//or
/*
c = 0
i =5
for(i =5;(n/i)>0;i*=5){
    c = c+ (n/i)
}

or 

while(i<=n){

    a = a+(n/i)
    i*=5

}
*/
    cout<<c;

    return 0;
}