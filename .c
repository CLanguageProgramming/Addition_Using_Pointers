#include <stdio.h>
int main()
{
    int n1, n2, tt;
    printf("Addition of 2 numbers using pointers\n");
    printf("\nNumber 1: ");
    scanf("%d", &n1);
    printf("Number 2: ");
    scanf("%d", &n2);
    int* num1 = &n1;
    int* num2 = &n2;
    int* totl = &tt;
    *totl = *num1+*num2;
    printf("\nSum of %d and %d: %d", *num1, *num2, *totl);
}
