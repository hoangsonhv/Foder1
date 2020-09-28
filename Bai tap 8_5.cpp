#include<stdio.h>
#include <stdlib.h>

int UocChung(int a,int b){
	if(a<0 || b<0){
		a=abs(a);
		b=abs(b);
	}
	if(a==0 && b!=0){
		return b;
	}else if(a!=0 && b==0){
		return a;
	}else if(a==0 && b==0){
		printf("\nKhong co UCLN cua 0 ");
		return 0;
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		return a;
	}
}

int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);

	printf("\nUCLN cua %d va %d la: %d",a,b,UocChung(a,b));
}
