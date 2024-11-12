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
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    for (auto &i : v)
    {
        cout << i << endl;
    }

    return 0;
}