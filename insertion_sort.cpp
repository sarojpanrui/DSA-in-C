#include<stdio.h>
void insertion_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main(){
	int i,size,a[10];
	printf("\nEnter the size of the array:");
	scanf("%d",&size);
	printf("\nenter the elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\nelements are:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	insertion_sort(a,size);
	printf("\nThe sorted array is:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}