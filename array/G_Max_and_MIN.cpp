#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void maxmin(int n, vector<int> &v)
{
    int max = v[0];
    int min = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}

int32_t main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(auto &i : v)cin>>i;
    maxmin(n,v);
}