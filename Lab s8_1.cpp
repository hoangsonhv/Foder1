#include <stdio.h>

int KiemTraSoNT(int n){
	
	if(n>1){
		int a=0;
		for(int i=2;i<n;i++){
			if(n%i==0){
				a++;
			}
		}
		if(a==0){
			printf("\n%d la so nguyen to!!",n);
		}else{
			printf("\n%d khong phai so nguyen to!!",n);
		}
	}else{
		printf("\n%d khong phai so nguyen to!!",n);
	}
	return n;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	KiemTraSoNT(n);
	
}
