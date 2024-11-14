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

    ll n;
    cin >> n;
    ll arr[n];

    for (auto &i : arr)
        cin >> i;
    ll sum = 0;
    for (auto &i : arr)
        sum += i;
    cout << abs(sum) << endl;

    return 0;
}