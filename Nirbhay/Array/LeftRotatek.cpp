#include <bits/stdc++.h>
using namespace std;

void rev(vector<int> *a, int i, int j)
{
    while (i < j )
    {
        swap((*a)[i], (*a)[j]);
        i++;
        j--;
    }
}

void leftRotate(vector<int> *a, int n, int k)
{
    k = k % n;
    rev(a, 0, n - k);
    rev(a, n - k + 1, n - 1);
    rev(a, 0, n - 1);
}

int main()
{
    int n, k;
    vector<int> a(n);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rev(&a, 0, n-1);
    // leftRotate(&a, n, k);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}