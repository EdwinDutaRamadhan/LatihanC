#include <stdio.h>
#include <string.h>
int i,j,k,l,total,jmlKarakter1,jmlKarakter2,jmlKarakter3,jmlKarakter4;
char kata1[100], kata2[100],kata3[100],kata4[100];
void main(){

    printf("Masukkan kalimat : ");
    scanf("%s %s %s %s", &kata1, &kata2, &kata3, &kata4);//harus 4 kata
    //kata1
    jmlKarakter1 = strlen(kata1);
    printf("Kalimat yang dibalik = ");
    for(; jmlKarakter1 > 0; jmlKarakter1--){//pengkondisian reverse kata1
        printf("%c", kata1[jmlKarakter1 - 1]);//reverse kata1
    }
    if(kata1 != '\n'){
        total ++;
    }
    printf(" ");
    //kata2
    jmlKarakter2 = strlen(kata2);
     for(; jmlKarakter2 > 0; jmlKarakter2--){//pengkondisian reverse kata2
        printf("%c", kata2[jmlKarakter2 - 1]);
    }
    if(kata2 != '\n'){
        total ++;
    }
    printf(" ");
    //kata3
    jmlKarakter3 = strlen(kata3);
     for(; jmlKarakter3 > 0; jmlKarakter3--){//pengkondisian reverse kata3
        printf("%c", kata3[jmlKarakter3 - 1]);
    }
    if(kata3 != '\n'){
        total ++;
    }
    printf(" ");
    //kata4
    jmlKarakter4 = strlen(kata4);
     for(; jmlKarakter4 > 0; jmlKarakter4--){//pengkondisian reverse kata4
        printf("%c", kata4[jmlKarakter4 - 1]);
    }
    if(kata4 != '\n'){
        total ++;
    }
    printf("\nJumlah Kata = %d", total);
return 0;
}
