#include<stdio.h>
#include<math.h>

// Tim cac so nguyen to nho hon n.

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	if(n<=2){
		printf("Khong co so nguyen to nho hon 2");
	}else{
		for(int i=2;i<n;i++){
			int j,a=1;
			for(j=2;j<=i;j++){
				if(i % j == 0){
					a--;		
				}
			}
			if(a==0){
				printf("\nSo nguyen to nho hon %d la %d",n,i);
			}
		}
	}
}

