#include<bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n,tem,sitam=0;
    cin>> n;


    while(cin>>tem){
        sitam += tem;
    }

    long long s =n*(n+1)/2;

    cout<< s-sitam;

    return 0;
}
