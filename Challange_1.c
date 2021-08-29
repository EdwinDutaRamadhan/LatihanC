#include <stdio.h>

int main() {

    int nim;
    char nama[30], alamat [45], kota_asal [25], nama_ortu [20], telepon[15], status [15];
    float ipk;
    char opsi;
//input

    //Header Atas
    printf("\n========================================");
    printf("\n........Masukkan Data Diri Anda.........");
    printf("\n========================================\n\n");

    //NIM anda
    printf("NIM anda \t: ");
    scanf("%d", &nim);

    //Nama anda
    printf("Nama anda \t: ");//maksimal 30 digit
    scanf(" %40[^\n]%*c",nama);

    //Alamat anda
    printf("Alamat anda \t: ");//maksimal 45 digit
    scanf("%30[^\n]%*c", alamat);

    //Kota asal anda
    printf("Kota asal anda \t: ");//maksimal 25 digit
    scanf("%20[^\n]%*c", kota_asal);

    //Nama Ortu
    //printf("Nama ortu anda : ");//maksimal 20 digit
   // scanf("%30[^\n]%*c", nama_ortu);

    //Telepon anda
    printf("Telepon anda \t: +62");//diawali dengan +62
    scanf("%15[^\n]%*c", &telepon);

    //IPK
    printf("IPK anda \t: ");
    scanf("%f", &ipk);

    //Status anda
    printf("Status anda \t: ");
    scanf("%s", status);

//output

    //header output
    printf("\n========================================");
    printf("\n..............Data Diri Anda............");
    printf("\n========================================\n\n");

    //jika maka NIM
    if(nim >= 670000000 && nim < 680000000){
        printf("NIM \t\t:  %d (Teknik Informatika) \n", nim);//TI
    } else if(nim >= 680000000 && nim < 690000000) {
        printf("NIM \t\t:  %d (Sistem Informasi) \n ", nim);//SI
    } else if(nim >= 690000000 && nim < 700000000) {
        printf("NIM \t\t:  %d (Design Komputer Visual) \n", nim);//DKV
    } else {
        printf("NIM \t\t:  %d (*Jurusan Belum Terdata*) \n", nim);
    }

    printf("Nama \t\t:  %s \n", nama);

    printf("Alamat \t\t:  %s \n", alamat);

    printf("Kota Asal \t:  %s \n", kota_asal);

    //printf("Nama Ortu : %s \n", nama_ortu);

    printf("Telepon \t:  +62%s \n", telepon);

    //IPK
    if (ipk >= 3.5){
            printf("IPK \t\t:  %.2f (Bagus Sekali) \n", ipk);// 3,5 - 4.0
    } else if(ipk >= 3 && ipk < 3.5) {
            printf("IPK \t\t:  %.2f (Bagus ) \n", ipk);//3,0 - 3,49
    } else if(ipk >= 2.5 && ipk < 3) {
            printf("IPK \t\t:  %.2f (Cukup ) \n", ipk);//2,5 - 2,99
    } else if (ipk >= 2 && ipk< 2.5) {
            printf("IPK \t\t:  %.2f (Kurang ) \n", ipk);//2-
    } else if (ipk >4){
            printf("IPK \t\t:  %.2f (Sekolah dimana anda? ) \n", ipk);
    } else if (ipk == 4){
            printf("IPK \t\t:  %.2f (Bukan Orang) \n", ipk);
    } else {
            printf("IPK \t\t:  %.2f (Kurang Sekali ) \n", ipk);
    }

    //Header Bawah
    printf("Status\t\t:  %s \n", status);

    printf("\n========================================");
    printf("\n..............Kesimpulan................");
    printf("\n========================================\n\n");

     printf("NIM anda \t: %d \n", nim);

    //deklarasi ulang NIM
    if(nim >= 670000000 && nim < 680000000){
        printf("Kamu anak TI ya?");
        printf("(Input harus Y/T) \n: ");
        printf("\t\t: ");
        scanf(" %c", &opsi);
            //decision Y or T
            if(opsi == 'Y'){
                printf("Selamat datang anak TI");
            } else if(opsi == 'T'){
                printf("Goodbye!");
            } else {
                printf("Input anda tidak sesuai");
        }
    } else if(nim >= 680000000 && nim < 690000000) {
        printf("Kamu anak SI ya?");
        printf("(Input harus Y/T) \n ");
        printf("\t\t: ");
        scanf(" %c", &opsi);
            //decision Y or T
            if(opsi == 'Y'){
                printf("Selamat datang anak SI");
            } else if(opsi == 'T'){
                printf("Goodbye!");
            } else {
                printf("Input anda tidak sesuai");
        }
    } else if(nim >= 690000000 && nim < 700000000) {
        printf("Kamu anak DKV ya?");
        printf("(Input harus Y/T) \n");
        printf("\t\t: ");
        scanf(" %c", &opsi);
            //decision Y or T
            if(opsi == 'Y'){
                printf("Selamat datang anak DKV");
            } else if(opsi == 'T'){
                printf("Goodbye!");
            } else {
                printf("Input anda tidak sesuai");
        }
    } else {
        printf("Kamu anak mana ya?");
    }

        printf("\n\nHallo %s anda %s tinggal di %s dari %s kuliah di UKSW \ndengan NIM %d dan mendapatkan IPK %.2f ", nama, status, alamat, kota_asal, nim, ipk);
    printf("\n");

    return 0;
}
