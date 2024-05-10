#include<stdio.h>
int fibo(int n,int a,int b){
	if(n==0){
		printf("0 ");
		return 0;
	}
	else if(n==1){
		printf("%d ",a);
	}
	else{
		printf("%d ",a);
		return fibo(n-1,b,a+b);
	}
}
int main(){
	int n,i;
	printf("enter a number: ");
	scanf("%d",&n);
	fibo(n,0,1);
}