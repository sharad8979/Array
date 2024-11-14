#include<iostream>
using namespace std;
int main(){
   int arr[10],n=8,i,p;
   cout<<"Enter elements in array=";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
       cout<<"\nArray is=";
      for(i=0;i<n;i++){
        cout<<" "<<arr[i];
      }
     cout<<"\nEnter the position which you want to delete=";
    cin>>p;
        while(p<n){
             arr[p-1]=arr[p];
             p++;
        }
        n--;

 cout<<"\nAfter deletion array is=";
      for(i=0;i<n;i++){
        cout<<" "<<arr[i];
      }
    return 0;
}