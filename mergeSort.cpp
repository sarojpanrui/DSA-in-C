#include<stdio.h>
void merge(int a[],int lb,int ub,int mid){
	int i,j,k,b[10],temp;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			k++;
			i++;
		}
		else{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i<=mid){
		b[k]=a[i];
		k++;
		i++;
	}
	else{
		b[k]=a[j];
		j++;
		k++;
	}
	for(k=0;k<=ub;k++){
		a[k]=b[k];
	}
}
void mergeSort(int a[],int lb,int ub){
	int mid;
	if(lb<ub){
		mid=(lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,ub,mid);
	}
}
int main(){
	int i,n,a[10];
	printf("enter the size:");
	scanf("%d",&n);
	printf("Enter the elemenets:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the elements are:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	mergeSort(a,0,n-1);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}