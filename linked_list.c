#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *temp;
void insert_beg(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	newnode->next=head;
	head=head->next;
}
void append(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=n;
		newnode->next=NULL;
		newnode->next=head;
		head=newnode;
}
void insert_loc(int n){
		struct node *newnode;
		int i,loc;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=n;
		newnode->next=NULL;
		printf("\nEnter the location:\n");
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
	printf("\ndeleted item is=%d\n",val);
}
void del_end(){
	struct node *prev;
	int val;
	temp=head;
	while(temp->next != NULL){
		prev=temp;
		temp=temp->next;
	}
	val=temp->data;
	prev->next=NULL;
	printf("\ndeleted item is=%d\n",val);
}
void del_loc(){
	int loc,val,i=0;
	struct node *temp=head;
	struct node *nextnode;
	printf("enter the loaction:");
	scanf("%d",&loc);
	while(i<loc-1){
		temp=temp->next;
		i++;
	}
	val=temp->next->data;
	nextnode=temp->next;
	temp->next=nextnode->next;
	printf("\nThe deleted item is=%d\n",val);
}
void display(){
	temp=head;
	while(temp!=NULL){
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
		printf("\n4-for delete at beg");
		printf("\n5-for delete at location");
		printf("\n6-for insert at end");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("enter data:");
					scanf("%d",&v);
					insert_beg(v);
					display();
					break;
			case 2:printf("enter data:");
					scanf("%d",&v);
					insert_loc(v);
					display();
					break;
			case 3:printf("enter data:");
					scanf("%d",&v);
					append(v);
					display();
					break;
			case 4:del_beg();
					display();
					break;
			case 5:del_loc();
					display();
					break;
			case 6:del_end();
					display();
					break;
			
		}
	}
}
		
	
	
}