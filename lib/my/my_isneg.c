#include <unistd.h>

void my_putchar(int);
void my_isneg(int n) {

    if (n < 0) {
        my_putchar('N');
    } else if (n >= 0) {
        my_putchar('P');
    }
}
