#include<iostream>
using namespace std;
void moveZeoros(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[c]);
            c++;
        }
    }
}
int main(){
     int arr[10],n;
     cout<<"Enter the size of array=";
     cin>>n;
     cout<<"\nEnter the elements in the array=";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     moveZeoros(arr,n);
     cout<<"After moving zeros to end the array is\n";
     for(int i=0;i<n;i++){
          cout<<" "<<arr[i];
     }
    return 0;
}