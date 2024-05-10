#include<stdio.h>
void insert_at_beg(int size,int a[]){
	int i,val;
	printf("Enter the value:");
	scanf("%d",&val);
	for(i=size;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=val;
	size++;
	for(i=0;i<size;i++){
		printf("\n%d ",a[i]);
	}
}
void insert_at_end(int size,int a[]){
	int val,i;
	printf("enter the value: ");
	scanf("%d",&val);
	for(i=size;i>=size;i--){
		a[i+1]=a[i];
	}
	a[size]=val;
	size++;
	for(i=0;i<size;i++){
		printf("\n%d ",a[i]);
	}
}
void insert_at_location(int size,int a[]){
	int i,pos=0,val;
	printf("enter the value:");
	scanf("%d",&val);
	printf("enter the position:");
	scanf("%d",&pos);
	for(i=size;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	size++;
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
		printf("\n1-for insert at begining");
		printf("\n2-for insert at location");
		printf("\n3-for insert at end");
	
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert_at_beg(n,a);
					break; 
			case 2:insert_at_location(n,a);
					break;
			case 3:insert_at_end(n,a);
					break;
		}
	}
	
}