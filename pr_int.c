#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void pr_int(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
    {
        pr_int(n / 10);
    _putchar((n % 10) + '0');
    }
}
