#include<stdio.h>

// Tim cac so chan be hon n

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<0){
		printf("Nhap sai");
	}else{
		for(int i=0;i<n;i+=2){
			printf("%4d",i);
		}
	}
}
