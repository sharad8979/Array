#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(int arr[],int tar,int n){
       vector <int> ans;
       int st=0,end=n-1;
       while(st<end){
          int ps=arr[st]+arr[end];
          if(ps>tar){
            end--;
          }else if(ps<tar){
            st++;
          }else{
             ans.push_back(st);
             ans.push_back(end);
             return ans;
          }

       }
}

int main(){
     int t,n=6;
    int arr[10];
     cout<<"Enter elements= ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"\nEnter target sum=";
     cin>>t;
     cout<<"\nArray is= ";
     for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
     }

     vector <int> ans = pairSum(arr,t,n);
        cout<<"\nThe pair of elements present at index "<<ans[0]<<" and "<<ans[1];
    return 0;
}