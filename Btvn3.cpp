#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	printf(" Nhap cac canh: \n");
	printf("  Canh a=");
	scanf("%d",&a);
	printf("  Canh b=");
	scanf("%d",&b);
	printf("  Canh c=");
	scanf("%d",&c);

	float P,p,S,C;
	C=a+b+c;
	p=C/2;
	P=p*(p-a)*(p-b)*(p-c);
	S=sqrt(P);
	if(a+b>c)
	{
		if(a+c>b)
		{
			if(b+c>a)
			{
				printf("\n a,b,c la 3 canh cua 1 Tam giac!");
				printf("\n Tam giac co chu vi la: %0.2f",C);
				printf("\n Tam giac co dien tich la: %0.2f",S);
			}else
			{
				printf(" a,b,c khong phai la 3 canh cua 1 tam giac!");
			}
		}else
		{
			printf("a,b,c khong phai la 3 canh cua 1 tam giac!");
		}
	}else
	{
		printf("a,b,c khong phai la 3 canh cua 1 tam giac!");	
	}	

}
