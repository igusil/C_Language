  1 #include <stdio.h>
  2 #include <stdbool.h>
  3 #include <stdlib.h>
  4 #include <stdint.h>
  5 #include <limits.h>
  6 
  7 int main (void) {
  8   int a[] = { 2017, 2018, 2019};
  9 
 10   for ( int i = 0; i < 3 ; i++) {
 11     printf("%d\n", *(a+i)); //apontar para endereço de memoria *a
 12   }
 13 
 14   printf(" o endereço de a em memoria eh: %p\n", a);
 15 
 16   return 0;
 17 }
/*****************************************************************
  8   int i = 2017;
  9   int *p;
 10 
 11   p = &i;
 12 
 13   printf("O endereço da variavel i em memoria eh: %p\n", p);
 14   printf("O endereço da variavel i em memoria eh: %p\n", &i);
 15   printf("O valor de i em decimal eh: %d\n", i);
 16 
/******************************************************************
  8   int a[2];
  9   a[0] = 2022;
 10   a[1] = 2023;
 11 
 12   printf("a[0]: %d\n a[1]: %d\n",*a, *a+1);
 13 
*/
//****************************************************************
/*
 int main (void) {
  8 
  9   char s[] = "igor";
 10   char *t = "igor";
 11 
 12   puts(s);
 13   puts(t);
 14 
 15   return 0;
 16 }
*/
//****************************************************************
/*
  7 int main (void) {
  8   int a[2];
  9   a[0] = 2022;
 10   a[1] = 2023;
 11 
 12   printf("a[0]: %d\n, a[1]: %d\n", *a, *(a+1));
 13 
 14   char s[] = "igor";
 15   char *t = "igor";
 16   char u[] = { 0x69, 0x67, 0x6F, 0x72, 0x00 };
 17 
 18   puts(s);
 19   puts(t);
 20   puts(u);
 21 
 22   return 0;
 23 }
*/