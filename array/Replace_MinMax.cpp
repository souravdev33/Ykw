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

    int n;
    cin >> n;
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
        cin >> temp[i];

    int maxx = temp[0];
    int minn = temp[0];
    for (int i = 0; i < n; i++)
    {

        if (temp[i] > maxx)
        {
            maxx = temp[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (temp[i] < minn)
        {
            minn = temp[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] == maxx)
        {
            temp[i] = minn;
        }
        else if (temp[i] == minn)
        {
            temp[i] = maxx;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}