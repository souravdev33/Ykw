#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int min_result = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int s = v[i] + v[j] + j - i;

                min_result = min(min_result, s);
            }
        }
        cout << min_result << endl;
    }

    return 0;
}
