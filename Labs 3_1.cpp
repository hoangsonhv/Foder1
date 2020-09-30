#include<stdio.h>

// Tim so ngich dao.

int main(){
	int a;
	printf("Nhap a = ");
	scanf("%d",&a);
	
	if(a>0 && a<10000){
		int x=a%10;
		for(int i=0;i<3;i++){
			a/=10;
			x=x*10 + a%10;
		}
		printf("So ngich dao la: %d",x);
	}else{
		printf("So khong hop le!!");
	}
}
