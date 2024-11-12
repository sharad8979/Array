#include<iostream>
using namespace std;
int main(){
   int arr[] ={2,5,6,3,4,1};
   int size=6,sum=0,pro=1;
   for(int i=0;i<size;i++){
         sum+=arr[i];
         pro*=arr[i];
   }
     cout<<"Sum ="<<sum<<endl;
     cout<<"Product="<<pro<<endl;
    return 0;
}