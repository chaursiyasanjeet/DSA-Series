#include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        j=1;
        while(j<=(i-1)*2){
            cout<<"*";
            j=j+1;
        }
        int start=n-i+1;
        while(start>=1){
            cout<<start;
            start=start-1;
        
        }
        cout<<endl;
        i=i+1;

    }}