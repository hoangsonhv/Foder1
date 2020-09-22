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
	int a=0,b=0,max=0,C=0;
	for(i=0;i<n;i++){
		if(ary[i]>0){
			a++;;
			if(a>max){
				max=a;
			}
		}else{
			a=0;
			b++;
		}
	}
	if(b==n){
		printf("\nKhong co so duong trong mang");
	}else{
		printf("\nSo luong so duong lien tiep nhieu nhat la: %d",max);
	}
}
