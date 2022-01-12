#include<iostream>
#include<cmath>
using namespace std;
void printPat(int n){
    int d;
    if(n==0)
    return;
    for(int i=0;i<n;i++){
        d=pow(2,i);
        cout<<"1/"<<d<<"+";
    }
}
int main(){
    int n;
    cin>>n;
    printPat(n);
    return 0;
}
