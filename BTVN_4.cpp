#include<stdio.h>
#include<math.h>

// Nhap 3 so la 3 canh cua tam giac. Tinh chu vi va dien tich.

int main(){
	int a,b,c;
	do{
		printf("Canh a = ");
		scanf("%d",&a);
		printf("Canh b = ");
		scanf("%d",&b);
		printf("Canh c = ");
		scanf("%d",&c);
	}while(a+b<=c || a+c<=b || b+c<=a);
		printf("\n a,b,c La 3 canh cua tam giac!!\n");
		float C = a + b + c;
		float P = C/2;
		float S;
		S=sqrt(P*(P-a)*(P-b)*(P-c));
		printf("Chu vi cua tam giac la: %.2f\n",C);
		printf("Dien tich cua tam giac la: %.2f",S);

}
