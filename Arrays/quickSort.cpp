#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i <= j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (pivot < arr[j] && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);  // Left split
        quickSort(arr, pivot + 1, high); // right split
    }
}
int main()
{
    int arr[10] = {15, 3, 12, 6, 9, 7, 5, 10, 2, 8};
    quickSort(arr, 0, 9);
    display(arr, 10);
    return 0;
}
