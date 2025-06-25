#include <stdio.h>
int main(){
	int n,i;
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("original array:\n");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nreversed array:\n");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
