#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int i;
	int ary[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int min=0;
	for(i=0;i<n;i++){
		if(ary[i]>0){
			min=ary[i];
			break;
		}
	}
	if(min<=0){
		printf("Khong co so duong trong mang");
	}else{
		for(i=0;i<n;i++){
			if(ary[i]>0 && ary[i]<min){
				min=ary[i];
			}
		}
		printf("So duong nho nhat trong mang la %d",min);
	}
}


