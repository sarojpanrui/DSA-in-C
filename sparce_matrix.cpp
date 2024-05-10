#include<stdio.h>
int main(){
	int i,a[10][10],m,n,j,c;
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
	printf("\n");
	
	printf("Matrix is=\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]==0){
				c++;
			}
		}
	}
	if(c>=(m*n)/2){
		printf("Sparse matrix");
	}
	else{
		printf("Normal matrix");
	}
}