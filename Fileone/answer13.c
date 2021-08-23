#include <stdio.h>
/* Toggle bit number*/
typedef unsigned short uint16;

uint16 Toggle_bit(uint16 num, uint16 bit_number);
int main() {
	uint16 num,bit, new_num;
	scanf("%hi",&num);
	scanf("%hi",&bit);
	uint16 Toggle_single_bit = Toggle_bit(num, bit);
	printf("value after Toggle  0x%x\n",Toggle_single_bit);
}

uint16 Toggle_bit(uint16 num, uint16 bit_number){
	uint16 x = num ^ (1<<bit_number);
	return x;
}
