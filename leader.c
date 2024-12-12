#include<stdio.h>
void leader(int arr[],int n){
	int curr_leader=arr[n-1],i;
	printf(" %d",curr_leader);
	for(i=n-2;i>=0;i--){
		if(curr_leader<arr[i]){
			curr_leader=arr[i];
			printf(" %d",curr_leader);
		}
	}
}
int main(){
	int arr[10],n,i;
	printf("Enter the size=");
	scanf("%d",&n);
	printf("Enter the elements in array=");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	leader(arr,n);
	
	return 0;
}
