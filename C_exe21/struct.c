#include <stdio.h>

struct st {
    unsigned char id;
    unsigned int num;
};

int main(void) {
    struct st s[10];

    s[0].id = 3;
    s[0].num = 2017;

    printf("s[0].id: %d\n", s[0].id);
    printf("s[0].num: %d\n", s[0].num);

    return(0);
}