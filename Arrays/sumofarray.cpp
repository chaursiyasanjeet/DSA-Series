#include<iostream>;
using namespace std;
int sumofarray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[5]={1,4,7,8,9};
    sumofarray(arr,5);
    cout<<sumofarray(arr,5)<<endl;

}