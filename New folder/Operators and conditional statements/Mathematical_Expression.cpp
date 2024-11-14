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

    int a, b, ans;
    char x, y;
    cin >> a >> x >> b >> y >> ans;

    if (x == '+')
    {
        if (a + b == ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (x == '-')
    {
        if (a - b == ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }

    else if (x == '*')
    {
        if (a * b == ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }
    else{
        return 0; 
    }
   
}