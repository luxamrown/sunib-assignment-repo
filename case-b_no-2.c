#include <stdio.h>

// Mohamad El Abror - 2702350762

void main() {
	
	int total_belanja = 0;
	int total_akhir_belanja = 0;
	int nilai_belanja;
	int total_transaksi = 0;
	int diskon_total = 0;
	int diskon_transaksi = 0;
	char belanjaLagi = 89;
	
	puts("---------------------------------------");
	
	puts("PROGRAM UNTUK MENGHITUNG DISKON BELANJA");
	
	puts("---------------------------------------");
	

	while(belanjaLagi == 89 || belanjaLagi == 121){
		
		printf("Masukkan nilai total belanja (rupiah): ");
		
		scanf("%d", &nilai_belanja);
		
		total_belanja = total_belanja + nilai_belanja;
		
		fflush(stdin);
		
		printf("Belanja lagi (Y/N) ");
		
		scanf("%c", &belanjaLagi);
		
		total_transaksi = total_transaksi + 1;

	}
	
	
	if(total_belanja > 200000 && total_belanja <= 500000){
		
		diskon_total = 0.1 * total_belanja;
		
	} else if(total_belanja > 550000 && total_belanja <= 1000000){
		
		diskon_total = 0.2 * total_belanja;
		
	} else if(total_belanja > 1000000){
		
		diskon_total = 0.3 * total_belanja;
		
	}
	
	total_akhir_belanja = total_belanja - diskon_total;
	
	if(total_transaksi >= 4){
		
		diskon_transaksi = 0.2 * total_akhir_belanja;
		
	}
	
	
	printf("\nHarga akhir: Rp. %d\n\n", total_akhir_belanja - diskon_transaksi);
	
	puts("-----------------------------------------------------------");
	
	puts("Rekap Transaksi");
	
	printf("Total belanja: Rp. %d\n", total_belanja);
	
	printf("Diskon dari total belanja: Rp. %d\n", diskon_total);
	
	printf("Diskon dari jumlah transaksi: Rp. %d\n", diskon_transaksi);
	
	puts("------------------------------------------------------------------");

	

}
