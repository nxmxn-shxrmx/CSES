#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

multiset<pair<int,int>>v;

void hanoi(int n,int s,int d,int h)
{
    if(n==0)
    {
    return;
    }

    else
    {
        hanoi(n-1,s,h,d);
         v.insert({n,d});
        hanoi(n-1,h,d,s);
        

    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int s = 1;
    int h = 2;
    int d = 3;
    hanoi(n,1,3,2);
    cout<<v.size()<<"\n";
    for(auto c:v)
    cout<<c.first<<" "<<c.second<<"\n";
    return 0;
}