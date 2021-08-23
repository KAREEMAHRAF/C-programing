#include <stdio.h>
/* Set bit number*/
typedef unsigned short uint16;

uint16 set_bit(uint16 num, uint16 bit_number);
int main() {
	uint16 num,bit, new_num;
	scanf("%hi",&num);
	scanf("%hi",&bit);
	uint16 set_single_bit = set_bit(num, bit);
	printf("value after set 0x%x\n",set_single_bit);
}

uint16 set_bit(uint16 num, uint16 bit_number){
	uint16 x = num | (1<<bit_number);
	return x;
}
