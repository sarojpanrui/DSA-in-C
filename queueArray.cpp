#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int n){
	if(rear==N){
		printf("not possible");
		return;
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
	if(front==-1){
		printf("empty,not possible");
		return;
	}
	else{
		int val;
		val=queue[front];
		front++;
		printf("\nThe deleted item is=%d\n",val);
	}
}
void display(){
	int i;
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
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