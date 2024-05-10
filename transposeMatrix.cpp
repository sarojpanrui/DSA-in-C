#include<stdio.h>
int main(){
	int i,j,a[10][10],b[10][10],row,col;
	printf("Enter the no of row:");
	scanf("%d",&row);
	printf("Enter the no of col:");
	scanf("%d",&col);
	printf("Enter the elements:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Array is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("The transpose matrix is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}