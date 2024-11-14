#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll= long long;
using namespace std;


void printAllSubarraysMax(int n, vector<int> &arr)
{
    for (int start = 0; start < n; start++)
    {
        int maxx = INT_MIN;
        for (int end = start; end < n; end++)
        {
            
            maxx = max(maxx, arr[end]);
        
            cout << maxx << " ";
        }
    }
    cout << endl; 
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        printAllSubarraysMax(n, arr);
    }

    return 0;
}
