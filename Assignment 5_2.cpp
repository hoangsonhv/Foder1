#include<stdio.h>

//Tim uoc cua so n

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int uoc=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("uoc = %d\n",i);
			uoc+=i;
		}
	}
	printf("Tong cac uoc cua %d la %d",n,uoc);
}
