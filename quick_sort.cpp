#include<stdio.h>
void quick_sort(int number[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(number[i]<=number[pivot]){
				i++;
			}
			while(number[j]>number[pivot]){
				j--;
			}
			if(i<j){
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
		temp=number[j];
		number[j]=number[pivot];
		number[pivot]=temp;
		quick_sort(number,first,j-1);
		quick_sort(number,j+1,last);
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
	quick_sort(a,0,size-1);
	printf("\nThe sorted array is=\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}