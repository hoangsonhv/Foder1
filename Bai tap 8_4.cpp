#include<stdio.h>
#include<math.h>

float DienTich(int a,int b,int c){
	float p,S,P;
	if(a+b>c && a+c>b && b+c>a){
		P = a + b + c;
		p = P / 2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		return S;
	}else{
		printf("Khong phai canh cua tam giac");
		return 0;
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
		printf("\nDien tich cua tam giac la %.2f",DienTich(a,b,c));
	}else{
		printf("\nKhong phai canh cua tam giac");
	}
}
