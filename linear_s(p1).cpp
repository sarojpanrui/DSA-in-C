#include<stdio.h>
void linear_search(int val,int n,int arr[]){
	int flag=0,i;
	for(i=0;i<n;i++){
		if(arr[i]==val){
			printf("found in=%d",i+1);
			flag=1;
		}
	}
	if(flag==0){
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
	linear_search(x,n,a);
}