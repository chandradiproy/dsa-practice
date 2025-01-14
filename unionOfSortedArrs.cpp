#include <iostream>
#include <vector>
using namespace std;

vector<int> unionSortedArrs(vector<int> nums1, vector<int> nums2)
{
    vector<int> res;
    int i = 0, j = 0, size1 = nums1.size(), size2 = nums2.size();
    while (i < size1 && j < size2)
    {
        if (nums1[i] <= nums2[j])
        {
            if (res.size() == 0 || res.back() != nums1[i])
            {
                res.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (res.size() == 0 || res.back() != nums2[j])
            {
                res.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (i < size1)
    {
        if (res.back() != nums1[i])
        {
            res.push_back(nums1[i]);
        }
        i++;
    }
    while (j < size2)
    {
        if (res.back() != nums2[j])
        {
            res.push_back(nums2[j]);
        }
        j++;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> nums2 = {2, 2, 3};
    vector<int> res = unionSortedArrs(nums1, nums2);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}
