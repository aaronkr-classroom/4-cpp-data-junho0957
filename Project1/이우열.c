#include <stdio.h>
int main() {

	int money = 500000;
	int month = 36;
	int year = 0;
	int bank = 0;
	for (int i = 0; i < month; i++) {
		
		bank = bank + money;

		if (i % 12 == 0) {
			bank += bank * 0.05;
		}
		year++;
	}
	printf("3년후 저축액은 : %d 입니다.\n", bank);



}