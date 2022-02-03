#include<bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    vector<int>vo;
    
    if(n!=2 && n!=3){

    for(int i =1;i<n+1;i++){

        if(i%2){
            vo.push_back(i);
        }
        else{

            cout<<i<<" ";
        }
    }

    int s2 = vo.size();


    for(int i = 0;i<s2;i++){

        cout<<vo[i]<<" ";
    }

    }
    else
    cout<<"NO SOLUTION";

    return 0;
}