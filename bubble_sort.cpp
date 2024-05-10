#include<stdio.h>
void bubble_sort(int a[],int size){
	int i,j,temp,flag;
	for(i=0;i<size-1;i++){
		flag=0;
		for(j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;
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
	bubble_sort(a,size);
	printf("the sorted array is:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}