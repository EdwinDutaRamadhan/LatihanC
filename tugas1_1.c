#include <stdio.h>
int tringular,i;

int main(){
    printf("Masukkan Nilai \t\t\t :");
    scanf("%d", &tringular);
    printf("bilangan tringular dari %d adalah : %d", tringular,tringular);
    for(i = tringular-1;i >= 1;i--){
        printf(" + %d", i);
    }
}

