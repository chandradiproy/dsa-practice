#include<iostream>
#include<time.h>
using namespace std;
void display(int arr[], int n){    
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[], int low, int mid, int high){
    int i = low, j = mid+1, k=0, size= high-low+1;
    // cout<<"low: "<<low<<" mid: "<<mid<<" high: "<<high<<endl;
    int temp[size]; //temp array to store the merged array
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
    // display(temp, size);
    for(int i = low, k = 0; i<=high ; i++, k++){
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low==high) return;
    int mid = low+(high-low)/2;
    mergeSort(arr,low, mid); //Left split
    mergeSort(arr,mid+1,high); //right split
    merge(arr, low, mid, high);
}







int main(int argc, const char** argv) {
    int n = 100;
    int arr[100];
    srand(time(0));
    for(int i = 0 ; i<n ; i++){
        arr[i] = rand()%100;
    }
    cout<<"Before Merge Sort"<<endl;
    display(arr, n);

    mergeSort(arr, 0, n-1);
    cout<<endl<<"After Merge Sort"<<endl;
    display(arr, n);   
    return 0;
}