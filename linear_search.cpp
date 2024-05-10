#include<stdio.h>
int main(){
	int arr[10],i,flag=0,n,val,loc=0;
	printf("Enter the number of elemnets:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Elements are:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value u looking for: ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(val==arr[i]){
			loc=i+1;
			flag=1;
		}
	}
	if(flag==0){
		printf("element not found");
	}
	else{
		printf("found in=%d",loc);
	}
}