#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    int count = 0;

public:
    void reversePairs(vector<int> &nums, int low, int mid, int high){
        int right = mid+1;
        for(int i = low ; i<=mid ; i++){
            while(right<=high && nums[i] > (2LL*nums[right])){
                right++;
            } 
            count += right-(mid+1);
        }
    }
    void merge(vector<int> &nums, int low, int mid, int high)
    {
        int i = low, j = mid + 1, k = low;
        vector<int> temp;
        while (i <= mid && j <= high)
        {
            if (nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid)
        {
            temp.push_back(nums[i++]);
        }
        while (j <= high)
        {
            temp.push_back(nums[j++]);
        }
        for (int i = low; i <= high; i++)
        {
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);
            reversePairs(nums, low, mid, high);
            merge(nums, low, mid, high);
        }
    }
    int reversePairs(vector<int> &nums)
    {
        count = 0;
        mergeSort(nums, 0, nums.size() - 1);
        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {2147483647,2147483647,2147483647,2147483647,2147483647,2147483647};
    // vector<int> nums2 = {2, 4, 3, 5, 1};
    // vector<int> nums3 = {1, 1, 1};
    cout << "reverse pairs in nums1: " << s.reversePairs(nums1) << endl;
    // cout << "reverse pairs in nums2: " << s.reversePairs(nums2) << endl;
    // cout << "reverse pairs in nums3: " << s.reversePairs(nums3) << endl;
    // // output:
    // reverse pairs in nums1: 2
    // reverse pairs in nums2: 3
    // reverse pairs in nums3: 0

    return 0;
}
