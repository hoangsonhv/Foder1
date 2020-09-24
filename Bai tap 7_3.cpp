#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang = ");
	scanf("%d",&n);
	
	int i=0,x;
	int arr[n];
	do{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&x);
		if (i==0)
			arr[0]=x;
		else{
			for(int j=0;j<i;j++){
				if(x == arr[j]){
					i--;
				}else{
					arr[i]=x;
				}
			}	
		}
		i++;
	}while(i<n);

	printf("\nMang vua nhap la: ");
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
