#include<stdio.h>
#include <stdlib.h>

// Tim uoc chung lon nhat cua hai so a va b

int main(){
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	if(a<0 || b<0){
		a=abs(a);
		b=abs(b);
	}
	if(a==0 && b!=0){
		printf("\nUCLN cua hai so la: %d",b);
	}else if(a!=0 && b==0){
		printf("\nUCLN cua hai so la: %d",a);
	}else if(a==0 && b==0){
		printf("\nKhong co UCLN cua 0 ");
	}else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		printf("\nUCLN cua hai so  la %d",a);	
	}
}
