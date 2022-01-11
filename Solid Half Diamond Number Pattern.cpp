#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    for(int i=n;i>=-n;i--){
        for(int j=n;j>=abs(i);j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
