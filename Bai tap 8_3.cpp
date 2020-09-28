#include<stdio.h>

int ChuVi(int a,int b,int c){
	int P;
	if(a+b>c && a+c>b && b+c>a){
		P= a + b + c;
		return P;
	}
}

int main(){
	int a,b,c;
	printf("Nhap canh a = ");
	scanf("%d",&a);
	printf("Nhap canh b = ");
	scanf("%d",&b);
	printf("Nhap canh c = ");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		printf("\nChu vi cua tam giac la %d",ChuVi(a,b,c));
	}else{
		printf("\nKhong phai canh cua tam giac");
	}
}
