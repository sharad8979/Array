#include<iostream>
using namespace std;
int main(){
    int size=5;
    int marks[size];
   // int size = sizeof(marks)/sizeof(int);
   cout<<"Enter elements in array=";
   for(int i=0;i<size;i++){
    cin>>marks[i];
   }
      cout<<"Array is=";
      for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
      }
    return 0;
}