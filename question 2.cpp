#include<stdio.h>
int binary_search(int n,int a[],int x){
	int left,right,mid;
	left=0;
	right=n-1;
	
	while(left<=right){
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid+1;
		}
		else if(x>a[mid]){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return -1;
}
int main(){
	int n,i,a[10],val,result,mid;
	printf("enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("enter the value u want to search:");
	scanf("%d",&val);
	result=binary_search(n,a,val);
	if(result==-1){
		printf("item not found");
	}
	else{
		printf("found in=%d",result);
	}
}