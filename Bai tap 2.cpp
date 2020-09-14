#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	printf("So a la: ");
	scanf("%d",&a);
	printf("So b la: ");
	scanf("%d",&b);
	
	if(a>=b){
		if(a==0){
			if(b==0){
				printf("\nSai.vui long nhap lai.");
			}else{	
				float C;
				C=(float)a/b;
				printf("Thuong cua a va b la: %.2f",C);
			}
		}else if(b==0){
				printf("\nSai.vui long nhap lai.");
		}else{	
			float C;
			C=(float)a/b;
			printf("Thuong cua a va b la: %.2f",C);
		}
	}else{
		int T=a*b;
		printf("\nTich cua a va b la: %d",T);
	}
}
