#include<stdio.h>
void merge(int a[],int lb,int mid,int ub){
	int i,j,k,b[10];
	i=lb;
	j=mid+1;
	k=lb;
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
	while(i<=mid){
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=ub){
		b[k]=a[j];
		k++;
		j++;
	}
	for(k=lb;k<=ub;k++){
		a[k]=b[k];
	}
	
}
void merge_sort(int a[],int lb,int ub){
	int mid;
	while(lb<ub){
		mid=(lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

int main(){
	int i,size,arr[10];
	printf("enter the no of elements:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	merge_sort(arr,0,size);
	printf("the sorted array is\n");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
}