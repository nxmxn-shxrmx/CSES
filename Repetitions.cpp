#include<bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;

    int t =0,c=0;
    char d = 'A';
    for(char x:s){
        if(d==x){
            t++;
            if(t>c)
            c = t;
        }
        else{
            t = 1;
            d = x;
        }
    }
    cout << c;

    return 0;
}