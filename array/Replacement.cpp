#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll= long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n),arr;

    for(int &i : v){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if(v[i]==0){
            arr.push_back(0);
        }
        else if(v[i]>0){
            arr.push_back(1);
        }
        else if(v[i]<0){
            arr.push_back(2);
        }
        
    }

    for(auto &i : arr){
        cout<<i<<" ";
    }
    return 0;
}