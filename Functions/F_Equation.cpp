#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sum(int x, int n)
{

    ll sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += pow(x,i);
        }
    }
    cout << sum << endl;
}

int32_t main()
{
    ll x, n;
    cin >> x >> n;
    sum(x, n);
}