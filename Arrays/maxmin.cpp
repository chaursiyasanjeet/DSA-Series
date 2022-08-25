#include<iostream>
#include<math.h>
using namespace std;
int INT_MIN=pow(-2,31)-1;
int INT_MAX=(2,31);

int getmin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getmax(int num[],int n){
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){

            max=num[i];
        }
    }
    return max;
}


int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum no. is "<<getmax(num,size)<<endl;
    cout<<"Minimum no. is "<<getmin(num,size)<<endl;




}