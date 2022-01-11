#include<iostream>
using namespace std;
int main(){
    int n,i,j,c=1;
    cin>>n;
    c=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=c;j++){
            cout<<" ";
        }
        c--;
        for(j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    c=1;
    for(i=1;i<=(n-1);i++){
        for(j=1;j<=c;j++){
            cout<<" ";
        }
        c++;
        for(j=1;j<=(2*(n-i)-1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;
    return 0;
}
