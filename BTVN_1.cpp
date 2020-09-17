#include<stdio.h>

// Bai 1: Tinh tong S=1+2+3+..+n.

int main(){
	int n,S,a;
	printf("Nhap n= ");
	scanf("%d",&n);
	S=0;
	for(a=S;a<=n;a++){
		S=S+a;
	}
	printf("Tong S la: %d",S);
}
