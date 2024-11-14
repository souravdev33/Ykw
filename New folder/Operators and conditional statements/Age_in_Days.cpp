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
    ll year = n / 365;
    ll month = (n % 365) / 30;
    ll day = (n % 365) % 30;

    cout << year << " " << "years" << endl;
    cout << month << " " << "months" << endl;
    cout << day << " " << "days" << endl;

    return 0;
}