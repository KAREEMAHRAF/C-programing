#include <stdio.h>
typedef unsigned long uint32;
typedef unsigned char uint8;

/* convert any lower char to upper */
void strlwr_to_upper(char *);
int main() {
	char a[20];
	scanf("%[^\n]",a);	
	printf("a = %s \n", a);
	strlwr_to_upper(a);
	printf("a = %s ", a);
	
}
void strlwr_to_upper(char *a ){
	for(uint8 i = 0; a[i] != '\0'; i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] -= 32;
		}
	}
}
