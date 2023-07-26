      #include <stdio.h>
      #include <limits.h>
      #include <stdint.h>
      #include <stdlib.h>
      
  8   int a;
  9   a = 10;
 10   a++;
 11   printf("int");
 12   printf("%d\n", a);
 13   a--;
 14   printf("%d\n", a);
 15   a = 10;
 16   printf("%d\n", a * 9);
 17   a = 10 / 3;
 18   printf("%d\n", a);
 19   a += 1;
 20   printf("%d\n", a);
 21 
 22   a *= 8;
 23   printf("%d\n", a);
 24 
 25   a = 10 % 2;
 26   printf("%d\n", a);
 27 
 28   a = 4 + 2 * 3;
 29   printf("%d\n", a);
 30 
 31   a = (4 + 2) * 3;
 32   printf("%d\n", a);
 33 
 34   a = (4 + 2) * 3;
 35   printf("%d\n", a++);
 36 
 37   a = (4 + 2) * 3;
 38   printf("%d\n", ++a);
 39 
 40   a = (4 + 2) * -3;
 41   printf("%d\n", a);
 42 
 43   printf("float");
 44   float b;
 45   b = 10 / 3.0F;
 46   printf("%f\n", b);
 47 
 48 
 49   return 0;
 50 }
