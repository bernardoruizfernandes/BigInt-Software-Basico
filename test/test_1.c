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

	long num = 0;
	long num2 = 10000000000000;
	BigInt numb_1, numb_2;
	BigInt numb_c1, numb_c2;
	BigInt numb_sm12, numb_sm22;
	BigInt numb_sb12, numb_sb22;
	BigInt numb_sl1, numb_slm2;
	BigInt numb_sr1, numb_srm2;
	BigInt numb_sa1, numb_sam2;
	BigInt numb_m1, numb_m2, numb_m15;


/* ======= fazendo os bigints ======= */
	big_val(numb_1, num);
	big_val(numb_2, num2);

	/* prints */
	
	printf("\n\nBigInt 1 _________________________\n");
	big_print2(numb_1);

	printf("\n\nBigInt 2 _________________________\n");
	big_print2(numb_2);

	
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

/* ======= fazendo as multiplicacoes ======= */

	big_mul(numb_m1, numb_1, numb_2);
	big_mul(numb_m15, numb_2, numb_2);
	big_mul(numb_m2, numb_m15, numb_m15);




	/* prints */
	
	printf("\n\nMultiplicacao (1)(2) _________________________\n");
	big_print2(numb_m1);

	printf("\n\nMultiplicacao (2)(2) _________________________\n");
	big_print2(numb_m2);


	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-= Left Shift -=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

/* ======= comparacao dos bigints ======= */
	big_comp2(numb_c1, numb_1);
	big_comp2(numb_c2, numb_m2);

	/* prints */
	printf("\n\ninverte a2 (1) _________________________\n");
	big_print2(numb_c1);

	printf("\n\ninverte a2 (2) _________________________\n");
	big_print2(numb_c2);
	
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

/* ======= somando bigints ======= */
	big_sum(numb_sm12, numb_1, numb_m2);
	big_sum(numb_sm22, numb_m2, numb_m2);
	
	/* prints */

	printf("\n\nSoma (1)(2) _________________________\n");
	big_print2(numb_sm12);

	printf("\n\nSoma (2)(2) _________________________\n");
	big_print2(numb_sm22);


	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


/* ======= subtraindo bigints ======= */
	big_sub(numb_sb12, numb_m2, numb_1);
	big_sub(numb_sb22, numb_m2, numb_m2);
	
	/* prints */

	printf("\n\nSbtracao (1)(2) _________________________\n");
	big_print2(numb_sb12);

	printf("\n\nSubtracao (2)(2) _________________________\n");
	big_print2(numb_sb22);

	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


/* ======= fazendo as multiplicacoes ======= */

	big_mul(numb_m1, numb_1, numb_m2);



	/* prints */
	
	printf("\n\nMultiplicacao (1)(2) _________________________\n");
	big_print2(numb_m1);

	


	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-= Left Shift -=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


/* ======= shift =======*/
	big_shl(numb_sl1,numb_m2, 10);



	/* prints */

	printf("\n\nLeft Shift (1)(10) _________________________\n");
	big_print2(numb_sl1);




printf("\n=-=-=-=-=-=-=-=-=-=-= Right Logical Shift -=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
/*======= Right Logical Shift =======*/

	big_shr(numb_sr1,numb_1, 10);
	big_shr(numb_srm2,numb_m2, 50);

	/* prints */

	printf("\n\nRight Logical Shift (10) _________________________\n"); 
	big_print2(numb_sr1);

	printf("\n\nRight Logical Shift (5) _________________________\n");
	big_print2(numb_srm2);




printf("\n=-=-=-=-=-=-=-=-=-= Right Arithmetic Shift -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
/*======= Right Arithmetic Shift =======*/

	big_sar(numb_sa1,numb_1, 10);
	big_sar(numb_sam2,numb_m2, 5);


	/* prints */

	printf("\n\nRight Arithmetic Shift (10) _________________________\n");
	big_print2(numb_sa1);

	printf("\n\nRight Arithmetic Shift (5) _________________________\n");
	big_print2(numb_sam2);



	return 0;
}
