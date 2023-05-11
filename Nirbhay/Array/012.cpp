// Given an array of 0s, 1s and 2s. Sort them
// Dutch National Flag Problem
#include <bits/stdc++.h>
using namespace std;
void DNFsort(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[mid], a[low]);
            mid++;
            low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high]);
            high--;
        default:
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    DNFsort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}