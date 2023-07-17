#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int c = floor(n / 2);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[a[i]]++;

    for (auto it : mpp)
    {
        if (it.second > c)
            cout << it.first << " ";
    }

    return 0;
}