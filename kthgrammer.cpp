#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
int resi(int n,int k)
{

    if(n==1 && k==1)
    return 0;

    ll w = pow(2,n-1)+.25;
    if(k<=w/2)
    return resi(n-1,k);

    else
    return !(resi(n-1,k-w/2));
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;

   cout<< resi(n,k);
    return 0;
}