#include<stdio.h>
int main(){
	int a[10][10],i,j,count=0,row,col;
	printf("enter the no of row:");
	scanf("%d",&row);
	printf("enter the no of col:");
	scanf("%d",&col);
	printf("enter the elements:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the elements:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]==0){
				count++;
			}
		}
	}
	if(count>=(row*col)/2){
		printf("SPARSE MATRIX");
	}
	else{
		printf("NOT SPARSE MATRIX");
	}
}