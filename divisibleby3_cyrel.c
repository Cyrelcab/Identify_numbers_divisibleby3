#include <stdio.h>

int main(){
    int x, i, input[100], num_divisible[100];

    printf("How many numbers: ");
    scanf("%d", &x);

    printf("Enter those numbers: ");
    for(i = 1; i <= x; i++){
        scanf("%d", &input[i]);
    }
    printf("\nDivisible by 3 are/is: ");
    for(i = 1; i <= x; i++){
        if(input[i] % 3 == 0){
            num_divisible[i] = input[i];
            printf("%d ", num_divisible[i]);
        }
    }
    return 0;
}
