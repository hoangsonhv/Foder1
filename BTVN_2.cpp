#include<stdio.h>

// Bai 2: Tinh tong S=1+1/2+1/3+...+1/n.

int main(){
	int n;
	printf("Nhap n ");
	scanf("%d",&n);
	float S = 0;
	float a=1;
	for(a=1; a<=n; a++){
		S = S +1/a;
	}
	printf("Tong S la: %.3f", S);
}

