#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll= long long;
using namespace std;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = a; i <= b; i++) {
        int num = i;
        int count = 0; 

        while (num > 0) {
            count += (num & 1); 
            num = num >> 1;     
        }

        sum += count; 
    }

    cout << sum << endl;

    return 0;
}
