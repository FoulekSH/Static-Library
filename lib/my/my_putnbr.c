#include <unistd.h>

void my_putchar(int);
void    my_putnbr(int nb)
{
  int   x;

   x = 0;
  if (nb <= 9 && nb >= 0)
    my_putchar(nb + '0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (- 1);
      if (nb <= 9 && nb >=0)
        my_putnbr(nb);
    }
  if (nb > 9)
    {
      x = nb % 10;
      my_putnbr(nb / 10);
      my_putchar(x + '0');
    }
}