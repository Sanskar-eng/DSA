#include<iostream>
using namespace std;
void printOrder(int n){
    if(n==0)
    return;
    printOrder(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printOrder(n);
    return 0;
}
