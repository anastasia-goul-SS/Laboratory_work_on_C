#include <stdio.h>
#include <malloc.h>

void task_1a() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '?') {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}

void task_1b() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '-')
            continue;
        if (a == '&') {
            putchar('&');
        }
        putchar(a);
    }
}
void task_1c() {
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122)
            putchar(a);
    }
}

void task_1d(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 65 && a <= 90) {
            putchar(a + 32);
            continue;
        }
        putchar(a);
    }
}

void task_1e(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122) {
            putchar(a - 32);
            continue;
        }
        putchar(a);
    }
}

void task_1f(){
    int a, a_prev=0;
    while (a != EOF) {
        a = getchar();
        if (a == '+' && a_prev=='+') {
            continue;
        }
        a_prev=a;
        putchar(a);
    }
}

void lab2a()
{
    char str[80], c, j;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '$')
            break;
    }
    for (i = 0; str[i] != '$' && i < strlen(str); i++)
    {
        if (str[i] == '.')
        {
            printf("%c", '.');
            i++;
            j = i;
            while ((int)str[j] >= 48 && (int)str[j] <= 57)
                j++;
            if (j - i > 2)
            {
                printf("%c%c", str[i], str[i + 1]);
                i += j - i - 1;
            }
            else
            {
                printf("%c%c", str[i], str[i + 1]);
                i++;
            }
        }
        else
            printf("%c", str[i]);
    }
}

void lab2b()
{
    char str[80], c, j;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '$')
            break;
    }
    for (i = 0; str[i] != '$' && i < strlen(str); i++)
    {
        if (str[i] == '0')
        {
            j = i;
            while (str[j] == '0')
                j++;
            if (str[i - 1] == '.')
            {
                for (; i <= j + 1; i++)
                    printf("%c", str[i]);
            }
            else if (str[j] == '.')
            {
                printf("%c", '0');
                i = j - 1;
            }
            else if (!((int)str[j] >= 49 && (int)str[j] <= 57))
            {
                printf("%c", '0');
                i = j - 1;
            }
        }
        else
            printf("%c", str[i]);
    }
}