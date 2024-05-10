#include<stdio.h>
void selection_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min != i){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
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
	selection_sort(a,size);
	printf("\nThe sorted array is:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}