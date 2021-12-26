#include "function.h"

#define true 1
#define false 0

void task_1()
{
	int n, i1, i2, i3, count = 0;
	for (n = 111; n <= 999; n++)
	{
		i1 = n;
		i3 = i1 % 10;
		i1 /= 10;
		i2 = i1 % 10;
		i1 /= 10;
		if (i1 == i2 || i2 == i3 || i1 == i3)
			count++;
	}
	printf("%d", count);
}

void task_2() {
    int n = 0, a, b, c;
    for (int i = 102; i <= 987; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a != b && a != c && b != c)
            n++;
    }
    printf("%d", n);
}

void task_3() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void task_4() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void task_5() {
    int n, copy_n, s = 0;
    scanf("%d", &n);
    copy_n = n;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    if (power(s, 3) == power(copy_n, 2))
        printf("true");
    else
        printf("false");
}

int task_6() {
    int n, c = 1;
    scanf("%d", &n);
    while (c < n) {
        c *= 3;
    }
    if (c == n | n == 1)
        return True;
    else
        return False;
}

void task_7()
{
	float a, s = 0;
	int n = 1;
	scanf("%f", &a);
	while (s < a)
	{
		s += (float)1 / n++;
	}
	printf("n = %d", n);

}

void task_9() {
    int n, a[15], i, k;
    scanf("%d", &n);
    k = 0;
    while (n) {
        a[k] = n % 10;
        n /= 10;
        k++;
    }
    n = 0;
    for (i = k - 1; i > -1; --i)
        if (a[i] != 0 && a[i] != 5)
            n = n * 10 + a[i];
    printf("%d", n);
}

void task_10() {
    int n, del = 1;
    scanf("%d", &n);
    while (del <= n) {
        if (n % del == 0)
            printf("%d ", del);
        del += 1;
    }
}

void task_11() {
    int n;
    scanf("%d", &n);
    for (int q = 2; power(q, 3) <= n; q++) {
        if (n % power(q, 2) == 0 && n % power(q, 3) != 0) {
            printf("%d ", q);
        }
    }
}

void task_12() {
    int m, k = 1;
    scanf("%d", &m);
    while (power(4, k + 1) < m) {
        k += 1;
    }
    printf("%d", k);
}

void task_13() {
    int p = 2, n, k, m;
    scanf("%d", &n);
    while (n > 0) {
        k = 0;
        m = p;
        while (m > 1) {
            if (p % m == 0)
                k++;
            if (k > 1)
                break;
            m--;
        }
        if (k == 1) {
            printf("%d ", p);
            n--;
        }
        p++;
    }
}

void task_14() {
    int n, k, f1 = 1, f2 = 1, m;
    scanf("%d", &n);
    printf("1 1 ");
    for (k = 2; k < n; ++k) {
        m = f1 + f2;
        f1 = f2;
        f2 = m;
        printf("%d ", f2);
    }
}

void task15()
{
	float eps = 0.001;
	for (float i = 2.0; i <= 100.0; i++)
		printf("sqrt(x): %f;\n", sqrt(i));
}

void task_16() {
    float num, eps = 0.01;
    scanf("%f", &num);
    float root = num / 2;
    int i = 0;
    while (root - num / root > eps) {
        i++;
        root = 0.5 * (root + num / root);
    }
    printf("%f %f", num, root);
}

void task_19() {
    int n, j, i;
    scanf("%d", &n);
    for (i = 6; i < n; i++) {
        int sum = 1;
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            printf("%d ", i);
    }
}

void task_20(){
    int p=3, n;
    scanf("%d", &n);
    while (p+2<n){
        if (is_prime(p) && is_prime(p+2))
            printf("(%d %d) ", p, p+2);
        p+=1;
    }
}
