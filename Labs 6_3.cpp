#include <stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang n = ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap so x = ");
	scanf("%d",&x);
	int a=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			a++;
			break;
		}
	}
	if(a>0){
		printf("\n%d co trong mang!!");
	}else{
		printf("\n%d khong co trong mang!!",x);
	}
}
