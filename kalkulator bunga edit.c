#include <stdio.h>
#include <math.h>
int main()
{
	int pilihbunga, pilihvariabel, menuawal, pengulang=1, pangkat, satu=1, a=0;
	float saldoawal,saldoakhir,masa,sukubunga, hasilpangkat=1,angka;
	
	do{//ulang menu utama   
	//menu awal
	do //biar klo inputan invalid tetep looping di menu itu
	{
		system("cls");
		printf("=====================\n");
		printf("KALKULATOR BUNGA UANG\n");
		printf("=====================\n");
		printf("-Oleh Dandy & Robby-\n");
		printf("---------------------\n\n");
		printf("\n*********************************\nSilahkan pilih opsi untuk memulai\n*********************************\n\n");
		printf("Opsi:\n[1]Mulai\n[2]Bantuan\nPilihan Anda: ");
		scanf("%d",&menuawal);
		//kalo input invalid dr menu awal
		if(menuawal>2 || menuawal<1)
		{
			printf("Input tidak valid.\n\n");
			getch();
		}
	}	
	while (menuawal>2 || menuawal<1); //biar klo inputan invalid tetep looping di menu itu
	
	
	//mulai kalkulator
	if (menuawal==1)
	{
		do //biar bisa ngulang terus
		{
			system("cls");
			printf("=====================\n");
			printf("KALKULATOR BUNGA UANG\n");
			printf("=====================\n");
			printf("-Oleh Dandy & Robby-\n");
			printf("---------------------\n\n");
			
			//pilih bunga
			do
			{
				printf("\nPilih jenis bunga yang akan digunakan:\n[1]Bunga tunggal\n[2]Bunga majemuk\nPilihan anda: ");
				scanf("%d",&pilihbunga);
				// kalo input invalid dr pilih bunga
				if (pilihbunga>2 || pilihbunga<1)
				{
					printf("Input tidak valid.\n");
					getch();
					system("cls");
					printf("=====================\n");
					printf("KALKULATOR BUNGA UANG\n");
					printf("=====================\n");
					printf("-Oleh Dandy & Robby-\n");
					printf("---------------------\n\n");
				}
			}
			while (pilihbunga>2 || pilihbunga<1); //biar klo inputan invalid tetep looping di menu itu
			
			//bunga tunggal
			if (pilihbunga==1)
			{
				system("cls");
				printf("=====================\n");
				printf("KALKULATOR BUNGA UANG\n");
				printf("=====================\n");
				printf("-Oleh Dandy & Robby-\n");
				printf("---------------------\n\n");
				
				//hasil pilihan bunga
				printf("\nAnda memilih bunga tunggal\n");
				
				//pilih variabel bunga tunggal
				do
				{
					printf("\nPilih variabel yang akan dicari:\n[1]Saldo akhir\n[2]Saldo awal\n[3]Masa pinjam/simpan\n[4]Suku bunga\nPilihan Anda: ");
					scanf("%d",&pilihvariabel);
					//kalo input invalid dr pilih variabel bunga tunggal
					if(pilihvariabel>4 || pilihvariabel<1)
					{
						printf("Input tidak valid.\n");
					getch();
					system("cls");
					printf("=====================\n");
					printf("KALKULATOR BUNGA UANG\n");
					printf("=====================\n");
					printf("-Oleh Dandy & Robby-\n");
					printf("---------------------\n\n");
					}
				}
				while(pilihvariabel>4 || pilihvariabel<1); //biar klo inputan invalid tetep looping di menu itu
				
				//hasil pilihan variabel bunga tunggal
				switch(pilihvariabel)
				{
					case 1://saldo akhir bunga tunggal
						system("cls"); 
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda meilih bunga tunggal\nAnda memilih saldo akhir\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						saldoakhir=saldoawal+saldoawal*masa*sukubunga; //ini udh bener
						printf("Saldo akhir Anda adalah %f",saldoakhir);
						break;
						
					case 2://saldo awal bunga tunggal
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda meilih bunga tunggal\nAnda memilih saldo awal\n");
						printf("\nMasukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						saldoawal=saldoakhir/(satu+masa*sukubunga); //ini udh bener
						printf("Saldo awal Anda adalah %f",saldoawal);
						break;
						
					case 3://masa pinjam/simpan bunga tunggal
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda meilih bunga tunggal\nAnda memilih masa pinjam/simpan\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						masa=saldoakhir/(saldoawal*sukubunga)-satu/sukubunga; //ini udh bener
						printf("Masa pinjam/simpan Anda adalah %f",masa);
						break;
						
					case 4://suku bunga bunga tunggal
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda meilih bunga tunggal\nAnda memilih suku bunga\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						//disini bwt rumus
						sukubunga=saldoakhir/(saldoawal*masa)-satu/masa; //ini udh bener
						printf("Suku bunga bank adalah %f",sukubunga);
						break;
						
				} //nutup switch variabel
			} //nutup if bunga tunggal
			
			//bunga majemuk
			else if(pilihbunga==2)
			{
				//hasil pilihan bunga
				system("cls");
				printf("=====================\n");
				printf("KALKULATOR BUNGA UANG\n");
				printf("=====================\n");
				printf("-Oleh Dandy & Robby-\n");
				printf("---------------------\n\n");
				printf("\nAnda memilih bunga majemuk\n");
				
				//pilih variabel bunga majemuk
				do
				{
					printf("\nPilih variabel yang akan dicari:\n[1]Saldo akhir\n[2]Saldo awal\n[3]Masa pinjam/simpan\n[4]Suku bunga\nPilihan Anda: ");
					scanf("%d",&pilihvariabel);
					//kalo input invalid dr pilih variabel bunga majemuk
					if(pilihvariabel>4 || pilihvariabel<1)
					{
						printf("Input tidak valid.\n");
						getch();
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
					}
				}
				while (pilihvariabel>4 || pilihvariabel<1); //biar klo inputan invalid tetep looping di menu itu
				
				//hasil pilihan variabel
				switch(pilihvariabel)
				{
					case 1://saldo akhir bunga majemuk
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda memilih bunga majemuk\nAnda memilih saldo akhir\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						//for(angka=1+sukubunga;pangkat<masa;pangkat++)
						//{
						//	hasilpangkat=hasilpangkat*angka;
						//}
						//saldoakhir=saldoawal*hasilpangkat;
						saldoakhir=saldoawal*pow(sukubunga+1,masa); //sebenernya bisa juga pake ini, tapi baru tau pas programnya udh mau selesai
						printf("Saldo akhir Anda adalah %f",saldoakhir);
						break;
						
					case 2://saldo awal bunga majemuk
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda memilih bunga majemuk\nAnda memilih saldo awal\n");
						printf("\nMasukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						//for(angka=1+sukubunga;pangkat<masa;pangkat++)
						//{
						//	hasilpangkat=hasilpangkat*angka;
						//}
						//saldoawal=saldoakhir/hasilpangkat;
						saldoawal=saldoakhir/pow(sukubunga+1,masa); //sebenernya bisa juga pake ini,tapi baru tau pas programnya udh mau selesai
						printf("Saldo awal Anda adalah %f",saldoawal);
						break;
						
					case 3://masa pinjam/simpan bunga majemuk
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda memilih bunga majemuk\nAnda memilih masa pinjam/simpan\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai suku bunga: ");
						scanf("%f",&sukubunga);
						//disini bwt rumus
						masa=.08;
						while (pow(sukubunga+satu,masa)!=saldoakhir/saldoawal)
						{
							masa=masa+.01;
						}//ini pake logika logaritma //rumus gabisa execute, gatau kenapa 
						printf("Masa pinjam/simpan Anda adalah %f",masa);
						break;
						
					case 4://suku bunga bunga majemuk
						system("cls");
						printf("=====================\n");
						printf("KALKULATOR BUNGA UANG\n");
						printf("=====================\n");
						printf("-Oleh Dandy & Robby-\n");
						printf("---------------------\n\n");
						printf("Anda memilih bunga majemuk\nAnda memilih suku bunga\n");
						printf("\nMasukkan nilai saldo awal: ");
						scanf("%f",&saldoawal);
						printf("Masukkan nilai saldo akhir: ");
						scanf("%f",&saldoakhir);
						printf("Masukkan nilai masa pinjam/simpan: ");
						scanf("%f",&masa);
						//disini bwt rumus
						sukubunga=pow(saldoakhir/saldoawal,satu/masa)-1; //ini pake logika akar pangkat
						printf("Suku bunga bank adalah %f",sukubunga);
									
				} //nutup switch variabel
			} //nutup else if bunga majemuk
			
			//kalo mau ngitung lagi
			do
			{
				printf("\n\nAda yang ingin dihitung lagi?\n[1]Ya\n[2]Tidak\nPilihan Anda:");
				scanf("%d",&pengulang);
				
				if(pengulang>2 || pengulang<1)
				{
					printf("Input tidak valid.\n");
					getch();
					system("cls");
					printf("=====================\n");
					printf("KALKULATOR BUNGA UANG\n");
					printf("=====================\n");
					printf("-Oleh Dandy & Robby-\n");
					printf("---------------------\n\n");
				}
				if(pengulang==2)
				{
					//butuh tambahan
					system("cls");
					printf("=====================\n");
					printf("KALKULATOR BUNGA UANG\n");
					printf("=====================\n");
					printf("-Oleh Dandy & Robby-\n");
					printf("---------------------\n\n");
					printf("\n*******************************************\nTerima kasih sudah menggunakan program kami\n*******************************************\n\n");
					return 0;
				}
			}
			while (pengulang>2 || pengulang<1);
			system("cls");
			printf("=====================\n");
			printf("KALKULATOR BUNGA UANG\n");
			printf("=====================\n");
			printf("-Oleh Dandy & Robby-\n");
			printf("---------------------\n\n");
		} //nutup do while-nya biar bisa ngulang terus
		while (pengulang==1); //buat kalo mau ngulang
	} //nutup if kalkulator
	
	//bantuan
	else if(menuawal==2)
	{
		system("cls");
		printf("=====================\n");
		printf("KALKULATOR BUNGA UANG\n");
		printf("=====================\n");
		printf("-Oleh Dandy & Robby-\n");
		printf("---------------------\n\n");
		printf("****************");
		printf("\nKalkulator Bunga\n");
		printf("****************\n\n");
		printf("\n[Bunga tunggal] \n=>Adalah bunga yang diperoleh pada setiap akhir jangka waktu tertentu\nyang tidak mempengaruhi besarnya modal yang dipinjam.\n");
		printf("\n[Bunga majemuk] \n=>Adalah bunga yang sudah dihasilkan ditambahkan ke uang pokok pada akhir tiap-tiap periode pembayaran bunga\ndan kemudian ikut dipakai sebagai dasar untuk menentukan besarnya bunga pada periode berikutnya.");
		printf("\n\n==>[Panduan Penggunan]<==");
		printf("\n\n(+) Nilai dapat diinput dalam bentuk desimal");
		printf("\n(+) Masukkan nilai tanpa menggunakan tanda titik atau koma sebagai pemisah digit seperti misalnya ribuan");
		printf("\n(+) Tanda titik gunakan untuk menyatakan angka di belakang koma, misal 1,25 => 1.25");
		printf("\n(+) Masukkan nilai masa pinjam/simpan dalam satuan tahun");
		printf("\n(+) Masukkan nilai suku bunga bank dalam satuan pertahun");
		printf("\n(+) Masukkan nilai suku bunga bank dalam bentuk desimal");
		getch();
		system("cls");
		printf("=====================\n");
		printf("KALKULATOR BUNGA UANG\n");
		printf("=====================\n");
		printf("-Oleh Dandy & Robby-\n");
		printf("---------------------\n\n");
	}
} while(a==0);
	
	return 0;
}
//catetan header judul di copas di tiap abis cls
/*
special thanks to: 
1. Tuhan YME
2. M Rifqi 
3. Cakti F
3. Dzikrul IK
*/
