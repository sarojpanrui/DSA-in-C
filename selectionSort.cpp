#include<stdio.h>
void selectionSort(int a[],int n){
	int min,temp,i,j;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		if(i != min){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
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
	selectionSort(a,n);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}