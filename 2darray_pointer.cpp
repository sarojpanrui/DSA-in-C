#include<stdio.h>
int main(){
	int a[10][10],row,col,i,j;
	printf("enter the no of row: ");
	scanf("%d",&row);
	printf("enter the no of col: ");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",*(a+i)+j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",**(a+i)+j);
		}
		printf("\n");
	}
	printf("\n");
}