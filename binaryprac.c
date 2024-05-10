#include<stdio.h>
int binary_search(int val,int size,int arr[]){
	int left,middle,right;
	left=0;
	right=size-1;
	middle=(left+right)/2;
	while(left<=right){
		if(arr[middle]==val){
			printf("item found in=%d",middle+1);
			break;
		}
		else if(arr[middle]<val){
			left=middle+1;
		}
		else{
			right=middle-1;
			middle=(left+right)/2;
		}
	}
	if(left>right){
		printf("item not found");
	}
}
int main(){
	int arr[10],i,flag=0,n,val;
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
	printf("\nenter the value u looking for: ");
	scanf("%d",&val);
	binary_search(val,n,arr);
}