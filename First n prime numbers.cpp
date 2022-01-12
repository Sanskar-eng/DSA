#include<iostream>
#include<cmath>
using namespace std;
int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return CheckPrime(i+1,num);
    }
}
int main()
{
    int n,i;
    cout<<"Enter the N Value:";
    cin>>n;
    cout<<"Prime Number Between 1 to n are: ";
   for(i=2;i<=n;i++)
    if(CheckPrime(2,i)==0)
        cout<<i<<" ";
}
