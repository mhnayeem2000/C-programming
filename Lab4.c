
#include <stdio.h>

/* Function declaration */



int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Enter a  number to find sum of its digits: ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf(" %d = %d", num, sum);
    
    return 0;
}
/**
 * Recursive function to find sum of digits of a number
 */
int sumOfDigits(int num)
{
    int reminder;
    // Base condition
    if(num!=0){
        reminder=num%10;
        return reminder+sumOfDigits(num/10);
    }
    return num;   
    
}
