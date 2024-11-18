#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n >> i;

    int x = (n & (1 << i)) != 0;

    cout << x << endl;

    return 0;
}
