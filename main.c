#include <stdio.h>

int sumTwo(int a, int b)
{
    return (a + b);
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    
    return y;
}

int main(void)
{
    int result;

    result = sumTwo(10, 20);
    printf("sumtwo result: %i\n", result);

    result = square(5);
    printf("square result: %i\n", result);

    result = get_max(10, 20);
    printf("get_max number: %i\n", result);

    return 0;
}