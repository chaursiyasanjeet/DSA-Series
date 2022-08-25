#include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1 , toprint;
    while(i<=n){
        int j=1;
        toprint=i;
        while(j<=i){
            cout<<toprint;
            toprint=toprint+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}