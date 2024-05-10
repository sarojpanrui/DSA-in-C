#include<stdio.h>
void quick_sort(int number[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		i=first;
		j=last;
		pivot=first;
		while(i<j){
			while(number[i]<number[pivot]){
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
		quick_sort(number,0,j-1);
		quick_sort(number,j+1,last);
	}
	
}
int main(){
	int n,i,a[10];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	printf("the elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("\nthe sorted array is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}