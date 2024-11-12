#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <math.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x;
    cin >> x;
    double ans = 3.141592653 * (x * x);
    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}