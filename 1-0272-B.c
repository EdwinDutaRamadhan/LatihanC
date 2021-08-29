#include<stdio.h>
int i,j,k,l,tinggi;
int main(){
    printf("Berapa tinggi (n) piramida ?  ");
    scanf("%d", &tinggi);
    for(i = 0; i < tinggi; i++ ){
            for(j = 0; j<= i; j++){
                printf("* ");
            }
        printf("\n");
    }
    for(i = 0; i < tinggi; i++ ){
            for(j = tinggi -1; j > i; j--){
                printf("* ");
            }
        printf("\n");
    }

    return 0;
}
