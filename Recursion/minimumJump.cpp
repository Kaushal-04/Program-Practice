#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr, int n, int i)
{
    if (i >= n)
        return 0;
    int res = INT_MAX;
    for (int j = 1; j <= arr[i] && j < n; j++)
    {
        int count = 1 + helper(arr, n, i + j);
        if (count < res)
            res = count;
    }
    return res;
}
int main()
{
    cout << "HI" << endl;
    vector<int> arr = {2, 3, 1, 1, 4};
    int n = arr.size();
    cout << helper(arr, n - 1, 0);
    return 0;
}