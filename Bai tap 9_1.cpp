#include<stdio.h>
#include<string.h>
main(){
	char s[100];
	int d1=0,d2=0,d3=0;
	printf("\nNhap chuoi: ");
	gets(s);
	
	int n = strlen(s);
	for(int i=0;i<n;i++){
		if((s[i] =='a')||(s[i] =='e')||(s[i] =='u')||(s[i] =='o')||(s[i] =='i')){ 
			d1++;
 			d3++;
		}
	}
	printf("\nSo nguyen am la : %d",d1);
	printf("\nSo ky tu khac la : %d",n-d1); 
}
