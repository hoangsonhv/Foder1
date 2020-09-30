#include<stdio.h>

int main(){
	float s=4000,ls=0.08;
	int n;
	printf("Nhap so nam: ");
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		s=s+(s*ls);
	}
	printf("So tien sau %d nam gui ngan hang la: %f",n,s);
}
