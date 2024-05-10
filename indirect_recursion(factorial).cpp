#include<stdio.h>
int fact1(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact1(n-1);
	}
}
int fact2(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact1(n-1);
	}
}


int main(){
	int n,val;
	printf("enter a number:");
	scanf("%d",&n);
	val=fact1(n);
	printf("The value is=%d",val);
}