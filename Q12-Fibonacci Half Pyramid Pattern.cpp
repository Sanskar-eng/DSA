#include<iostream>
using namespace std;
int main(){
  int i,j,a=0,b=1,c=a+b,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      cout<<c<<" ";

      c=a+b;
      a=b;
      b=c;
    }
    cout<<"\n";
  }
  return 0;
}
