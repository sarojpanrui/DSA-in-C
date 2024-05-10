#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next; 
};
struct node *top=NULL;
struct node *temp;
void push(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(top==NULL){
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
}
void pop(){
	int val;
	if(top==NULL){
		printf("stack is empty,not possible");
	}
	else{
		val=top->data;
		top=top->next;
		printf("\nThe deleted item is=%d",val);
	}
}
void display(){
	temp=top;
	while(temp!=NULL){
		printf("\n%d\n ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int ch,v;
	while(1){
		printf("\n1-for push");
		printf("\n2-for pop");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value: ");
					scanf("%d",&v);
					push(v);
					display();
					break;
			case 2:pop();
					display();
					break;
		}
	}
}