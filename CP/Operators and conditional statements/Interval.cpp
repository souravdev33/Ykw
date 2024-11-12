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

    double x;
    cin >> x;

    if (x >= 0 and x <= 25)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (x >= 25 and x <= 50)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (x >= 50 and x <= 75)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (x >= 75 and x <= 100)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}