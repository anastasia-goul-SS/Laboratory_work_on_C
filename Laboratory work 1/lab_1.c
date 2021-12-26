#include <stdio.h>
#include <math.h>
#include <time.h>

//lab_2_1:  123,00123,058,-5, 0xaf, 0X0 значения верно записанных констант, представляющие целочисленные значения
//lab_2_2:  1,71,034159E1F, .005, 1234.56789L значения верно записанных констант, записанных с плавающей точкой

void lab_2_3(){
    int a, b, c, d, e,q,k,g,f;
    a = 2;  b = 13;  c = 7;  d = 19;  e = -4;
    q = b % e;
    k = c % d-e;
    g = b % - e * c;
    f = d / a % c;
    printf("q = %d, k = %d, g = %d, f = %d",q,k,g,f);
}

void lab_2_4(){
    int a, c;
    c = 5;

//    c++;
//    a = 2*c;

//    c+=1;
//    a = c+c;

//    ++c;
//    a = c+c;

    a = (c+=1)+c;

    printf("c = %d, a = %d",c,a);
}

void lab_2_5() {
    int a, c;
    c = 5;

//    --c;
//    a = c/2;

//    a = --c/2;

//    a = c--/2;

//    a = (c = c - 1)/2;

    a = (c -= 1)/2;


    printf("c = %d, a = %d",c,a);
}

void lab_2_7() {
    int a, b, c, res;   a = 2;  b = 6;  c = 3;
//    res = -  -  - a;
//    res = a --- b;
    printf("res = %d",a);
}

void lab_2_8() {
    int  i,  j,  k, m;  char c, d;   i = 1;  j = 2;  k = -7; m = 0; c = 'w';
    m = - i - 5 * j >= k+1;

//    i + j++  + k = = -2*j;
//    m = 3 < j < 5;
//    m = 3 = = j < 5;
//    m = = c = 'w'
//    m = c != 87;
//    m = c = !87;
//    m = ! c = 87;
//    m = !c+87;
//    ! m = =c + 87;
//    m ! = c + 87;
//    k = = j - 9 = = i;
//    k *= 3 + j;
//    i + j = !k;
//    i += ++ j + 3;
//    k %= m = 1 + n / 2;
//    1 + 3 * n += 7 / 5;
//    1 + 3 * (n += 7) / 5;
    printf("res = %d",m);
}

//lab_2_9:
//      not (not x) = x, ! это одно отрицание, а в утверждении двойное отрицание, которое дает такой же ответ, неверно
//      x and true = x , and можно заменить на &&, верно

void lab_2_14() {
    double d;
    float f;
    long lng;
    int i;
    short s;
    s = i = lng = f = d = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 1000000 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    d = f = lng = i = s = 1000000 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    lng = s = f = i = d = 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double) 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    s = i = lng = f = d = 100 / (double) 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    f = s = d = lng = i = (double) 100 / 3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    i = s = lng = d = f = (double) (100 / 3);
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
}

float lab_2_16() {
    float x;
    scanf("%f", &x);
    return 2 * powf(x, 4) - 3 * powf(x, 3) + 4 * powf(x, 2) - 5 * x + 6;
}

void lab_2_17() {
    int k, x;
    scanf("%d", &x);
    k = x % 1000 / 100;
    printf("k = %d", k);
}

void lab_2_18() {
    int k = 0, x;
    scanf("%d", &x);
    while (x > 0) {
        k += x % 10;
        x /= 10;
    }
    printf("%d", k);
}

void lab_2_19() {
    int k;
    float x;
    scanf("%f", &x);
    k = (int) (x * 10) % 10;
    printf("%d", k);
}

void lab_2_20() {
    int k = 0, x, i = 2;
    scanf("%d", &x);
    while (i >= 0) {
        k += (x % 10) * powf(10, i--);
        x /= 10;
    }
    printf("%d", k);
}


void lab_2_21() {
    int s, m, y;
    scanf("%d", &s);
    y = s / 3600;
    m = s % 3600 / 60;
    printf("Прошло: %d-hours, %d-minutes", y, m);
}

void lab_2_22() {
    float x, x_2=1,x_21=1;
    scanf("%f", &x);
    for (int i=1; i <= 4; i++)
        x_21*=(x_2 *= x*x);
    printf("x^21 за 6 операций =%f\n", x_21*x);
}