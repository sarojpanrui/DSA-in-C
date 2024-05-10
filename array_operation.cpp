#include<stdio.h>
void insert_beg(int size,int a[],int x){
	int i;
	for(i=size;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=x;
	size++;
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void insert_end(int size,int a[],int x){
	int i;
	for(i=size;i>=size;i--){
		a[i+1]=a[i];
	}
	a[size-1]=x;
	size++;
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void insert_loc(int size,int a[],int x){
	int i,loc;
	printf("Enter the location:");
	scanf("%d",&loc);
	for(i=size;i>=loc-1;i--){
		a[i+1]=a[i];
	}
	a[loc]=x;
	size++;
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void delete_beg(int size,int a[]){
	int val,i;
	val=a[0];
	for(i=0;i<size;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("\nDeleted element=%d\n",val);
	printf("The array after deleting");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void delete_end(int size,int a[]){
	int val,i;
	val=a[size-1];
	for(i=size;i<size;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("\nDeleted element=%d\n",val);
	printf("The array after deleting:\n");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int i,n,a[10],x,ch;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
		while(1){
		printf("\n1-for insert at begining");
		printf("\n2-for insert at location");
		printf("\n3-for insert at end");
		printf("\n4-for delete at begining");
		printf("\n5-for delete at end");
	//	printf("\n1-for insert at begining");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value:");
					scanf("%d",&x);
					insert_beg(n,a,x);
					break; 
			case 2:printf("enter the value:");
					scanf("%d",&x);
					insert_loc(n,a,x);
					break;
			case 3:printf("enter the value:");
					scanf("%d",&x);
					insert_end(n,a,x);
					break;
			case 4:delete_beg(n,a);
					break;
			case 5:delete_end(n,a);
					break;
		}
	}
	
	
}