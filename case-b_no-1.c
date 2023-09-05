#include <stdio.h>

// Mohamad El Abror - 2702350762

void main() {

	int jarak;
	
	printf("Masukan sebuah satuan panjang/jarak dalam satuan KiloMeter: ");
	
	scanf("%d", &jarak);
	
	printf("%d KiloMeter dalam satuan Meter adalah %d M", jarak, jarak * 1000);
	
	getch();
	
	printf("\n%d KiloMeter dalam satuan CentiMeter adalah %d CM\n", jarak, jarak * 1000000);
}
