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
    vector<int> v(n);
    int count = 0;

    for (auto &i : v)
        cin >> i;

    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum % 2 != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    while (true)
    {
        bool all_even = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                all_even = false;
                break;
            }
            v[i] /= 2;
        }

        if (all_even)
            count++;
        else
            break;
    }

    cout << count << endl;
    return 0;
}
