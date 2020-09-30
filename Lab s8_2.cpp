#include <stdio.h>

int TimSoNgichDao(int n){
	int x = n%10;
	for(int i=0;i<n;i++){
		n = n/10;
		x = x*10 + n%10;
	}
	printf("So nghich dao la: %d",x);
	return x;
}

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	TimSoNgichDao(n);
}
