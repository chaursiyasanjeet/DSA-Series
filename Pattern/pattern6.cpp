#include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int print=n*n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<print;
            print=print-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}