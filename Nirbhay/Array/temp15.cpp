#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    if (a[0] < 0)
    {
        if (a[0] != -1)
            cout << a[0] << "x^" << n;
        else
            cout << "-x^" << n;
    }
    else if (a[0] > 0)
        cout << a[0] << "x^" << n;
    for (int i = 1; i < n; i++)
    {
        if (n - i == 1)
        {
            if (a[i] < 0)
                cout << a[i] << "x";
            else if (a[i] > 0)
                cout << "+" << a[i] << "x";
            continue;
        }
        if (a[i] < 0)
        {
            if (a[i] == -1)
                cout << "-"
                     << "x^" << n - i;
            else
                cout << a[i] << "x^" << n - i;
        }
        else if (a[i] > 0)
        {
            if (i == 1)
                cout << "+"
                     << "x^" << n - i;
            else
                cout << a[i] << "x^" << n - i;
        }
    }
    if (a[n] < 0)
        cout << a[n];
    else if (a[n] > 0)
        cout << "+" << a[n];
    return 0;
}