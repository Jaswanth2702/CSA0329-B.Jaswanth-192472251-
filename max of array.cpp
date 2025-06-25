#include <stdio.h>
int main(){
	int n,i,max=0,min=0;
	printf("enter the no.of elements: \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements:\n ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<=n;i++){
		if (arr[i]>max){
		max=arr[i];	
	}
	    if(arr[i]<min){
	    	min=arr[i];
		}
	
	}
	printf("max element is : %d",max);
	printf("min element is : %d",min);
	return 0;
}
