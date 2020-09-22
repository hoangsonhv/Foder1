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
			a++;
			C=C+ary[i];
			if(C>max){
				max=C;
			}
		}else{
			a=0;
			b++;
			C=0;
		}
	}
	if(b==n){
		printf("Khong co so duong trong mang");
	}else{
		printf("Tong so duong lien tiep lon nhat la: %d",max);
	}
}
