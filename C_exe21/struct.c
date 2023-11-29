#include <stdio.h>
#include <string.h>

struct st {
   unsigned char id[5];
   //unsigned char id2;
   //unsigned char id3;
   unsigned int num;
};

int main(void) {
   struct st s;
  
  //s.id = 3;
   s.num = 2017;
   s.id[3] = 0x41;
   s.id[2] = 0x90;

  //memset(&s, 0, sizeof(struct st));

   printf("s.num: %d\n", s.num);
   memset(&s, 0, sizeof(struct st));
   printf("s.num: %d\n", s.num);
   
   printf("sizeof(struct st): %zu\n", sizeof(struct st));

   return(0);
}

