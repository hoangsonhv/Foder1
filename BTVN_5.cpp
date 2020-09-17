#include<stdio.h>
#include<math.h>

// Tim so nguyen to.

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(n < 2){
		printf("\n %d Khong phai la so nguyen to!",n);
	}else{
		int i =2 ,a = 0;
		for(i = 2;i <= sqrt(n);i++){
			if(n % i == 0){
				a++;
			}
		}
		if(a == 0){
			printf("\n %d La so nguyen to!",n);
		}else{
			printf("\n %d Khong phai la so nguyen to!",n);
		}
	}
}
