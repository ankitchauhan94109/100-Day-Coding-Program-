#include <stdio.h>

int main()
{
    int n, a[100], element, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    while (i >= 0 && a[i] > element)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}