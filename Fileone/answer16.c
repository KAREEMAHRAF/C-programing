#include <stdio.h>
/* read total number of Zeros */
typedef unsigned short uint16;

uint16 read_bit(uint16 num, uint16 bit_number);

int main() {
    unsigned long number, counter = 0;
	scanf("%d",&number);
	for(char i = 0; i < 32; i++){
		counter += read_bit(number,i);
	}
	printf("total num of Zeros = %d", 32 - counter);
}
uint16 read_bit(uint16 num, uint16 bit_number){
	uint16 x = (num>>bit_number)&1;
	return x;
}

