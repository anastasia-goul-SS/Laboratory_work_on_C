#include stdio.h

void lab_7() {
    int a, b, c;
    scanf(%d %d %d, &a, &b, &c);
    if (a % 2 == 0  b % 2 == 0  c % 2 == 0)
        printf(Есть целое число);
    else
        printf(Нет целого числа);
}

void lab_8() {
    int x, e, f;
    printf(Введите промежутокn);
    scanf(%d %d, &e, &f);
    for (int i = 0; i  3; i++) {
        printf(Введите %d числоn, i + 1);
        scanf(%d, &x);
        if (e = x && x = f)
            printf(%d лежит в указанном промежуткеn, x);
    }
}

void lab_9() {
    int x;
    printf(Введите трехзначное числоn);
    scanf(%d, &x);
    if (x  100 == x % 100  10  x  100 == x % 10  x % 100  10 == x % 10)
        printf(Есть повторяющиеся числа);
    else
        printf(Нет повторяющихся чисел);
}

void lab_10() {
    int x, k;
    for (int i = 0; i  3; i++) {
        printf(Введите %d числоn, i + 1);
        scanf(%d, &x);
        if (i == 0)
            k = x;
        if (x  k && i != 0)
            k = x;
    }
    printf(Наибольшее число равно %d n, k);
}

void lab_12() {
    int x;
    scanf(%d, &x);
    if (x = 5)
        printf(Увы - рабочий день);
    else if (x == 6)
        printf(Ура! Суббота!);
    else if (x == 7)
        printf(Ура! Воскресенье!);
}

void lab_13() {
    int x;
    scanf(%d, &x);
    if (x % 10 == 1)
        printf(%d рубль, x);
    else if (x % 10  1 && x % 10  5)
        printf(%d рубля, x);
    else if (x % 10 = 5  x % 100 = 10 && x % 100 = 19)
        printf(%d рублей, x);

}

void lab_14() {
    int key, minutes;
    scanf(%d %d, &key, &minutes);
    switch (key) {
        case 432
            printf(Стоимость разговора 9,20 рубмин %.2f, 9.2  minutes);
            break;
        case 95
            printf(Стоимость разговора 4,10 рубмин %.2f, 4.1  minutes);
            break;
        case 861
            printf(Стоимость разговора 2,05 рубмин %.2f, 2.05  minutes);
            break;
        case 844
            printf(Стоимость разговора 2,5 рубмин %.2f, 2.5  minutes);
            break;
        default
            printf(Код города неправильный);
    }
}

void lab_15() {
    int m, n;
    scanf(%d %d, &m, &n);
    if ((m60+n)16  61024)
        printf(Места не хватит);
    else
        printf(Места хватит);
}

void lab_16(){
    int volume, fish_count, del_fish;
    scanf(%d %d, &volume, &fish_count);
    if (volumefish_count3) {
        if ((fish_count  3 - volume) % 3 == 0)
            del_fish = (fish_count  3 - volume)  3;
        else
            del_fish = (fish_count  3 - volume)  3 + 1;
        printf(Аквариум перенаселен, нужно переселить %d рыб(ы), del_fish);
    } else
        printf(Аквариум не перенаселен);
}