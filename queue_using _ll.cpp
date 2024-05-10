#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(front==NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	int val;
	val=front->data;
	front=front->next;
	printf("\nThe value of deleted item is=%d\n",val);
}
void display(){
	struct node *temp;
	temp=front;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int ch,v;
	while(1){
		printf("\n1-for enqueue");
		printf("\n2-for dequeue");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value: ");
					scanf("%d",&v);
					enqueue(v);
					display();
					break;
			case 2:dequeue();
					display();
					break;
		}
	}
}