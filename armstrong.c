#include <stdio.h>
#include <math.h>

int main() {
    int n, num, count = 0, rem, sum = 0;
    printf("Enter a number to check if it is Armstrong: ");
    scanf("%d", &n);
    num = n;
    while (num != 0) {
        count++;
        num = num / 10;
    }
    num = n;
    while (num != 0) {
        rem = num % 10;
        sum += (int)pow(rem, count);
        num = num / 10;
    }
    if (n == sum) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
