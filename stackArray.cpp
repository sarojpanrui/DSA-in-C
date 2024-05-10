#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int n){
	if(top==N){
		printf("stack is full,can not insert");
		return;
	}
	else{
		top++;
		stack[top]=n;
	}
}
void pop(){
	int val;
	if(top==-1){
		printf("stack is empty,can not delete");
		return;
	}
	else{
		val=stack[top];
		top--;
		printf("\ndeleted item is=%d\n",val);
	}
}
void peek(){
	int val;
	val=stack[top];
	printf("\nthe high elements is:%d",val);
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("\n%d ",stack[i]);
	}
}
int main(){	
	int ch,val;
	while(1){
		printf("\n1-for push");
		printf("\n2-for pop");
		printf("\n3-for peek");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value:");
					scanf("%d",&val);
					push(val);
					display();
					break;
			case 2:	pop();
					display();
					break;
			case 3:peek();
					display();
					break;
		}
	}
}