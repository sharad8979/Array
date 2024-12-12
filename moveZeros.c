#include<stdio.h>
void swap(int arr[],int c,int i){
	int t;
	t=arr[c];
	arr[c]=arr[i];
	arr[i]=t;
}
void moveZeros(int arr[],int n){
	int c=0,i;
	for(i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr,c,i);
			c++;
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
	moveZeros(arr,n);
	printf("\nArray is=");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}

