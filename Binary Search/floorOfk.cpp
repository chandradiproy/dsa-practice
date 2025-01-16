#include <iostream>
#include <vector>

using namespace std;

int findFloor(vector<int> &arr, int k)
{

    int l = 0, r = arr.size() - 1, mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] <= k)
        {
            return mid;
        }
        else
        {
            if (arr[mid] > k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}

//{ Driver Code Starts.
int main()
{
    vector<int> v1 = {1, 2, 8, 10, 12, 19};
    cout << findFloor(v1, 5) << endl;  // 1
    cout << findFloor(v1, 20) << endl; // 5
    vector<int> v2 = {1, 3, 5, 7, 10};
    cout << findFloor(v2, 4) << endl; // 2
    return 0;
}