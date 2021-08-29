#include <stdio.h>
#include <string.h>
int i,j,k,l,total,jumlah = 0,jmlKarakter,jmlKarakter2,jmlKarakter3,jmlKarakter4,jmlKarakter5;
char kata1[100], kata2[100],kata3[100],kata4[100],kata5[100];
void main(){

    printf("Masukkan kalimat : ");
    scanf("%s %s %s %s %s", &kata1, &kata2, &kata3, &kata4, &kata5);
    for(i = 0; i < 100; i++){
        if(kata1[i]>= 97 && kata1[i]<= 122){
            kata1[i] = kata1[i] - 32;
        }
    }
    for(i = 0; i < 100; i++){
        if(kata2[i]>= 97 && kata2[i]<= 122){
            kata2[i] = kata2[i] - 32;
        }
    }
    for(i = 0; i < 100; i++){
        if(kata3[i]>= 97 && kata3[i]<= 122){
            kata3[i] = kata3[i] - 32;
        }
    }
     for(i = 0; i < 100; i++){
        if(kata4[i]>= 97 && kata4[i]<= 122){
            kata4[i] = kata4[i] - 32;
        }
    }
    for(i = 0; i < 100; i++){
        if(kata5[i]>= 97 && kata5[i]<= 122){
            kata5[i] = kata5[i] - 32;
        }
    }
     jmlKarakter = strlen(kata1);
    printf("Kalimat yang dibalik = ");
    for(; jmlKarakter > 0; jmlKarakter--){
        printf("%c", kata1[jmlKarakter - 1]);
    }
    printf(" ");
    jmlKarakter2 = strlen(kata2);
     for(; jmlKarakter2 > 0; jmlKarakter2--){
        printf("%c", kata2[jmlKarakter2 - 1]);
    }
    printf(" ");
    jmlKarakter3 = strlen(kata3);
     for(; jmlKarakter3 > 0; jmlKarakter3--){
        printf("%c", kata3[jmlKarakter3 - 1]);
    }
    printf(" ");
    jmlKarakter4 = strlen(kata4);
     for(; jmlKarakter4 > 0; jmlKarakter4--){
        printf("%c", kata4[jmlKarakter4 - 1]);
    }
    printf(" ");
     jmlKarakter5 = strlen(kata5);
     for(; jmlKarakter5 > 0; jmlKarakter5--){
        printf("%c", kata5[jmlKarakter5 - 1]);
    }
    for(i = 0; kata1[i];i++){
        jmlKarakter++;
    }
     for(i = 0; kata2[i];i++){
        jmlKarakter++;
    }
    for(i = 0; kata3[i];i++){
        jmlKarakter++;
    }
    for(i = 0; kata4[i];i++){
        jmlKarakter++;
    }
    for(i = 0; kata5[i];i++){
        jmlKarakter++;
    }
    printf("\nJumlah Karakter = %d", jmlKarakter);
return 0;
}
