#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n,int k){
    int temp,j;
    for(int i=1;i<=k;i++){
        temp=arr[i];
        j=i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array after "<<k<<"th iterations is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,k;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of iterations:\n";
    cin>>k;
    InsertionSort(arr,n,k);
    return 0;
}
