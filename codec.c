#include <stdio.h>
int main() {    

    // getting variable error
    string number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    // getting print error
    print("%d + %d = %d", number1, number2, sum);
    return 0;
}
