#include<stdio.h>
int main(){
	int i,a[10][10],m,n,j;
	int t[10][10];
	printf("enter the no of row: ");
	scanf("%d",&n);
	printf("enter the no of col: ");
	scanf("%d",&m);
	printf("Enter the elemnets:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix is=\n");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			t[i][j]=a[j][i];
		}
	}
	printf("transpose matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}