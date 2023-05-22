#include <stdio.h>

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (int i = n - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
