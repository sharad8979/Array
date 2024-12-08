#include<iostream>
using namespace std;
int isSorted(int arr[],int n){
     for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
     return 1;
}
int main(){
      int n=5;
     int arr[n]={1,2,8,4,5};
        int r=isSorted(arr,n);
        if(r==1){
             cout<<"Array is sorted";
        }else{
            cout<<"Array is not sorted";
        }
    return 0;
}