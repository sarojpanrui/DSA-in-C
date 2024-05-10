#include<stdio.h>
int fact(int n){
	int x;
	if(n==0 || n==1){
		return 1;
	}
	else{
		x=fact(n-1);
		return x*n;
	}
}
int main(){
	int val;
	printf("Enter the numner:");
	scanf("%d",&val);
	printf("The value of facrorial=%d",fact(val));
}