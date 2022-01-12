#include <iostream>
using namespace std;
int fib(int x) {
   if(x==0) {
       return 0;
   }
   if(x==1){
       return 1;
   }
   return fib(x-1)+fib(x-2);
}
int sum(int x){
    int Total=0;
    for(int i=1;i<=x;i++)
    Total+=fib(i);
    return Total;
}
int main() {
    int x;
    cin>>x;
    cout<<sum(x)<<endl;
   return 0;
}
