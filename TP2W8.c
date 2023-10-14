#include <stdio.h>
#include <string.h>

char bulan[][50] = {"januari" ,"februari", "maret", "april", "mei", "juni", "juli", "agustus", "september", "oktober", "november", "desember"};

char hurufVokal[5] = {'a', 'i', 'u', 'e', 'o'};

char monthResult[][50] = {};

char selectedMonth[50];

int selectedIndexMonth;

char nonVokalList[50];

int jumlahVokal;

int jumlahNonVokal;

char input_char;

int i, j, k, l, m;


int bgst;

int detectVocalFromChar(char chara){
	int ij;
	
	int status = 0;
	
	for(ij = 0; ij < strlen(hurufVokal); ij++){
		if(chara == hurufVokal[ij]){
			status = 1;
			break;
		}
	}
	
	return status;

}


void main () {
	printf("Masukan huruf awal untuk mencari bulan: ");
	scanf("%c", &input_char);

	for(i = 0; i < 12; i++){
		if(bulan[i][0] == input_char){
			strcpy(monthResult[j], bulan[i]);
			
			j++;
		}
	}
	
	if(j > 0) {
		printf("Bulan ditemukan: \n");
		
		for(k = 0; k < j; k++){
			printf("%d. %s\n", k + 1,monthResult[k]);
		}
		
		printf("Masukan nomor bulan yang dipilih: ");
		
		scanf("%d", &selectedIndexMonth);
		
		strcpy(selectedMonth, monthResult[selectedIndexMonth - 1]);

		char temporary;
		for(l=0; l < strlen(selectedMonth); l++){
			for(m=0; m <strlen(hurufVokal); m++){
				if(selectedMonth[l] == hurufVokal[m]){
					jumlahVokal++;
					
					break;
				} else {
					if(detectVocalFromChar(selectedMonth[l]) != 1) {
							
						if(temporary != selectedMonth[l]){
							nonVokalList[jumlahNonVokal] = temporary;
							
							jumlahNonVokal++;
						}
						
						temporary = selectedMonth[l];
						
						break;
					}
				}
			}
		}
		
		printf("Jumlah huruf vokal ada %d\nJumlah huruf non vokal ada %d\n", jumlahVokal, jumlahNonVokal);
		
	} else {
		 printf("Bulan tidak ditemukan\n");
	}


}


