#include<stdio.h>

// Tim ma tran chuyen vi

int main(){
	int i,j,m,n;
	printf("Nhap ma tran:\n");
	while(m<=0 || n<=0){
		printf("Nhap m = ");
		scanf("%d",&m);
		printf("Nhap n = ");
		scanf("%d",&n);
	}
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("arr[%d]arr[%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Ma tran vua nhap la: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Ma tran chuyen vi la: \n");
	int brr[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		 brr[i][j]=arr[j][i];
			printf("\t%d",brr[i][j]);
		}
		printf("\n");
	}
}
