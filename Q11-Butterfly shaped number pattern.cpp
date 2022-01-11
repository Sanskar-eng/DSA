#include<iostream>
using namespace std;
int main(){
  int n,c=1;
  cin>>n;
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j<=c || j>=n-c+1)
      {
        cout<<j;
      }
      else
      {
        cout<<" ";
      }
    }
    if(i<=n/2){
      c++;
    }
    else
    {
      c--;
    }
    cout<<"\n";
  }
  return 0;
}
