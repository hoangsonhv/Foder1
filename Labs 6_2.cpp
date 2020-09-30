#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int s=0;
	float tbc,j=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			if(i%2==0){
				s=s+arr[i];
				j++;
			}
		}
	}
	if(j>0){
		tbc = s/j;
		printf("\nTBC cac so le o vi tri chan la: %.2f",tbc);
	}
}
