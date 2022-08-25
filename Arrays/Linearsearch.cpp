#include<iostream>;
using namespace std;
bool search(int arr[],int size,int key){
   int i=0;
   for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
   /*while(i<size){
    if(arr[i]==key){
    return 1;
    }
    i++;*/

   }
   return 0;
   }
int main(){
    int arr[10]={1,3,4,2,5,5,2,3,3,6};
    cout<<"Enter the key to search"<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is found"<<endl;

    }
    else{
        cout<<"Key is not found"<<endl;
    }

}