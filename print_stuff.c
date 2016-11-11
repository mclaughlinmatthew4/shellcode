#include <stdio.h>

int main ()
{

printf("Color %s, number1 %d, number2 %05d, hex %x, float %5.2f, unsigned value %u.\n",
       "red", 123456, 89, 255, 3.14159, 250);

}

/*
root@JDEBETTENWS2016:/home/jdebette# gcc -o prstuff print_stuff.c
root@JDEBETTENWS2016:/home/jdebette# ./prstuff
Color red, number1 123456, number2 00089, hex ff, float  3.14, unsigned value 250.
*/
