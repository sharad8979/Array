#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(int arr[],int tar,int n){
       vector <int> ans;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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