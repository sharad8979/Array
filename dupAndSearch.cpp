#include<iostream>
using namespace std;
int main(){
   int arr[10],s,c=0,i;
     cout<<"Enter elements=";
     for( i=0;i<8;i++){
        cin>>arr[i];
     }
     cout<<"Enter Searching Element=";
     cin>>s;

     for(i=0;i<8;i++){
        if(arr[i]==s){
            c++;
            cout<<"\n The value find at "<<i<<endl;
        }
     }
        if(c==0){
            cout<<"Element not found";
        }else{
            cout<<"Your element repeat "<<c<< " times";
        }
    return 0;
}