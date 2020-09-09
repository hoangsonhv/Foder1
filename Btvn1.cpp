#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	
	printf("nhap b=");
	scanf("%d",&b);
	
	printf("nhap c=");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("Min: %d",a);
		}else{
			printf("Min: %d",c);
		}
	}else{
		if(b<c){
			printf("Min :%d",b);
		}else{
			printf("Min :%d",c);
		}
	}
}
