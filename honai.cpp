#include<stdio.h>
void tower(int n,int src,int des,int aux){
	if(n==0){
		return;
	}
	else{
		tower(n-1,src,aux,des);
		printf("\nmove from %c to %c\n",src,des);
		tower(n-1,aux,des,src);
	}
}
int main(){
	int n;
	printf("enter the number of discs:");
	scanf("%d",&n);
	tower(n,'A','C','B');
}