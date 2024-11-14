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

    ll a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << "Multiples" << endl;
    else if (b % a == 0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples" << endl;

    return 0;
}