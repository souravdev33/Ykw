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

    while (1)
    {
        int x, y;
        cin >> x >> y;
        ll sum = 0;
        if (x <= 0 or y <= 0)
        {
            return 0;
        }
        if (x > y)
        {
            for (int i = y; i <= x; i++)
            {
                sum += i;
                cout << i << " ";
            }
        }
        else
        {
            for (int i = x; i <= y; i++)
            {
                sum += i;
                cout << i << " ";
            }
        }
        cout << "sum" << " " << '=' << sum << endl;
    }
    return 0;
}