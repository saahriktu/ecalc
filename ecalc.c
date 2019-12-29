/*
 * Easy CALCulator v3.4
 * noninteractive RPN commandline calculator
 * License: GNU GPLv3
 * Author: Artem Kurashov
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x = 0, y = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case 'c':
            x = 0;
            y = 0;
            break;
        case '+':
            y += x;
            break;
        case '-':
            y -= x;
            break;
        case '*':
            y *= x;
            break;
        case '/':
            y /= x;
            break;
        case '^':
            y = pow(y, x);
            break;
        case 's':
            x = sin(x);
            break;
        case 'o':
            x = cos(x);
            break;
        case 't':
            x = tan(x);
            break;
        case 'l':
            x = log(x);
            break;
        case 'q':
            return 0;
        case '=':
            printf("%.15f,%.15f\n", x, y);
            break;
        default:
            (void) scanf("%lf", &x);
        }
    }
}
