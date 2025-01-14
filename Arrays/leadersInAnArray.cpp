#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    int max = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (ans.size() == 0)
        {
            ans.push_back(max);
        }
        if (nums[i] > max)
        {
            max = nums[i];
            ans.push_back(nums[i]);
            
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {16, 17,17, 4, 3, 5, 2};
    vector<int> ans = leaders(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
