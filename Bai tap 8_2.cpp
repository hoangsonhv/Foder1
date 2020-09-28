#include<stdio.h>


int tongcacchuso(int a){
	int m;
	int Tong=0;
	for(;a!=0;){
		m = a % 10;
		Tong = Tong + m;
		a = a / 10;
	}
	return Tong;
}

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	
	printf("Tong cac chu so la %d",tongcacchuso(a));
}
