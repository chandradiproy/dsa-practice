#include <iostream>
#include <vector>
#include<unordered_set>

using namespace std;
int longestSubArrWithKSum(vector<int> &arr){
    int longest = 1, n=arr.size();
    unordered_set<int> st;
    for(int i = 0 ; i<n ; i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int count = 1;
            int ele = it+1;
            while(st.find(ele)!=st.end()){
                count++;
                ele++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main() {
    vector<int> arr1 = {100, 4, 200, 1, 3, 2};
    vector<int> arr2 = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    vector<int> arr3 = {1, 9, 3, 10, 4, 20, 2};

    cout << "Longest consecutive sequence length in arr1: " << longestSubArrWithKSum(arr1) << endl;
    cout << "Longest consecutive sequence length in arr2: " << longestSubArrWithKSum(arr2) << endl;
    cout << "Longest consecutive sequence length in arr3: " << longestSubArrWithKSum(arr3) << endl;

    return 0;
}

