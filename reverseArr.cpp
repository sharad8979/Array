#include<iostream>
using namespace std;
void reverseArr(int arr[],int size){
     int start=0,end=size-1;
     while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }
}

int main(){
     int arr[]={1,2,3,4,5,6,7};
     reverseArr(arr,7);
     for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
     }

    return 0;
}