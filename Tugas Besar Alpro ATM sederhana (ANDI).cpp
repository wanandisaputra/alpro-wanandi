#include <stdio.h>
#include <stdlib.h>

void banner()
{
    int pilih;
    printf("	  +--------------------------------------------+\n");
    printf("	  |               SELAMAT DATANG      	       |\n");
    printf("	  |                     DI          	       |\n");
    printf("	  |                  ATM WAN        	       |\n");
    printf("	  +--------------------------------------------+\n\n\n");
}

int main()
{
    int saldo = 100000000, pin, rekening, keluar, transfer, rekeningTuju, setor, nominal, pilih;
    system("cls");
    banner();
    printf("\n");
pin:
    printf("Silahkan Masukan Pin : ");
    scanf("%d", &pin);
    if (pin == 230703)
    {
    menu:
        system("cls");
        printf("Menu,\n");
        printf("  1. Tarik Tunai\n");
        printf("  2. Transfer\n");
        printf("  3. Isi Saldo\n");
        printf("  4. Cek Saldo\n");
        printf("  5. Top Up\n");
        printf("Pilih : ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1://tarik tunai
            system("cls");
        case1:
            printf("Pilih nominal yang ingin anda ambil,\n");
            printf("  1. 50000\n");
            printf("  2. 100000\n");
            printf("  3. 250000\n");
            printf("  4. Nominal Lain\n");
            printf("Pilih : ");
            scanf("%d", &nominal);
            if (nominal == 1)
                keluar = 50000;
            else if (nominal == 2)
                keluar = 100000;
            else if (nominal == 3)
                keluar = 150000;
            else if (nominal == 4)
            {
                system("cls");
            inputKeluar:
                printf("Masukan nominal yang ingin anda ambil (kelipatan 50000),\n");
                scanf("%d", &keluar);
                if (keluar % 50000 != 0)
                {
                    system("cls");
                    printf("Nominal yang anda masukan bukan kelipatan 50000\n\n");
                    goto inputKeluar;
                }
            }
            else
            {
                system("cls");
                printf("Pilihan salah\nSilahkan Pilih kembali\n\n");
                goto case1;
            }
            if (keluar > saldo)
            {
                system("cls");
                printf("Transaksi Gagal\n");
                printf("Saldo anda tidak mencukupi\n\n");
                goto konfirmasi;
            }
            else
            {
                system("cls");
                printf("Transaksi Berhasil!\n");
                saldo = saldo - keluar;
                printf("Sisa saldo anda,\n%d\n\n", saldo);
                goto konfirmasi;
            }
            break;
        case 2: //transfer
            system("cls");
            printf("Masukan nomor rekening yang anda tuju,\n");
            scanf("%d", &rekeningTuju);
            printf("Masukan nominal yang ingin anda transfer,\n");
            scanf("%d", &transfer);
            if (transfer > saldo)
            {
                system("cls");
                printf("Transaksi Gagal\n");
                printf("Saldo anda tidak mencukupi\n\n");
                goto konfirmasi;
            }
            else
            {
                system("cls");
                printf("Transaksi Berhasil!\n");
                saldo = saldo - transfer;
                printf("Sisa saldo anda,\n%d\n\n", saldo);
                goto konfirmasi;
            }
            break;
        case 3://isi saldo
            system("cls");
            printf("Uang yang anda masukan harus rapih,\nDan merupakan kelipatan 50000\n\n");
        inputSetor:
            printf("Masukan nominal yang ingin anda setor,\n");
            scanf("%d", &setor);
            if (setor % 50000 != 0)
            {
                system("cls");
                printf("Nominal yang anda masukan bukan kelipatan 50000\n\n");
                goto inputSetor;
            }
            system("cls");
            printf("Transaksi Berhasil!\n");
            saldo = saldo + setor;
            printf("Total saldo anda menjadi,\n%d\n\n", saldo);
            goto konfirmasi;
            break;
        case 4://cek saldo
            system("cls");
            printf("Saldo anda adalah,\n%d\n\n", saldo);
            goto konfirmasi;
            break;
        case 5://top up
			system("cls");
			printf("Top Up:\n\n");
			printf("  1.Dana\n\n");
			printf("  2.Gopay\n\n");
			printf("  3.Pin\n\n");
			printf("Pilih : ");
            scanf("%d", &nominal); 
            {
                system("cls");
                printf("Masukkan Nominal:\n\n");
                scanf("%d", &nominal);
            }
            system("cls");
            printf("Top Up Berhasil!\n\n\n");
            saldo = saldo + setor;
            goto konfirmasi;
            break;
        default:
            system("cls");
            printf("Pilihan Menu Salah,\nSilahkan Pilih Kembali\n\n");
            goto menu;
        }
    }
    else
    {
        system("cls");
        printf("Pin Salah\n\n");
        goto pin;
    }
konfirmasi:
    printf("Apakah anda ingin melakukan transaksi lain ?\n");
    printf("  1. Ya\n");
    printf("  2. Tidak\n");
    printf("Pilih : ");
    scanf("%d", &pilih);
    if (pilih == 1)
        goto menu;
    else if (pilih == 2)
        goto end;
    else
    {
        system("cls");
        printf("Pilihan Salah\nSilahkan pilih kembali\n\n");
        goto konfirmasi;
    }
end:
    system("cls");
    printf("	===========Terimakasih Telah Bertransaksi===========\n");
	printf("	=================== Di ATM WAN =====================\n\n");
    printf("              Tugas ATM sederhana Menggunakan Bahasa C\n");
    printf("				  D\n");
    printf("				  I\n");
    printf("				  S\n");
    printf("				  U\n");
    printf("				  S\n");
    printf("				  U\n");
    printf("				  N\n\n");
    printf("				 OLEH:\n");
    printf("		    Nama :WAN ANDI SYAPUTRA \n");
    printf("		    Nim  :12150510269\n");
    printf("		    Kelas:4.A\n");
    printf("	=====================================================\n\n\n\n\n\n\n\n\n\n");
    
    return 0;
}
