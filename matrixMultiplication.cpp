#include<stdio.h>
int main(){
	int r1,c1,r2,c2,i,j,k,sum=0,a[10][10],b[10][10],c[10][10];
	printf("enter the no of row and col for 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("enter the no of row and col for 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1 != r2){
		printf("not possible");
		return 0;
	}
	printf("enter the elements for 1st matrix");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the 1st matrix is:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("enter the elements for 2nd matrix");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the 2nd matrix is:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				sum=sum+a[i][j]*b[i][j];
				c[i][j]=sum;
				sum=0;
			}
		}
	}
	printf("\nafter multiplication:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}