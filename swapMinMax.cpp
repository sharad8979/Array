#include<iostream>
using namespace std;
int main(){
     int arr[]={2,1,4,5,7,3};
     int size=6;
      int max=INT8_MIN,min=INT8_MAX;
      int min_ind,max_ind;
      cout<<"\nBefore swapping array is=\n";
          for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
          }
          

      for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
           min_ind=i;
        }
        if(arr[i]>max){
            max=arr[i];
            max_ind=i;
        }
      }
        
          swap(arr[min_ind],arr[max_ind]);

          cout<<"\nAfter swapping array is=\n";
          for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
          }
          
 
 
    return 0;
}