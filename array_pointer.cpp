#include<stdio.h>
int main(){
	int arr[10],n,*ptr,i;
	ptr=&arr[0];
	printf("Enter the number of elemnts: ");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	printf("Elements are:\n");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
	
}