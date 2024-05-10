#include<stdio.h>
void insertionSort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
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
	insertionSort(a,n);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}