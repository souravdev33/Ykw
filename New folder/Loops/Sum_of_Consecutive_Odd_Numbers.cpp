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

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        int x,y;
        cin>>x>>y;

        int low=min(x,y);
        int high=max(x,y);

        ll sum=0;
        for(int i=low+1;i<high;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}