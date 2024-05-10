#include<stdio.h>
int main(){
	int c1,r1,c2,r2,i,j,k,a[10][10],b[10][10],c[10][10],sum=0;
	printf("Enter the no of row and col for 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the no of row and col for 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1 != r2){
		printf("error...not possible");
	}
	printf("enter elements for 1st matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("First matrix is:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("enter elements for 2nd matrix:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("second matrix is:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				sum=sum+a[i][j]*b[i][j];
				c[i][j]=sum;
			}
		}
	}
	printf("The multiplicatiom matrix is:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}