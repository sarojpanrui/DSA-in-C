#include<stdio.h>
void bubbleSort(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
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
	bubbleSort(n,a);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}