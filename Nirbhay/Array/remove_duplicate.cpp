#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], temp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    temp = a[0];
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != temp)
        {
            temp = a[i];
            ans.push_back(a[i]);
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}