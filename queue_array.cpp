#include<stdio.h>
# define N 5
int front=-1;
int rear=-1;
int queue[N];
void enqueue(int n){
	if(rear==N-1){
		printf("queue is full...");
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
	if(front==N){
		printf("queue is empty...");
	}
	else{
		int val=queue[front];
		front++;
		printf("\nDeleted item=%d\n",val);
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