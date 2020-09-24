#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int ary[n];
	for(int i=0; i<n; i++){
		int a;
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d", &a);
		ary[i]=a;
		int j=i-1;
		int tmp=ary[i];
		while(j>=0 && tmp<ary[j]){
			ary[j+1]=ary[j];
			j--;
		}
		ary[j+1]=tmp;
	}
	printf("Mang sau khi sap xep la:\n");
	for(int i=0; i<n; i++){
		printf("%5d",ary[i]);
	}
}
