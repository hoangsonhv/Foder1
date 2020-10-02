#include <stdio.h>

int main(){
	
	float S,LS;
	int N;
	printf("Nhap Von = \n");
	scanf("%f",&S);
	printf("Nhap Lai Suat = \n");
	scanf("%f",&LS);
	printf("Nhap So Nam = \n");
	scanf("%d",&N);
	
	if(S>0 && LS>0 && N>0){
		for(int i=1;i<=N;i++){
			float TL = S*LS/100;
			S += TL;
			printf("\n Year: %d\tInterest: %f\t\tSum: %f",i,TL,S);
		}
	}
}
