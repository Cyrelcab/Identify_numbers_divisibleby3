#include <stdio.h>

int main(){
    int x, i, numbers, num_divisible, num = 0, y, z, p, temp;
    int result, l=0;

    printf("How many numbers: ");
    scanf("%d", &x);

    printf("Enter those numbers: ");
    for(i = 0; i <= x; i++){
           scanf("%d", &numbers);
            if(numbers % 3 == 0){
            z+=1;
             temp = numbers;
             result = temp;

             if(z==1){
                printf("\nDivisible of 3 are/is: ");
             }
             z++;
             printf("%d ", result);
             }
    }
   return 0;
   }
