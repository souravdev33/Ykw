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
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;
    vector<int> arr = v;
    int pos = 0;
    sort(arr.begin(), arr.end());
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] == min)
        {
            pos = i+1;
            break;
        }
    }

    cout << min << " " << pos << endl;
    return 0;
}