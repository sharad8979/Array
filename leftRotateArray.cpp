#include<iostream>
using namespace std;
void reverse(int arr[],int st,int end){
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
void leftRotate(int arr[],int n ,int d){
      reverse(arr,0,d-1);
      reverse(arr,d,n-1);
      reverse(arr,0,n-1);
}
int main(){
     int arr[10],n,d;
     cout<<"Enter the size of array=";
     cin>>n;
     cout<<"\nEnter the elements in the array=";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"\nEnter the number of elements which you want to rotate=";
     cin>>d;
     leftRotate(arr,n,d);
     cout<<"\nAfter rotation the array is\n";
      for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
     }

    return 0;
}