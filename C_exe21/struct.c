#include <stdio.h>

struct st {
   unsigned char id;
   unsigned char id2;
   unsigned char id3;
   unsigned int num;
};

int main(void) {
   struct st s;
  
  // s.id = 3;
   s.num = 2017;
   s.id[3] = 0x41;
   s.id[2] = 0x90;

  

   printf("s.id: %d\n", s.id);
   printf("s.num: %d\n", s.num);
   
   printf("sizeof(struct st): %d\n", sizeof(struct st));

   return(0);
}

