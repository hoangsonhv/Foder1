#include<stdio.h>
#include<math.h>

// Nhap mang
int main(){
	int n;
	printf("Nhap so phan tu cua mang = ");
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		printf("Phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
// Sap xep mang.
	int j;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
// Nhap so can tim tiem can.
	int a;
	printf("\nNhap a = ");
	scanf("%d",&a);
// tim tiem can.
	int min = a-arr[0];
	int count;
	for(i=1;i<n;i++){
		int tmp=a-arr[i];
		if(tmp<min && tmp>0){
			min=tmp;
			count=arr[i];
		}
	}
// In ra man hinh
	for(i=0;i<n;i++){
		int tmp=a-arr[i];
		if(min==tmp && tmp>0){
			printf("Tiem can duoi cua %d la: %d",a,count);
		}
	}
	if(min<=0){
		printf("Khong co tiem can cua %d trong mang",a);
	}
}
