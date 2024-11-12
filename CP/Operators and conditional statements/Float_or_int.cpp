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

    string str = to_string(x);

    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            if (str[i + 1] == '0')
            {
                cout << "int" << " " << int(x) << endl;
            }
            else
            {
                cout << "float" << " " << int(x) << " " << fixed << setprecision(3) << abs(int(x) - x) << endl;
            }
        }
    }
    return 0;
}