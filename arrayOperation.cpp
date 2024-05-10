#include<stdio.h>
void insert_beg(int size,int a[]){
	int val,i;
	printf("Enter the element:");
	scanf("%d",&val);
	for(i=size; i>=0 ;i--){
		a[i+1]=a[i];
	}
	a[0]=val;
	size++;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void insert_loc(int size,int a[]){
	int val,i,loc;
	printf("Enter the element:");
	scanf("%d",&val);
	printf("Enter the location:");
	scanf("%d",&loc);
	for(i=size; i>=loc-1 ;i--){
		a[i+1]=a[i];
	}
	a[loc-1]=val;
	size++;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void insert_end(int size,int a[]){
	int val,i;
	printf("Enter the element:");
	scanf("%d",&val);
	for(i=size; i>=size ;i--){
		a[i+1]=a[i];
	}
	a[size]=val;
	size++;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void del_beg(int size,int a[]){
	int val,i;
	val=a[0];
	for(i=0; i<size ;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("Deleted element=%d\n",val);
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void del_end(int size,int a[]){
	int val,i;
	val=a[size-1];
	for(i=size; i<size ;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("Deleted element=%d\n",val);
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
void del_loc(int size,int a[]){
	int val,i,loc;
	printf("Enter the location:");
	scanf("%d",&loc);
	a[loc-1]=val;
	for(i=size; i<loc-1 ;i++){
		a[i]=a[i+1];
	}
	size--;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("Deleted item=%d",val);
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
	del_loc(n,a);
}