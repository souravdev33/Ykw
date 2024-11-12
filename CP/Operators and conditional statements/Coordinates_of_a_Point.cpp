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

    float x, y;
    cin >> x >> y;

    if (x == 0 and y == 0)
    {
        cout << "Origem" << endl;
    }

    else if (x != 0 and y == 0)
    {
        cout << "Eixo X" << endl;
    }

    else if (x == 0 and y != 0)
    {
        cout << "Eixo Y" << endl;
    }

    else if (x > 0 and y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x > 0 and y < 0)
    {
        cout << "Q4" << endl;
    }
    else if (x < 0 and y < 0)
    {
        cout << "Q3" << endl;
    }
    else if (x < 0 and y > 0)
    {
        cout << "Q2" << endl;
    }

    return 0;
}
