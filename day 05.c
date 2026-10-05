#include <stdio.h>

int main() {
    int n, r = 0, sum = 0, temp;
    
    printf("Enter a number to find sum and reverse: ");
    scanf("%d", &n);
    
    // Store the original value of n
    temp = n; 
    
    while(n != 0){
        r = r * 10;
        r = r + n % 10;
        sum = sum + n % 10;
        n = n / 10;
    }
    
    // Use temp instead of n here
    printf("The sum and reverse of %d is %d and %d\n", temp, sum, r);

    return 0;
}