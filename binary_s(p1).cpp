#include<stdio.h>
void binarySearch(int arr[],int val,int size){
	int left,right,mid;
	left=0;
	right=size-1;
	while(left<=right){
		mid=(left+right)/2;
		if(val==arr[mid]){
			printf("item found in=%d",mid+1);
			break;
		}
		else if(val>arr[mid]){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	if(left>right){
		printf("item not found");
	}
}
int main(){
	int n,i,a[10],x;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("enter the element u want to search:");
	scanf("%d",&x);
	binarySearch(a,x,n);
}