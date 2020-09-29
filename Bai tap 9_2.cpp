#include<stdio.h>
#include<string.h>

void NhapChuoi(char arr[][100], int n){
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",arr[i]);
	}
}
void InChuoi(char arr[][100], int n){
	printf("\nDanh sach chuoi vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%s",arr[i]);
	}
}
int SapXepChuoi(char arr[][100], int n){
	char t[20];
	for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
         if (strcmp(arr[j - 1], arr[j]) > 0) {
            strcpy(t, arr[j - 1]);
            strcpy(arr[j - 1], arr[j]);
            strcpy(arr[j], t);
         }
      }
   }
   printf("\nThu tu chuoi la: ");
   for(int i=0;i<n;i++){
   	printf("%s",arr[i]);
   }
}

int main(){
	int n;
	printf("Nhap so chuoi n = ");
	scanf("%d",&n);
	
	char arr[n][100];
	NhapChuoi(arr,n);
	InChuoi(arr,n);
	SapXepChuoi(arr,n);
}
