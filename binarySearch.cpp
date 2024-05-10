#include<stdio.h>
void binarySearch(int a[],int size,int val){
	int left,right,mid;
	left=0;
	right=size-1;
	while(left<=right){
		mid=(left+right)/2;
		if(val==a[mid]){
			printf("\nfound in=%d",mid+1);
			break;
		}
		else if(val>a[mid]){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	if(left>right){
		printf("not found");
	}
}
int main(){
	int a[10],n,i,val;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements are:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nenter the element u want to search:");
	scanf("%d",&val);
	binarySearch(a,n,val);
}