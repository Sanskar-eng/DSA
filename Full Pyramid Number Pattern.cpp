#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<" ";
        }
        for(int j=c;j>=1;j--){
            cout<<j;
        }
        c+=2;
        cout<<endl;
    }
    return 0;
}
