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

    int x,y;
    cin>>x>>y;

    int maxxx;
    int res=0;
    vector<int>v;

    for(int i=x;i<=y;i++){
        for(int j=i;j<=y;j++){
            int x=(i^j);
            v.push_back(x);
        }
    }

    cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}
