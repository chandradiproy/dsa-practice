#include <iostream>
#include <vector>

using namespace std;
vector<int> findTwoElements(vector<int> &arr)
{
    
    int n = arr.size();
    long long sumOfN = (n * (n + 1)) / 2, totalSumN = 0;
    long long sumOfSqrN = (n * (n + 1) * ((2 * n) + 1)) / 6, totalSumNsqr = 0;
    for (int i = 0; i < n; i++)
    {
        totalSumN += arr[i];
        totalSumNsqr += ((long long)arr[i] * (long long)arr[i]);
    }
    long long val1 = totalSumN - sumOfN;
    long long val2 = totalSumNsqr - sumOfSqrN;
    val2 = val2 / val1;
    int x = (val1 + val2) / 2;
    int y = x - val1;

    return { x, y };
}

int main()
{
    vector<int> arr = {2, 2};
    vector<int> result = findTwoElements(arr);
    cout << "Repeating element: " << result[0] << endl;
    cout << "Missing element: " << result[1] << endl;
    return 0;
}
