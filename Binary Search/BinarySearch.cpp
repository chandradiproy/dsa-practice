#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int mid = 0, left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else
        {
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5, 6};
    int target1 = 4;
    cout << search(nums1, target1) << endl; // 3

    vector<int> nums2 = {10, 20, 30, 40, 50};
    int target2 = 35;
    cout << search(nums2, target2) << endl; // -1

    vector<int> nums3 = {-5, -2, 0, 3, 7, 10};
    int target3 = -2;
    cout << search(nums3, target3) << endl; // 1

    vector<int> nums4 = {3};
    int target4 = 3;
    cout << search(nums4, target4) << endl; // 0

    vector<int> nums5 = {1, 2, 3, 4, 5};
    int target5 = 6;
    cout << search(nums5, target5) << endl; // -1

    return 0;
}
