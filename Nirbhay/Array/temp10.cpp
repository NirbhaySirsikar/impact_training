#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &a)
    {
        int m(a.size()), n(a[0].size()), left(0), right(n - 1), top(0), down(m - 1), dir(0);
        vector<int> ans;
        while (left <= right and top <= down)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans.push_back(a[top][i]);
                }
                top++;
            }
            if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    ans.push_back(a[i][right]);
                }
                right--;
            }
            if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(a[down][i]);
                }
                down--;
            }
            if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    ans.push_back(a[i][left]);
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> a{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    vector<int> ans = s.spiralOrder(a);
    for (auto i : ans)
        cout << i << " ";

    return 0;
}