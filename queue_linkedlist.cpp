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
	if(front==NULL){
		printf("queue is empty...");
	}
	else{
		int val;
		val=front->data;
		front=front->next;
		printf("\nDeleted item is=%d\n",val);
	}
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
	int ch,val;
	while(1){
		printf("\n1-enqueue");
		printf("\n2-dequeue");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter the value:");
					scanf("%d",&val);
					enqueue(val);
					display();
					break;
			case 2:dequeue();
					display();
					break;
		}
	}
}