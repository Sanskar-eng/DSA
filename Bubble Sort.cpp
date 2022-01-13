#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
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
    BubbleSort(arr,n);
    return 0;
}
