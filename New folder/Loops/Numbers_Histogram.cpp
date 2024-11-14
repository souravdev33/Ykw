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

    char ch;
    cin >> ch;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j <= v[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}