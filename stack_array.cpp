#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void isFull(){
	if(top==N-1){
		printf("Stack is full...");
	}
	else{
		printf("you can insert-->>");
	}
}
void isempty(){
	if(top==-1){
		printf("Stack is empty...");
	}
	else{
		printf("you can delete-->>");
	}
}
void push(int n){
	if(top==N-1){
		printf("stack is full...");
	}
	else{
		top++;
		stack[top]=n;
	}
}
void pop(){
	int val;
	if(top==-1){
		printf("Stack is empty...");
	}
	else{
		val=stack[top];
		top--;
		printf("\nDeleted element=%d",val);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("\n%d\n ",stack[i]);
	}
}
int main(){
	int ch,val;
	while(1){
		printf("\n1-push");
		printf("\n2-pop");
		printf("\n3-isFull");
		printf("\n4-isempty");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter the value:");
					scanf("%d",&val);
					push(val);
					display();
					break;
			case 2:pop();
					display();
					break;
			case 3:isFull();
					display();
					break;
			case 4:isempty();
					display();
					break;
		}
	}
}