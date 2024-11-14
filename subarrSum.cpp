#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,-4,5,4,-1,7,-8};
    int n=7;
    int st,end,currSum=0,maxSum=INT8_MIN;
    for(st=0;st<n;st++){
            currSum=0;
        for(end=st;end<n;end++){
                currSum=currSum+arr[end];
                maxSum=max(currSum,maxSum);
         }
    }
        cout<<"Maximum subarray sum = "<<maxSum;

    return 0;
}