// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <bitset>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define debug(x) cerr << #x << " = " << (x) << endl;
// using ll = long long;
// using namespace std;

// bool wonderful(int a)
// {
//     if(a%2==0){
//         return false;
//     }
//     if (a % 2 != 0)
//     {
//         string str = bitset<32>(a).to_string();
//         vector<char> v;
//         bool foundOne = false;

//         for (size_t i = 0; i < str.length(); i++)
//         {
//             if (str[i] == '1')
//             {
//                 foundOne = true;
//             }
//             if (foundOne)
//             {
//                 v.push_back(str[i]);
//             }
//         }
//         vector<char> vv = v;
//         sort(v.begin(), v.end());
//         if (vv == v)
//         {
//             return true;
//         }
//         else
//             return false;
//     }
// }

// int main()
// {
//     int a;
//     cin >> a;

//     if (wonderful(a))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// #include <iostream>
// #include <bitset>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;

// bool isOdd(int n)
// {
//     return n % 2 != 0;
// }

// bool isBinaryPalindrome(int n)
// {

//     string str = bitset<32>(n).to_string();
//     str = str.substr(str.find('1'));

//     int left = 0, right = str.size() - 1;
//     while (left < right)
//     {
//         if (str[left] != str[right])
//         {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     if (isOdd(n) && isBinaryPalindrome(n))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

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

    string str = bitset<32>(n).to_string();
    str = str.substr(str.find('1'));
    cout << str << endl;
}