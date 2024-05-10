#include<stdio.h>
#define size 4
int queue[size];
int front=-1;
int rear=-1;
int enqueue(int n){
	if(rear==size-1){
		printf("not possible");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=n;
	}
	else{
		rear++;
		queue[rear]=n;
	}
}
void dequeue(){
	int val;
	if(front==-1){
		printf("empty");
	}
	else{
		val=queue[front];
		front++;
		printf("\nThe deleted item is=%d",val);
	}
}
void display(){
	int i;
	for(i=front;i<=rear;i++){
		printf("\n%d ",queue[i]);
	}
}
int is_full(){
	if(rear=size-1){
		printf("full!!!");
	}
	else{
		return 0;
	}
}
int is_empty(){
	if(front==-1){
		printf("empty!!!");
	}
	else{
		return 0;
	}
}
int main(){
	int ch,val;
	while(1){
		printf("\n1-for enqueue");
		printf("\n2-for dequeue");
		printf("\n3-for is full");
		printf("\n4-for is empty");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\nenter the value:");
					scanf("%d",&val);
					enqueue(val);
					display();
					break;
			case 2:dequeue();
					display();
					break;
			case 3:is_full();
					break;
			case 4:is_empty();
					break;
		}
	}
}