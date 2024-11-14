#include<iostream>
using namespace std;
int main(){
    int n=5,m=5;
      int arr[n]={1,2,3,4,5};
      int brr[m]={6,7,8,9,10};
      int crr[n+m];
       cout<<"First array is=";
       for(int i=0;i<n;i++){
          cout<<" "<<arr[i];
       }
      cout<<"\nSecond array is=";
       for(int i=0;i<m;i++){
          cout<<" "<<brr[i];
       }
       int i=0,j=0,k=0;

       while(i<n){
        crr[k]=arr[i];
        i++;
        k++;
       }
       while(j<m){
        crr[k]=brr[j];
        j++;
        k++;
       }

       cout<<"\nMerged array is=";
       for(int i=0;i<k;i++){
          cout<<" "<<crr[i];
       }
 
    return 0;
}