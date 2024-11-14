#include<iostream>
using namespace std;
int main(){
   int arr[10],c=0,d;

   cout<<"Enter the values in Arrray=";
   for(int i=0;i<8;i++){
    cin>>arr[i];
   }

   for(int i=0;i<8;i++){
        c=0;
       for(int j=0;j<8;j++){
             if(arr[i]==arr[j]){
                c++;
             }
       } 
       if(c>1 && d!=arr[i]){
          cout<<"The element "<<arr[i]<<" is repeated "<<c<<" times"<<endl;
          d=arr[i];
       }
   }


    return 0;
}