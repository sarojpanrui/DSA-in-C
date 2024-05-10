#include<stdio.h>
void quickSort(int number[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		i=first;
		j=last;
		pivot=first;
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
		quickSort(number,first,j-1);
		quickSort(number,j+1,last);
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
	quickSort(a,0,n-1);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}