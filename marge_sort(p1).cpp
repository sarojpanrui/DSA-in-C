#include<stdio.h>
void merge(int lb,int mid,int ub,int a[]){
	int i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	int b[10];
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
			k++;
		}
		else{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}
	
	for(k=lb;k<=ub;k++){
		a[k]=b[k];
	}
	
}
void merge_sort(int lb,int ub,int a[]){
	int mid;
	if(lb<ub){
		mid=(lb+ub)/2;
		merge_sort(lb,mid,a);
		merge_sort(mid+1,ub,a);
		merge(lb,mid,ub,a);
	}
}

int main(){
	int n,i,a[10];
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
	merge_sort(0,n-1,a);
	printf("\nthe sorted array is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}