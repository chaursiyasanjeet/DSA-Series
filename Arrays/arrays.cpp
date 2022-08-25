#include<iostream>;
using namespace std;
//function
void printarray(int arr[],int size){
  cout<<"printing the array :- " <<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Printing done"<<endl;
}



int main(){
  
  //declarea array
  int number[15];
  cout <<number[1]<<endl;

  //intialising array
  int second[3]={5,7,11};
  
  //accessing an element
  cout<<"Value at 2 index"<<second[2]<<endl;

  int third[15]={2,7};

  //print the array
  cout<<"printing the array :- " <<endl;
  int n=15;
  for(int i=0;i<n;i++){
    cout<<third[i]<<" ";
  } 
  //intialising all loctaion zero
  int forth[10]={0};
  cout<<"printing the array :- " <<endl;
  n=10;
  for(int i=0;i<n;i++){
    cout<<forth[i]<<" ";
  } 
  
  int fifth[10]={1};
  cout<<"printing the array :- " <<endl;
  n=10;
  for(int i=0;i<n;i++){
    cout<<fifth[i]<<" ";
  }
  cout<<endl;
  //from function call
  cout<<"Function call"<<endl;
  printarray(third,15);

  //finding size
  int fifthsize=sizeof(fifth)/sizeof(int);
  cout<<"Size of fifth is "<<fifthsize<<endl;

  char ch[5]={'a','b','c','d',};
  cout<<"printing the array :- " <<endl;
  n=5;
  for(int i=0;i<n;i++){
    cout<<ch[i]<<" ";
  }


  
  cout<<"Everythig is fine"<<endl;


}