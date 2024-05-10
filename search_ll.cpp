#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *temp;
void append(int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
}
void display(){
	struct node *temp;
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void search(int x){
	int flag=0,loc=1;
	temp=head;
	while(temp!=NULL){
		if(temp->data==x){
			flag=1;
			printf("\nfound in=%d",loc);
			break;
		}
		loc++;
		temp=temp->next;
	}
	if(flag==0){
		printf("\nitem is absent");
	}
}
int main(){
	int ch,v,s;
	while(1){
		printf("\n1-for append");
		printf("\n2-for search");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\nenter the value: ");
					scanf("%d",&v);
					append(v);
					display();
					break;
			case 2:printf("\nenter the value u want to search:");
					scanf("%d",&s);
					search(s);
					break;
		}
	}
}