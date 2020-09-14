#include<math.h>
#include<stdio.h>

int main(){
	int a,b,c,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,year;
	printf("Hay Nhap Thang va ngay \n");
	printf("+Thang: ");
	scanf("%d",&a);
	printf("+Ngay: ");
	scanf("%d",&b);
// Nam Khong Nhuan cac thang va nam se co so ngay nhu sau:
	T1=T3=T5=T7=T8=T10=T12=31;
	T4=T6=T9=T11=30;
	T2=28;
	year=365;
// Action!!
	if(a>0 && a<13){
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
			if(b>0&&b<32){
				if(a==1){
					c=b;
				}else if(a==3){
					c=T1+T2+b;
				}else if(a==5){
					c=T1+T2+T3+T4+b;
				}else if(a==7){
					c=T1+T2+T3+T4+T5+T6+b;
				}else if(a==8){
					c=T1+T2+T3+T4+T5+T6+T7+b;
				}else if(a==10){
					c=T1+T2+T3+T4+T5+T6+T7+T8+T9+b;
				}else{
					c=T1+T2+T3+T4+T5+T6+T7+T8+T9+T10+T11+b;
				}
				printf("\n-Ngay %d Thang %d La ngay thu %d cua nam! \n",b,a,c);
				float x=c%7;
				if(x==0){
					printf("\n-Va la ngay Chu Nhat trong Tuan");
				}else if(x==1){
					printf("\n-Va la ngay Thu Hai trong Tuan");
				}else if(x==2){
					printf("\n-Va la ngay Thu Ba trong Tuan");
				}else if(x==3){
					printf("\n-Va la ngay Thu Tu trong Tuan");
				}else if(x==4){
					printf("\n-Va la ngay Thu Nam trong Tuan");
				}else if(x==5){
					printf("\n-Va la ngay Thu Sau trong Tuan");
				}else {
					printf("\n-Va la ngay Thu Bay trong Tuan");
				}
			}else{
				printf("Nhap sai ngay");
			}	
		}else if(a==4||a==6||a==9||a==11){
			if(b>0 && b<31){
				if(a==4){
					c=T1+T2+T3+b;
				}else if(a==6){
					c=T1+T2+T3+T4+T5+b;
				}else if(a==9){
					c=T1+T2+T3+T4+T5+T6+T7+T8+b;
				}else{
					c=T1+T2+T3+T4+T5+T6+T7+T8+T9+T10+b;
				}
				printf("\n-Ngay %d Thang %d La ngay thu %d cua nam! \n",b,a,c);
				float x=c%7;
				if(x==0){
					printf("\n-Va la ngay Chu Nhat trong Tuan");
				}else if(x==1){
					printf("\n-Va la ngay Thu Hai trong Tuan");
				}else if(x==2){
					printf("\n-Va la ngay Thu Ba trong Tuan");
				}else if(x==3){
					printf("\n-Va la ngay Thu Tu trong Tuan");
				}else if(x==4){
					printf("\n-Va la ngay Thu Nam trong Tuan");
				}else if(x==5){
					printf("\n-Va la ngay Thu Sau trong Tuan");
				}else {
					printf("\n-Va la ngay Thu Bay trong Tuan");
				}
			}else{
				printf("Nhap sai ngay");
			}
		}else{
			if(b>0&&b<29){
				c=T1+b;
				printf("\n-Ngay %d Thang %d La ngay thu %d cua nam! \n",b,a,c);
				float x=c%7;
				if(x==0){
					printf("\n-Va la ngay Chu Nhat trong Tuan");
				}else if(x==1){
					printf("\n-Va la ngay Thu Hai trong Tuan");
				}else if(x==2){
					printf("\n-Va la ngay Thu Ba trong Tuan");
				}else if(x==3){
					printf("\n-Va la ngay Thu Tu trong Tuan");
				}else if(x==4){
					printf("\n-Va la ngay Thu Nam trong Tuan");
				}else if(x==5){
					printf("\n-Va la ngay Thu Sau trong Tuan");
				}else {
					printf("\n-Va la ngay Thu Bay trong Tuan");
				}
			}else{
				printf("Nhap sai ngay");
			}
		}
	}else if((a<=0 && b<=0)||(a>12 && b>31)||(a>12 && b<=0)||(a<=0 && b>31)){         /* Max condition*/
		printf("Nhap sai Thang va Ngay!");
	}else{
		printf("Nhap sai thang!");
	}
}
