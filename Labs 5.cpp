#include<stdio.h>

int fibonaci(int n){
	int a,a1=1,a2=1;
	if(n==1 || n==2){
		return 1;
	}
	int i=3;
	while(i<=n){
		a = a1 + a2;
		a1 = a2;
		a2 = a;
		i++;
	}
	return a;
}

int main(){
	int n,a;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("So o vi tri thu %d can tim la %d",n,fibonaci(n));
	return 1;
}
