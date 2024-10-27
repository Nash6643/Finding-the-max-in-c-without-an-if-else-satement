// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
int num1 = 10;
int num2 = 20;
int num3 = 30;

  // Calculate the result
   int result = (num1 + num2 + abs(num1 - num2)) / 2;
    
    // Calculate the maximum value
   int max = (result + num3 + abs(result - num3)) / 2;
    
    printf("%d",result);

    return 0;
}