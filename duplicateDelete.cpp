#include<iostream>
using namespace std;
int main(){
      int arr[10],n=6;
       cout<<"Enter the elements in array=";
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       cout<<"\nArray is =";
       for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
       }
       for(int i=0;i<n;i++){
          for(int j=i+1;j<n;){
             if(arr[j]==arr[i]){
                for(int k=j;k<n;k++){
                  arr[k]=arr[k+1];
                }
                n--;
             }
             else{
              j++;
             }
          }
       }
       cout<<"\nAfter Delete duplicate elements array is=";
       for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
       }
    return 0;
} 