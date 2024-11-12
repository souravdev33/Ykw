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

    int a;
    char c;
    int b;
    cin >> a >> c >> b;

    if (c == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
            return 0;
        }
        else if (a < b)
        {
            cout << "Wrong" << endl;
            return 0;
        }
    }
    if (c == '<')
    {
        if (a < b)
        {
            cout << "Right" << endl;
            return 0;
        }
        else if (a > b)
        {
            cout << "Wrong" << endl;
            return 0;
        }
    }
    if (c == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
            return 0;
        }
        if (a != b)
        {
            cout << "Wrong" << endl;
            return 0;
        }
    }
}
