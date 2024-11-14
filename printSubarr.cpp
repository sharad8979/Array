#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;
    int st,end;
    for(st=0;st<n;st++){
        for(end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}