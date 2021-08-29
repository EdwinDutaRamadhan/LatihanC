#include <stdio.h>

char nama[100];
int i,jumlahSpasi = 0;

int main(){
    printf("Masukan kalimat : ");//maksimal 100
    scanf("%40[^\n]%*c",&nama );
    for(i = 0 ; i < 100; i++){
        if(nama[i] == ' '){//apabila karakter kosong maka,
                jumlahSpasi++;
            }
    }
    for(i = 0; i < 100; i++){
            //sesuai ASCII
        if(nama[i]>= 65 && nama[i] <= 90){
            nama[i] = nama[i] + 32;//besar menjadi kecil
        }
    }
    printf("Kalimat yang diinputkan = %s", nama);
    printf("\nJumlah Spasi = %d", jumlahSpasi);
    return 0;
}

