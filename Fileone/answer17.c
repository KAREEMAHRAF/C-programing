#include <stdio.h>
/* calculate the number of consecutive zeros between two ones 
   e.g: 0b11000110100111000001  the result will be 5
*/
int main() {
    unsigned long number = 0b11000110100111000001, max = 0;
	//scanf("%x",&number);
	unsigned char counter;
	while( number != 0 ){
		if( number & 1 == 1 ){
			number = number >> 1;
			counter = 0;
			while((number != 0) && ( (number & 1) != 1)){
				counter++;
				number = number >> 1;
			}
			if(counter > max) max = counter;
		}
		else{
			number = number >> 1;
		}
	}
	printf("%d",max);
}