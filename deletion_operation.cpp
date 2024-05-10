#include<stdio.h>
void del_from_beg(int size,int a[]){
	int i;
	for(i=0;i<size-1;i++){
		a[i]=a[i+1];
	}
	
	for(i=0;i<size-1;i++){
		printf("\n%d ",a[i]);
	}
}
void del_from_location(int size,int a[]){
	int i,pos;
	printf("enter the position: ");
	scanf("%d",&pos);
	for(i=pos-1;i<size-1;i++){
		a[i]=a[i+1];
	}
	size--;
	for(i=0;i<size-1;i++){
		printf("\n%d ",a[i]);
	}
}
void del_from_end(int size,int a[]){
	int i;
	for(i=size-1;i<=size;i++){
		a[i]=a[i+1];
	}
	size--;
	for(i=0;i<size;i++){
		printf("\n%d ",a[i]);
	}
}
int main(){
	int a[10],n,i,ch,val;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements are:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	while(1){
		printf("\n1-for delete from begining");
		printf("\n2-for delete from location");
		printf("\n3-for delete from end");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:del_from_beg(n,a);
					break;
			case 2:del_from_location(n,a);
					break;
			case 3:del_from_end(n,a);
					break;
		}
	}
	
}