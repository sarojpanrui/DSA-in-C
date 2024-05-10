#include<stdio.h>
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int n,val;
	printf("enter a number:");
	scanf("%d",&n);
	val=fact(n);
	printf("The value is=%d",val);
}