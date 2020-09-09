#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf(" Giai PT bac 2: ax^2+bx+c=0 \n");
	printf(" Nhap gia tri a= ");
	scanf("%d",&a);	
	printf(" Nhap gia tri b= ");
	scanf("%d",&b);	
	printf(" Nhap gia tri c= ");
	scanf("%d",&c);

	float x1,x2,delta;
	delta=b*b-(4*a*c);
	if(a==0){
		printf("Xem lai dieu kien !");
	}else{
		if(delta<=0){	
			if(delta<0){	
				printf("\n Phuong trinh vo nhgiem !");
			}else {
				x1=x2=-b/2*a;
				printf("Phuong trinh co nghiem kep: x1=x2= %.2f",x1,x2);
			}
		}else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
		 	printf("phuong trinh co hai nghiem phan biet: \n x1= %.2f \n x2= %.2f",x1,x2);	
		}
	}
}
