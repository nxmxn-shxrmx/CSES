#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<int>v;

void join(vector<int>&v,int l ,int mid ,int r)
{
    vector<int>lv,rv;
    for(int i =l;i<=mid;++i)
    lv.push_back(v[i]);
    for (int i = mid+1; i <=r; i++)
    rv.push_back(v[i]);


    lv.push_back(INT_MAX);
    rv.push_back(INT_MAX);

    int o = 0;
    int e = 0;
    for(int i = l;i<=r;++i)
    {
        if(lv[o]>rv[e])
        {
            v[i]=rv[e];
            ++e;
        }
        else
        {
            v[i]=lv[o];
            ++o;
        }
    }

}

void merge(vector<int>&v,int l,int r)
{
    if(l==r)
    return;
    
        int mid = (l+r)/2;
        merge(v,l,mid);
        merge(v,mid+1,r);
        join(v,l,mid,r);
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;

    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    merge(v,0,n-1);
    for(auto c:v)
    cout<<c<<" ";


    return 0;
}