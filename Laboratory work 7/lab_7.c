#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void task_1()
{
    printf("Char: %u\n", sizeof(char));
    printf("Short: %u\n", sizeof(short));
    printf("Int: %u\n", sizeof(int));
    printf("Long: %u\n", sizeof(long));
    printf("Float: %u\n", sizeof(float));
    printf("Double: %u\n", sizeof(double));
    printf("Long double: %u\n", sizeof(long double));
}

void task_2()
{
    char *pc, c;
    int *pi, i;
    long *pl, l;
    float *pf, f;
    double *pd, d;
    long double *pld, ld;
    char **ppcc;
    double **ppdd;
    printf("Char: %u, Pointer: %u\n", sizeof(c), sizeof(pc));
    printf("int: %u, Pointer: %u\n", sizeof(i), sizeof(pi));
    printf("long: %u, Pointer: %u\n", sizeof(l), sizeof(pl));
    printf("float: %u, Pointer: %u\n", sizeof(f), sizeof(pf));
    printf("double: %u, Pointer: %u\n", sizeof(d), sizeof(pd));
    printf("long double: %u, Pointer: %u\n", sizeof(ld), sizeof(pld));
    printf("Pointer **char: %u\n", sizeof(ppcc));
    printf("Pointer **double: %u\n", sizeof(ppdd));
}

void task_3()
{

int main()

{ char c;
int i;
double d;

printf("tip peremennoi \t adres perem\t adres+2 \t adres-1\n");
printf("char \t\t %p \t\t %p \t\t %p\n",&c,&c+2,&c-1);
printf("int \t\t %p \t\t %p \t\t %p\n",&i,&i+2,&i-1);
printf("double \t\t %p \t\t %p \t\t %p\n" ,&d,&d+2,&d-1);
getch();
return 0; }
}

void task_4()
{
    int x = 8, y = 3;
    float z1, z2;
    z1 = x / y;
    z2 = (float)x / y;
    printf("x/y=%f\n", z1);
    printf("(float)x/y=%f\n\n", z2);

    unsigned long ul = 0x77BBCCDD, *pul = &ul;
    unsigned char *p = (unsigned char *)pul;
    int i, n = sizeof(*pul);
    printf("ul = %x\n", ul);
    printf("sizeof(*pul) = %d\n", n);
    for (i = 0; i < n; i++, p++)
        printf("%x\n", *p);
}