#include<stdio.h>

// Tinh tong 100 so le dau tien >0.

int main(){
	int S=0;
	for(int n=1;n<200;n++){
		if(n%2!=0){
		S=S+n;
		}
	}
	printf("Tong so le la: %d",S);
}
