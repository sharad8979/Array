#include<iostream>
using namespace std;
int main(){
     int arr[8]={1,2,3,4,5,7,8,3};
     int brr[8]={2,4,5,6,9,0,6,1};
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[i]==brr[j]){
                cout<<" "<<arr[i];
            }

        }
      }

    return 0;
}