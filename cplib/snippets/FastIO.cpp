#include <bits/stdc++.h>
using namespace std;
inline long long fast_input(void) {
    char t;
    long long x = 0, neg = 0;
    t = getchar();
    while ((t < 48 || t > 57) && t != '-') t = getchar();
    if (t == '-') {
        neg = 1;
        t = getchar();
    }
    while (t >= 48 && t <= 57) {
        x = (x << 3) + (x << 1) + t - 48;
        t = getchar();
    }
    if (neg) x = -x;
    return x;
}

inline void fast_output(long long x, int mode) {
    char a[20]; long long i = 0, j; a[0] = '0';
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x == 0) putchar('0');
    while (x) {
        a[i++] = x % 10 + 48;
        x /= 10;
    }
    for (j = i - 1; j >= 0; j--) putchar(a[j]);
    if (mode == 0) putchar('\n');
    else putchar(' ');
}

