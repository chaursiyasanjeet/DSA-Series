#include<iostream>;
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

        
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={1,3,4,5,2,9,2,1,6,2};
    int brr[5]={3,5,1,5,7};
    reverse(arr,10);
    reverse(brr,5);

    printarray(arr,10);
    printarray(brr,5);

}