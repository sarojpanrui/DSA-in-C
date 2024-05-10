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
	if(top==NULL){
		printf("Stack is empty");
	}
	else{
		int val=top->data;
		top=top->next;
		printf("\nDeleted item is=%d\n",val);
	}
}
void display(){
	temp=top;
	while(temp != NULL){
		printf("\n%d\n ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int ch,val;
	while(1){
		printf("\n1-push");
		printf("\n2-pop");
		
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
			
		}
	}
}