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

    vector<int> v(3);

    
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int>arr=v;
    sort(arr.begin(), arr.end());
    for (auto &i : arr)
    {
        cout << i << endl;
    }
    cout << endl;


    for (auto &i : v)
    {
        cout << i << endl;
    }

    return 0;
}