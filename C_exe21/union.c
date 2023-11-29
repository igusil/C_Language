#include <stdio.h>
#include <string.h>

union st {
   unsigned char id;
   //unsigned char id2;
   //unsigned char id3;
   unsigned int num;
};

int main(void) {
   union st s;  
  //s.id = 3;
   s.num = 2017;
   s.id = 0x30;
   //s.id[2] = 0x90;
   printf("s.num: %d\n", s.num);

   memset(&s, 1, sizeof(union st));
   printf("s.num: %d\n", s.num);
   printf("s.id: %d\n", s.id);

   printf("sizeof(union st): %zu\n", sizeof(union st));

   return(0);
}

