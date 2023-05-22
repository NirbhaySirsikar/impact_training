#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int x, y; cin >> x >> y;
    for (int i = 0; i < n; i++) if (i < x || i > y) cout << a[i] << " ";
    return 0;
}