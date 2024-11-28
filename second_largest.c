#include<stdio.h>
int main(){
	int arr[6],n=6,max,s_max=-1,i;
	printf("Enter elements in Array=");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray is=");
	for( i=0;i<n;i++){
		printf(" %d  ",arr[i]);
	}
	max=arr[0];
	for( i = 1 ; i<n ; i++){
		if(max< arr[i]){
		s_max = max ;
		max = arr[i];
	}else if(s_max<arr[i]){
		s_max=arr[i];
	}
	}
	
	printf("\nLargest Element=%d",max);
	printf("\n Second Largest Element=%d",s_max);
	return 0;
}
