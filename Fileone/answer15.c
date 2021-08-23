#include <stdio.h>
/* revese number 0x12345678 to 0x78563412 */
unsigned char reverse_bin_number(unsigned char );

int main() {
    unsigned char number;
	scanf("%x",&number);
	number = reverse_bin_number(number);
	printf("0x%x\n",number);			
}
unsigned char reverse_bin_number(unsigned char new_num){
	unsigned char number;
	for(char i = 0; i < 8; i++)
		number |= (((new_num>> (7-i)) & 1)<< i);			 
	return number;	 
}

