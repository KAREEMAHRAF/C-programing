#include <stdio.h>
/*Function that take an array, its size and int* 
size of the new array, then remove the repeated
 value and return an array with no repeated values
*/
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef unsigned int uint32;

void main(){
	
 uint32 arr[] = {9,7,3,9,3,2,2,3,9};
 uint8 num_of_elements_inarr = sizeof(arr) / sizeof(uint32);
 uint32 new_arr[10] = {0};
 uint8 new_size = 1;
 
 new_arr[0] = arr[0];
 for(uint8 i = 1; i < num_of_elements_inarr; i++){
	 uint8 flag =0;
	 for(uint8 j = 0; j < new_size; j++){		
		 if(new_arr[j] == arr[i]){
			 flag = 1;
			 break;
		 }	 
	 }
	 if(flag == 0) new_arr[new_size++] = arr[i];
	
 }
 
 for(uint32 i = 0; i < new_size; i++){	 
	 printf("%d ", new_arr[i]);
 }
 
}