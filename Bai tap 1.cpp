#include<stdio.h>

int main(){
	int a;
	printf("Nhap a= ");
	scanf("%d",&a);
	if(a>=2){
		if(a==2){
			printf("Day la thu 2 ");
		}else if(a==3){
			printf("Day la thu 3 ");
		}else if(a==4){
			printf("Day la thu 4 ");
		}else if(a==5){
			printf("Day la thu 5");
		}else if(a==6){
			printf("Day la thu 6");
		}else if(a==7){
			printf("Day la thu 7");
		}else if(a==8){
			printf("Day la chu nhat");
		}else{
			printf("Day khong phai ngay trong tuan");
		}
	}else{
		printf("Day khong phai ngay trong tuan");
	}
}

										

