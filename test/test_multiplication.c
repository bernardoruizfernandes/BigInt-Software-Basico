#include <stdio.h>
#include "bigint.h"


void big_print2(BigInt res){
	
	int n = 16;

	while(n--)
		printf("%02x", res[n]);

	printf("\n");
	return;
}


int main (void){

	long num = 1000000;
	long num2 = 3;
	long num3 = 5000;
	BigInt numb_1, numb_2, numb_3;
	BigInt numb_mul11, numb_mul12, numb_mul13;
	BigInt numb_mul22, numb_mul23;
	BigInt numb_mul33;


/* ======= fazendo os bigints ======= */
	big_val(numb_1, num);
	big_val(numb_2, num2);
	big_val(numb_3, num3);


	big_mul(numb_mul11, numb_1, numb_1);
	big_mul(numb_mul12, numb_1, numb_2);
	big_mul(numb_mul13, numb_1, numb_3);

	big_mul(numb_mul22, numb_2, numb_2);
	big_mul(numb_mul23, numb_2, numb_3);

	big_mul(numb_mul33, numb_3, numb_3);
	

	/* prints */
	
	printf("\n\n_______ 1 * 1 ___________________________\n");
	big_print2(numb_1);
	big_print2(numb_mul11);

	printf("\n\n_______ 1 * 2 ___________________________\n");
	big_print2(numb_1);
	big_print2(numb_2);
	big_print2(numb_mul12);

	printf("\n\n_______ 1 * 3 ___________________________\n");
	big_print2(numb_1);
	big_print2(numb_3);
	big_print2(numb_mul13);




	printf("\n\n_______ 2 * 2 ___________________________\n");
	big_print2(numb_2);
	big_print2(numb_mul22);

	printf("\n\n_______ 2 * 3 ___________________________\n");
	big_print2(numb_2);
	big_print2(numb_3);
	big_print2(numb_mul23);




	printf("\n\n_______ 3 * 3 ___________________________\n");
	big_print2(numb_3);
	big_print2(numb_mul33);

	
	return 0;
}
