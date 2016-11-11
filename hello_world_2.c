#include <stdio.h>

int main ()
{
int a=10;
printf("a=%d\n",printf("b=%d\n",a));
printf("Color %s, number1 %d, number2 %05d, hex %x, float %5.2f, unsigned value %u.\n",
       "red", 123456, 89, 255, 3.14159, 250);
printf("Hello Old World!\n");
return 0;
}

/*
root@JDEBETTENWS2016:/home/jdebette# gcc -o h2 hello_world_2.c
root@JDEBETTENWS2016:/home/jdebette# ./h2
b=10
a=5
Color red, number1 123456, number2 00089, hex ff, float  3.14, unsigned value 250.
Hello Old World!
*/
