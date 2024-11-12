#include<iostream>
using namespace std;
int main(){
     int arr[]={2,1,4,5,6,1,2,9,7,3};
     int size=10,c=0;
      cout<<"Unique Elements of array=";
     for(int i=0;i<size;i++){
         c=0;
        for(int j=0;j<size;j++){
             if(arr[i]==arr[j]){
                c++;
             }
        } 
        if(c==1){
            cout<<" "<<arr[i];
        }
     }


     return 0;
}

