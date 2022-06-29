#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    int n = nums.size();
    int i = 0, j = n - 1;
    vector<pair<int, int>> newnums(n);
    for (int k = 0; k < n; k++)
    {
        newnums[k].first = nums[k];
        newnums[k].second = k;
    }
    sort(newnums.begin(), newnums.end());
    while (i <= j)
    {
        if (newnums[i].first + newnums[j].first == target)
        {
            result.push_back(newnums[i].second);
            result.push_back(newnums[j].second);
            return result;
        }
        else if (newnums[i].first + newnums[j].first < target)
        {
            i++;
        }
        else if (newnums[i].first + newnums[j].first > target)
        {
            j--;
        }
    }
    return result;
}
int main()
{
    int n, i, t, key;
    cin >> t;
    while (t--)
#include <iostream>
        using namespace std;
    {
        cin >> n;
        vector<int> v(n);
        for (i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            v.push_back(j);
        }
        cin >> key;
        vector<int> result = twoSum(v, key);
        cout << result[0] << ", " << v[1] << endl;
    }
}