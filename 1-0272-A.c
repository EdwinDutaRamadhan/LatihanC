#include <stdio.h>

int i,j,k,l,a,b;
int main(){

    printf("Berapa tinggi (n) piramida? ");
    scanf("%d", &a);

    for(i = 0; i < a; i++){
        for( j = a-1; j > i ; j --){//supaya sudut segitiga mepet batas atas
            printf("  ");
        }
        for(j = 0; j < i; j++){
            printf("* ");
        }
    printf("\n");
    }

return 0;
}
