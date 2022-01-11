#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row size:";
    int n;
    cin>>n;
    int i,j;
   int c=n/2+1,x=1;

     for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(j==c || j==n-c+1)
               {
               cout<<x;
                 }
               else
               {
                 cout<<" ";
               }
             }
           if(i<=n/2){
        	   c--;
               x++;
               }
           else{
              c++;
              x--;
           }
            cout<<"\n";
     }
}
