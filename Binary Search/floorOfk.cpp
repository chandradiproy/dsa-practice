#include <iostream>
#include <vector>

using namespace std;

int findFloor(vector<int> &nums, int target)
{
    int mid = 0, left = 0, right = nums.size() - 1, ans = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] >= target)
        {
            ans=mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return ans;
}

//{ Driver Code Starts.
int main()
{
    vector<int> v1 = {1, 2, 8, 10, 12, 19};
    cout << findFloor(v1, 2) << endl;  // 1
    cout << findFloor(v1, 5) << endl; // 5
    vector<int> v2 = {1, 3, 5, 7, 10};
    cout << findFloor(v2, 4) << endl; // 2
    return 0;
}