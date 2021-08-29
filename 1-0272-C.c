#include <stdio.h>

int i,j,k,l,a,b;
int main(){

    printf("Berapa tinggi (n) piramida? ");
    scanf("%d", &a);
//baris pertama
    for(i = 0; i < a; i++){
        for( j = a-1; j > i ; j --){//supaya sudut segitiga mepet batas atas
            printf("  ");
        }
        for(j = 0; j <= i; j++){
            printf("* ");
        }
    printf("\n");
    }
//baris kedua
    for(i = 0; i < a; i++){
        for(j = 0; j <= i; j++){
            printf("  ");
        }
        for( j = a-1; j > i ; j --){
            printf("* ");
        }

    printf("\n");
    }
return 0;
}
