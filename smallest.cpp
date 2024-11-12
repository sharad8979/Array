#include<iostream>
using namespace std;
int main(){
     int size=5;
     int arr[size];
     int smallest = INT8_MAX;
     int indx;
     cout<<"Enter elements in Array=";
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     cout<<"Array is =\n";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
     }
      for(int i=0;i<size;i++){
          if(arr[i]<smallest){    //second method
            smallest=arr[i];     //smallest = min(arr[i],smallest);
            indx=i;
          }
     }
       cout<<"\nSmallest element in array="<<smallest;
        cout<<"\nIndex of smallest element="<<indx;
    return 0;
}