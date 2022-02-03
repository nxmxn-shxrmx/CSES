// #include<bits/stdc++.h>
 
// using namespace std;
 
// #define ll long long
// #define mod (ll)(1e9 +7)
 
// const int N =1e5+10;
//  ll n,k;
//  ll l1 = 0,l2=0;
   
 
//     vector<ll>v;
//     multiset<ll>l,r,m;
 
// void lins(ll d)
// {
//     if(d>*l.rbegin())
//     {
//         r.insert(d);
//         l2+=d;
//         if(r.size()>l.size())
//         {
//             l.insert(*r.begin());
//             l1+=*r.begin();
    
//             l2-=*r.begin();
//             r.erase(r.find(*r.begin()));
// ;        }
//         if(l.size()!=r.size())
//         {
//             m.insert(*l.rbegin());
//             l1-=*l.rbegin();
//             l.erase(l.find(*l.rbegin()));
//         }
//     }
//     else
//         {
//             l.insert(d);
//             l1+=d;
//             if(l.size()>r.size())
//             {
//                 r.insert(*l.rbegin());
//                 l2+=*l.rbegin();
//                 l1-=*l.rbegin();
//                 l.erase(l.find(*l.rbegin()));
               
//             }
//             if(l.size()!=r.size())
//             {
//             m.insert(*r.begin());
//             l2-=*r.begin();
//             r.erase(r.find(*r.begin()));
//             }
//         }
 
// }
// void oins(ll d)
// {
//     if(d>*l.rbegin())
//     {
//         r.insert(d);
//         l2+=d;
//         if(r.size()>l.size())
//         {
//             l.insert(*r.begin());
//             l1+=*r.begin();
    
//             l2-=*r.begin();
//             r.erase(r.find(*r.begin()));
//         }
//     }
//      else
//         {
//             l.insert(d);
//             l1+=d;
//             if(l.size()>r.size())
//             {
//                 r.insert(*l.rbegin());
//                 l2+=*l.rbegin();
//                 l1-=*l.rbegin();
//                 l.erase(l.find(*l.rbegin()));
               
//             }
//         }
// }
 
// void oer(ll d)
// {
//     if(l.find(d)!=l.end())
//     {
//         l1-=d;
//         l.insert(*r.begin());
//         l1+=*r.begin();
//         l2-=*r.begin();
//         r.erase(r.find(*r.begin()));
//     }
//     else
//     {
//         l2-=d;
//         r.insert(*l.rbegin());
//         l2+=*l.rbegin();
//         l1-=*l.rbegin();
//         l.erase(l.find(*l.rbegin()));
//     }
// }
// void ler(ll d)
// {
//     if(l.find(d)!=l.end())
//     {
//        l.erase(l.find(d));
//        l1-=d;
//     }
//     else if(r.find(d)!=r.end())
//     {
//         r.erase(r.find(d));
//         l2-=d;
//     }
//     else
//     m.erase(m.find(d));
 
//     if(l.empty())
//     {
//         l.insert(*m.begin());
//         l1+=*m.begin();
//         m.erase(m.find(*m.begin()));
//     }
//     if(r.empty())
//     {
//         r.insert(*m.begin());
//         l2+=*m.begin();
//         m.erase(m.find(*m.begin()));
//     }
// }
 
// int main(){
 
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
 
//     cin>>n>>k;
 
//     if(k==1)
//     for(int i =0;i<n;++i)
//     {
//         ll f;cin>>f;
//         cout<<0<<" ";
//     }
//     else if(k&1)
//     {
//         ll f;cin>>f;
//         l.insert(f);
//         v.push_back(f);
//         l1=f;
//         for(int i =1;i<k;++i)
//         {
//             ll f;cin>>f;
//             v.push_back(f);
//             lins(f);
//         }
//         cout<<l2-l1<<" ";
//         for(int i =k;i<n;++i)
//         {
//             ll f;cin>>f;
//             v.push_back(f);
        
//             ler(v[i-k]);
//             lins(f);
//             cout<<l2-l1<<" ";
//         }
        
//     }
//     else
//     {
//         ll f;cin>>f;
//         l.insert(f);
//         v.push_back(f);
//         l1=f;
//         for(int i =1;i<k;++i)
//         {
//             ll f;cin>>f;
//             v.push_back(f);
//             oins(f);
//         }
//         cout<<l2-l1<<" ";
//         for(int i =k;i<n;++i)
//         {
//             ll f;cin>>f;
//             v.push_back(f);
        
//             oer(v[i-k]);
//             oins(f);
//             cout<<l2-l1<<" ";
//         }
//     }
 
 
 
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
ll l1 = 0;
ll l2 = 0;
ll n,k;
multiset<ll>l,r;

void ins(ll d)
{
    ll x = *l.rbegin();
    if(d>x)
    {
        r.insert(d);
        l2+=d;
        if(r.size()>l.size())
        {
            l2-=*r.begin();
            l1+=*r.begin();
            l.insert(*r.begin());
            r.erase(r.find(*r.begin()));
        }
    }
    else
    {
        l.insert(d);
        l1+=d;
        if(l.size()>(k+1)/2)
        {
            l1-=*l.rbegin();
            l2+=*l.rbegin();
            r.insert(*l.rbegin());
            l.erase(l.find(*l.rbegin()));
        }
    }
}

void del(ll d)
{
    if(r.find(d)!=r.end())
    {
        l2-=d;
        r.erase(r.find(d));
    }
    else
    {
        l1-=d;
        l.erase(l.find(d));
        if(l.empty())
        {
            l1+=*r.begin();
            l.insert(*r.begin());
            r.erase(r.find(*r.begin()));
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    if(k==1)
    {
        for(int i = 0;i<n;++i)
        {
            ll f;cin>>f;
            cout<<0<<" ";
        }
    }
    else if(k==2)
    {
        ll f;cin>>f;
        vector<ll>v;
        v.push_back(f);
        for(int i =1;i<n;++i)
        {
            ll f;cin>>f;
            cout<<abs(v[i-1]-f)<<" ";
            v.push_back(f);
        }
    }
    else
    {
            ll f;cin>>f;
            l1 = f;
            vector<ll>v;
            v.push_back(f);
            l.insert(f);

            for(int i = 1;i<k;++i)
            {
                ll f;cin>>f;
                ins(f);
                v.push_back(f);
            }
            ll o = abs(l2-l1);
            if(k&1)
            o = abs(l2-(l1-*l.rbegin()));
            cout<<o<<" ";

            for(int i = k;i<n;++i)
            {
                ll f;cin>>f;
                v.push_back(f);
                if(k==1)
                {
                    ins(f);
                    del(v[i-k]);
                }
                else
                {
                    del(v[i-k]);
                    ins(f);
                }
                ll o = abs(l2-l1);
                if(k&1)
                o = abs(l2-(l1-*l.rbegin()));
                cout<<o<<" ";

            }
    }


    return 0;
}