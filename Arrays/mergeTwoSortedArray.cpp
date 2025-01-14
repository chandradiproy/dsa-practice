#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1 , j = n-1 , k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }else if(nums1[i]<nums2[j]){
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        nums1[k--] = nums2[j--];
    }


}

int main(int argc, const char** argv) {
    vector<int> nums1 = {1,12,15,0,0,0}, nums2 = {2,5,6};
    merge(nums1, 3, nums2, 3);
    for(auto i:nums1){
        cout<<i<<" ";
    }
    return 0;
}