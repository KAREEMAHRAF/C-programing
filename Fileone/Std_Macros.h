
#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#include <stdio.h>



#define  SET_BIT(PORT,PIN) (PORT |= (1<<PIN))
#define  CLE_BIT(PORT,PIN) (PORT &= ~ (1<<PIN))
#define  TOG_BIT(PORT,PIN) (PORT ^= (1<<PIN))
#define  READ_BIT(PORT,PIN)((PORT>>PIN) &1 )

typedef unsigned long uint32;
typedef unsigned char uint8;
typedef unsigned short uint16;




#endif /* STD_MACROS_H_ */