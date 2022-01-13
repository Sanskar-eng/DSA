#include<iostream>
using namespace std;
void SelSort(int arr[],int n){
    int min,idx;
    for(int i=0;i<n-1;i++){
        min=arr[i];
        idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        if(idx!=i){
            swap(arr[idx],arr[i]);
        }
    }
    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelSort(arr,n);
    return 0;
}
