#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row size:";
    int n;
    cin>>n;
    int j,i,p;
     for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(j==i || j+i==n+1)
               {
               cout<<i;
                 }
               else
               {
                 cout<<" ";
               }
             }
            cout<<"\n";
     }
}
