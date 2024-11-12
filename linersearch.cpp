#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
      for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
      }
        return -1;
}

int main(){
      int arr[] ={22,32,5,7,9,11,2};
      int r;
      r=linearSearch(arr,7,11);
      if(r!=-1){
        cout<<"This element present at index="<<r;
      }else{
        cout<<"Element does not exist";
      }


    return 0;
}