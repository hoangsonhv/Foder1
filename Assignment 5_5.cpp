#include<stdio.h>
#include<math.h>

// Tim cac so nguyen to trong khang [a,b]

int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	
	if(a<b){
		for(int i=a;i<=b;i++){
			int j,c=1;
			for(j=2;j<=i;j++){
				if(i % j == 0){
					c--;		
				}
			}
			if(c==0){
				printf("\nSo nguyen to lon hon hoac bang %d va nho hon hoac bang %d la: %d",a,b,i);
			}
		}
	}else{
		printf("Nhap sai");
	}	
}
