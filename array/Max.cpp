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
    vector<int>v(n);

    for(auto &i : v){
        cin>>i;
    }

    int max=v[0];

    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    cout<<max<<endl;

    return 0;
}