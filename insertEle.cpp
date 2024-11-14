#include<iostream>
using namespace std;
int main(){
    int arr[10],n=8,i,p,element;
    cout<<"Enter elements in array=";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
       cout<<"\nArray is=";
      for(i=0;i<n;i++){
        cout<<" "<<arr[i];
      }
     cout<<"\nEnter the position=";
    cin>>p;
    cout<<"\nEnter the element which you want to insert=";
    cin>>element;
     n++;
     for(i=n;i>=p;i--){
        arr[i-1]=arr[i-2];
     } 
     arr[p-1]=element;
     cout<<"\nAfter insertion array is=";
      for(i=0;i<n;i++){
        cout<<" "<<arr[i];
      }
    return 0;
}