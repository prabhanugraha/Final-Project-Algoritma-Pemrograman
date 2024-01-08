#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//List Barang sesuai kode
void barang();
//Function untuk kembalian belanja
int kembalian();
//Function utama
int main ()
{
    char ulangi = 'n';
    do
    {
        printf("===============================================================\n");
        printf("\t\tSELAMAT DATANG DI TOKO KAMI\n");
        printf("===============================================================\n");
        printf("Lihat Kode Barang ? (y/n) : ");
        scanf("%s",&ulangi);

        //Meminta User apakah ingin melihat List Barang
        if (ulangi == 'y')
        {
            barang();
        }

        int kode; //variabel memasukkan kode barang belanja
        int jumlah; //variabel memasukkan banyak barang belanja
        int harga; //variabel harga tiap barang
        int biaya,jb; //biaya = total harga*biaya per barang //jb = penampung biaya tiap berubah
        int tb = 0; //Total belanja keseluruhan
        int uangmu; //variabel banyak uang untuk bayar
        
        //Do-While
        do
        {
            printf("Kode Barang = ");
            scanf("%d",&kode);
            if (kode <= 10)
            {
                printf("Jumlah Barang = ");
                scanf("%d",&jumlah);
                printf("\n");

                //switch-case kode
                switch (kode)
                {
                case 1:
                printf("Barang Pilihan Anda    : Kaos O-Neck\n");
                printf("Kode Barang            : 1\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 20.000");
                harga = 20000;
                break; 

                case 2:
                printf("Barang Pilihan Anda    : Kaos V-Neck\n");
                printf("Kode barang            : 2\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 35.000");
                harga = 35000;
                break;

                case 3:
                printf("Barang Pilihan Anda    : Kaos Y-Neck/Henley\n");
                printf("Kode barang            : 3\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 28.000");
                harga = 28000;
                break;

                case 4:
                printf("Barang Pilihan Anda    : Kaos Turtleneck\n");
                printf("Kode barang            : 4\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 25.000"); 
                harga = 25000;
                break;

                case 5:
                printf("Barang Pilihan Anda    : Kaos Polo\n");
                printf("Kode barang            : 5\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 38.000"); 
                harga = 38000;
                break;

                case 6:
                printf("Barang Pilihan Anda    : Kaos Polos Built UP\n");
                printf("Kode barang            : 6\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 23.000");
                harga = 23000;
                break;

                case 7:
                printf("Barang Pilihan Anda    : Kaos Oversize\n");
                printf("Kode barang            : 7\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 45.000");
                harga = 45000;
                break;

                case 8:
                printf("Barang Pilihan Anda    : Ringer Shirt\n");
                printf("Kode barang            : 8\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 40.000");
                harga = 40000;
                break;

                case 9:
                printf("Barang Pilihan Anda    : Pocket Tee\n");
                printf("Kode barang            : 9\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 50.000");
                harga = 50000;
                break;

                case 10:
                printf("Barang Pilihan Anda    : Kaos Raglen\n");
                printf("Kode barang            : 10\n");
                printf("Jumlah barang          : %i \n",jumlah);
                printf("Harga                  : Rp 38.000");
                harga = 38000;
                break;

                default:
                    printf("Maaf Barang yang Anda Pilih Tidak Ada !");
                    break;
                }

                printf("\n");
                if (kode<=10)
                {
                    biaya=harga*jumlah;
                    jb=biaya;
                    printf("Total Harga Barang = Rp %d ",jb);
                    printf("\n");
                    tb += jb;
                    printf("\n\nTambah Barang ? (y/n) : ");
                    scanf("%s",&ulangi);
                }

            }
            //Ketika User menginput kode diluar list
            else
            {
                printf("\nMaaf kode tidak valid");
                printf("\nLihat Kode Barang ? (y/n) : ");
                scanf("%s",&ulangi);
                if (ulangi == 'y')
                {
                    barang();
                }
                    
                printf("\nTambah barang ? (y/n) : ");
                scanf("%s",&ulangi);
                if (ulangi == 'y')
                {
                    printf("\nKode Barang = ");
                    scanf("%d",&kode);
                }

            }
            
        } while (ulangi == 'y');
        
        printf("");
        printf("\n");
        printf("\nTotal Belanja Keseluruhan = Rp %d\n",tb);

        printf("\nMasukkan Jumlah Uang Pembayaran : Rp ");
        scanf("%d",&uangmu);

        if (uangmu<tb)
        {
            printf("\nUang yang anda masukkan kurang Rp %d",tb-uangmu);
            printf("\nSilahkan masukkan uang kembali = Rp ");
            scanf("%d",&uangmu);
        }
        
        printf("\nKembalian = Rp %d\n\n",kembalian(tb,uangmu));

        printf("===============================================================\n");
        printf("\t\tTERIMA KASIH SUDAH BERBELANJA\n");
        printf("===============================================================\n");

        printf("\nApakah ingin mengulang? (y/n) = ");
        scanf("%s",&ulangi);
        system("cls");

    } while (ulangi == 'y');

    system("cls");
    printf("\nSEMOGA HARIMU MENYENANGKAN !!\n\n");
    return 0;
}

//function list barang
void barang()
{
    printf("\n\t\tList Barang\n");
    printf("\t=============================\n");
    printf("Kode Barang            : 1\n");
    printf("Nama Barang            : Kaos O-Neck\n");
    printf("Harga                  : Rp 20.000\n\n");

    printf("Kode Barang            : 2\n");
    printf("Nama Barang            : Kaos V-Neck\n");
    printf("Harga                  : Rp 35.000\n\n");

    printf("Kode Barang            : 3\n");
    printf("Nama Barang            : Kaos Y-Neck/Henley\n");
    printf("Harga                  : Rp 28.000\n\n"); 

    printf("Kode Barang            : 4\n");
    printf("Nama Barang            : Kaos Turtleneck\n");
    printf("Harga                  : Rp 25.000\n\n"); 

    printf("Kode Barang            : 5\n");
    printf("Nama Barang            : Kaos Polo\n");
    printf("Harga                  : Rp 38.000\n\n"); 

    printf("Kode Barang            : 6\n");
    printf("Nama Barang            : Kaos Polos Built UP\n");
    printf("Harga                  : Rp 23.000\n\n");

    printf("Kode Barang            : 7\n");
    printf("Nama Barang            : Kaos Oversize\n");
    printf("Harga                  : Rp 45.000\n\n");

    printf("Kode Barang            : 8\n");
    printf("Nama Barang            : Ringer Shirt\n");
    printf("Harga                  : Rp 40.000\n\n");

    printf("Kode Barang            : 9\n");
    printf("Nama Barang            : Pocket Tee\n");
    printf("Harga                  : Rp 50.000\n\n");

    printf("Kode Barang            : 10\n");
    printf("Nama Barang            : Kaos Raglen\n");
    printf("Harga                  : Rp 38.000\n\n");

}

//function untuk kembalian
int kembalian(int tb,int uangmu) 
{
    int kembali;
    kembali = uangmu-tb;

    return kembali;
}
