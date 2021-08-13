#include <stdio.h>
 int main()
{
   int m, n, *a, *b, temp;
    printf("Enter the value of m and n\n");
   scanf("%d%d", &m, &n);//Reading values
   printf("Before Swapping\nx = %d\ny = %d\n", m, n);
 
   a = &m;//a is pointer storing the address of m
   b = &n;//b is pointer storing the address of m
 
   temp = *b;
   *b = *a;    // Swappingof m and n
   *a = temp;
 
   printf("After Swapping\nm = %d\nn = %d\n", m, n);
   return 0;
}
