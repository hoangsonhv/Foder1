#include <stdio.h>


int fibonaci(int n){
    int f0 = 0,f1 = 1,fn = 1,i;
    
    if(n < 0){
        return -1;
    }else if (n == 0 || n == 1){
        return n;
    }else{
        for(i = 2;i < n;i++){
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
	return fn;
}

int main(){
 	int i;
    printf("\nDay so Fibonaci tu 1 den 100 la : \n");
    for(i = 0;i < 12;i++){
        printf("%5d",fibonaci(i));
    }
}
