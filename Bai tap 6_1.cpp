#include<stdio.h>
#include <stdbool.h>

int main(){
	
	int n;
		printf("Nhap n = ");
		scanf("%d",&n);
	int ary[n];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	bool c=false;
	int le;
	for(i=0;i<n;i++){
		if(ary[i] % 2 == 1){
			le=ary[i];
			c=true;
		}
	}if(!c){
		printf("\nMang toan so chan!!!");
	}else{
		printf("\nSo le cuoi cung cua chuoi la: %d",le);
	}
}
