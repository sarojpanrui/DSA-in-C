#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void append(int n){
	struct node *newnode;
	struct node *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void insert_beg(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
}
void insert_loc(int n){
	int i,loc;
	struct node *newnode;
	struct node *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	printf("\nEnter the location:");
	scanf("%d",&loc);
	temp=head;
	while(i<loc-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void del_beg(){
	int val;
	val=head->data;
	head=head->next;
	printf("\nthe deleted data is=%d\n",val);
}
void del_end(){
	int val;
	struct node *temp,*prev;
	temp=head;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	val=temp->data;
	prev->next=NULL;
	printf("\nThe deleted data=%d\n",val);
}
void del_loc(){
	int i=0,loc,val;
	struct node *temp,*nxt;
	printf("\nenter the location:\n");
	scanf("%d",&loc);
	temp=head;
	while(i<loc-1){
		temp=temp->next;
		i++;
	}
	nxt=temp->next;
	val=nxt->data;
	temp->next=nxt->next;
	printf("\nThe deleted item=%d\n",val);
}
void display(){
	struct node *temp;
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int ch,v;
	while(1){
		printf("\n1-for insert at beg");
		printf("\n2-for insert at location");
		printf("\n3-for insert at end");
		printf("\n4-for del at beg");
		printf("\n5-for del at end");
		printf("\n6-for del at location");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\nEnter the value:");
					scanf("%d",&v);
					insert_beg(v);
					display();
					break;
			case 2:printf("\nEnter the value:");
					scanf("%d",&v);
					insert_loc(v);
					display();
					break;
			case 3:printf("\nEnter the value:");
					scanf("%d",&v);
					append(v);
					display();
					break;
			case 4:del_beg();
					display();
					break;
			case 5:del_end();
					display();
					break;
			case 6:del_loc();
					display();
					break;
		}
	}
	
}