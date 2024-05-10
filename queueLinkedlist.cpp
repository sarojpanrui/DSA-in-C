#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;
void enqueue(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(newnode));
	newnode->data=n;
	newnode->next=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	int val;
	if(front==NULL && rear==NULL){
		printf("empty");
		return;
	}
	else{
		val=front->data;
		front=front->next;
		printf("\ndeleted item=%d\n",val);
	}
}
void display(){
	temp=front;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){	
	int ch,val;
	while(1){
		printf("\n1-for enqueue");
		printf("\n2-for dequeue");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter the value:");
					scanf("%d",&val);
					enqueue(val);
					display();
					break;
			case 2:	dequeue();
					display();
					break;
		}
	}
}