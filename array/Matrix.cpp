#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    ll sum1=0,sum2=0;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j) sum1+=v[i][j];
            if(i+j==n-1) sum2+=v[i][j];
        }
    }
    
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}