#include<stdio.h>
int fibo(int n,int a,int b){
	if(n==0){
		printf("0 ");
		return 1;
	}
	if(n==1){
		printf("%d",a);
		return 1;
	}
	else{
		printf("%d ",a);
		return fibo(n-1,b,a+b);
	}
}
int main(){
	int n,i;
	printf("Enter the numner:");
	scanf("%d",&n);
	fibo(n,0,1);
}