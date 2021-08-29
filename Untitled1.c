#include <stdio.h>
#include <stdlib.h>


void main()
{
    int jam, menit, hmenit,pil,v,w,x,y=0,a,b,c,d,mnu;
    printf("Menu program : \n");
    printf("1. Mencari angka terbesar. \n");
    printf("2. Mencari kelipatan angka. \n");
    printf("3. Mencari angka ganjil genap. \n");
    printf("4. Kalkulator Jam. \n");
    scanf("%d",&mnu);
    switch(mnu)
    {
        case 1:
            printf("Tuliskan 4 angka yang ingin diperiksa tertinggi , contoh input (1 2 3 4) ");
    scanf("%i %i %i %i", &a,&b,&c,&d);
    if(a<b || a<c || a<d)
    {
        if(b<c||b<d)
        {
            if(c<d)
            {
                printf("Angka terbesar adalah angka %i",d);
            }
            else

            {
               printf("Angka terbesar adalah angka %i",c);
            }

        }else
        {
               printf("Angka terbesar adalah angka %i",b);
        }

    }else if (a>b && a>c && a>d)
    {

            printf("Angka terbesar adalah %i",a);

    }else
    {
        printf("Angka sama semua");
    }

            break;
        case 2:
    printf("Input angka yang ingin diperiksa kelipatannya: (tidak boleh 0) ");
    scanf("%d",&v);
    printf("Input angka yang dasar kelipatannya: (tidak boleh 0) ");
    scanf("%d",&w);
    if(v == 0 || w == 0)
    {
        printf("Input berupa 0, tidak bisa dikerjakan");
    }else
    {
        if(v%w==0)
    {
        printf("Angka %i adalah kelipatan %i\n",v,w);
    }else
    {
        printf("Angka %i bukan kelipatan %i\n",v,w);
    }
    }


             break;
        case 3: printf("Input angka yang ingin diperiksa : ");
    scanf("%d",&x);
    if(x<0)
    {
        y=1;
        x*=-1;
    }else
    {
        y=0;
    }

    switch(x%2)
    {
        case 0:

            if(y==0)
            {
                if(x==0)
                {
                    printf("Angka adalah nol\n");
                }else
                {
                    printf("Angka adalah genap positif\n");
                }


            }else
            {
                printf("Angka adalah genap negatif\n");
            }break;
        case 1:

            if(y==0)
            {
                printf("Angka adalah ganjil positif\n");
            }else
            {
                printf("Angka adalah ganjil negatif\n");
            }


            break;
        default: printf("tidak ada angka");break;
    }

            break;
        case 4: printf("Input jam yang ingin dihitung (format: jam menit , contoh : 12 00 / 9 05 ) : ");
    scanf("%i %i",&jam,&menit);
    if(jam <0 || menit <0 || jam > 24 || menit>59)
    {
        printf("Program error");
    }else
    {
        if(menit>=60)
    {
        printf("Format Salah");
    }else
    {
    printf("\nInput berapa menit untuk dihitung : ");
    scanf("%i",&hmenit);
    if(hmenit < 0)
    {
        printf("Program error");
    }else
    {
        printf("\nPilih operasi yang ingin dilakukan : \n");
    printf("1. Hitung mundur \n");
    printf("2. Hitung maju  \n");
    printf("Pilihan : ");
    scanf("%i",&pil);
    printf("\n");
        switch(pil)
    {
        case 1:   if(hmenit>=60)
        {

            if((jam-hmenit/60) <0)
            {
                 jam +=24;
            }
            if((menit-hmenit%60)<0)
            {

                jam-=hmenit/60;
                menit+=60;//ini kode barunya karena perhitungan salah
                menit-=hmenit%60;
                //revisi karena ada salah perhitungan
                //menit*=-1;
                jam--;
            }else
            {
                jam-=hmenit/60;
                menit-=hmenit%60;
            }



        }else
        {
            if((menit-hmenit)<0)
            {
                if(jam-1 <0)
            {
                 jam +=24;
            }
                jam-=1;
                menit = (60-(hmenit-menit));
            }else
            {

                menit = menit-hmenit;
            }
        }
        printf("Hasilnya adalah ");
        //biar rapih saja
            if(jam < 10)
            {
                printf("0%d:",jam);
            }else
            {
                printf("%d:",jam);
            }
            if(menit <10)
            {
                printf("0%d",menit);
            }else
            {
               printf("%d",menit);
            }
        break;
        case 2: if(hmenit>=60)
        {


            if((menit+hmenit%60)>59)
            {

                jam+=hmenit/60;
                menit+=hmenit%60;
                if(menit >=60)
                {
                    jam ++;
                    menit-=60;
                }
                //menit*=-1;
            }else
            {
                jam+=hmenit/60;
                menit+=hmenit%60;
            }
            if(jam >24)
            {

                jam -=24;
            }


        }else
        {
            if((menit+hmenit)>=60)
            {
                if(jam+1 >23)
            {
                 jam -=24;
            }
                jam+=1;

                menit = (hmenit+menit)-60;

            }else
            {

                menit += hmenit;
            }
        }
        printf("Hasilnya adalah ");
        //biar rapih saja
            if(jam < 10)
            {
                printf("0%d:",jam);
            }else
            {
                printf("%d:",jam);
            }
            if(menit <10)
            {
                printf("0%d",menit);
            }else
            {
               printf("%d",menit);
            }


            break;
        default : printf("Program Error");break;
    }
    }

    }
    }


            break;
        default:printf("Input salah, keluar dari program.... \n");

            break;
    }



    printf("\n");
    getch();
    getch();




}





















