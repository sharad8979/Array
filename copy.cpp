#include<iostream>
using namespace std;
int main(){
	int arr[10],brr[10],i;
	printf("Enter the elements=");
	for(i=0;i<10;i++){
        cin>>arr[i];
	}
	
	for(i=0;i<10;i++){
	     brr[i]=arr[i];
		
	}
	cout<<"\nAll the value of second element";
		for(i=0;i<10;i++){
		    printf("%d",brr[i]);	
		}
}