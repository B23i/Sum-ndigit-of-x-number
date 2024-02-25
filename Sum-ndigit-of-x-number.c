#include <stdio.h>
int main(){
    int n, x, sum = 0;
    printf("Digit Number:");
    scanf("%d", &n);
    printf("The digit:");
    scanf("%d", &x);
    for (int i = 0; i <= n; i++)
    {
        sum += x%10;
        x /= 10;
    }
    printf("Result:%d", sum);
    return 0;
}
