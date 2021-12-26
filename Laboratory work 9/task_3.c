#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

const int N = 20;

int main(){

        char str[M];

        int i=0,b=0,c=0;

        printf("Введите строку:\n");

        gets(str);

        while(str[i]!='\0'){

        if(str[i]>=48&&str[i]<=57)

        c++;

        else

        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))

        b++;

        i++;

        } printf("В строке %d букв и %d цифр.\n",b,c);

str[0]=getch; return 0; }