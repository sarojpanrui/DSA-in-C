#include<stdio.h>
#define size 4
int stack[size];
int top=-1;
int isfull(){
	if(top==size){
		printf("isfull");
	}
	else{
		return 0;
	}
}
int isempty(){
	if(top==-1){
		printf("isempty");
	}
	else{
		return 0;
	}
}
void push(int n){
	if(top==size){
		printf("can not insert");
	}
	else{
		top++;
		stack[top]=n;
	}
}
void pop(){
	int d;
	if(top==-1){
		printf("can not pop");
	}
	else{
		d=stack[top];
		top--;
		printf("\npopped element is=%d",d);
	}
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
		printf("\n3-for isempty");
		printf("\n4-for isfull");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value:");
					scanf("%d",&val);
					push(val);
					display();
					break;
			case 2:pop();
					display();
					break;
			case 3:isempty();
					break;
			case 4:isfull();
					break;
			
		}
	}
}