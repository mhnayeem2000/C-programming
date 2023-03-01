#include <stdio.h>

int main()

{
    float clecius,farenheit;
    
    printf("enter farenheit value: ");
    scanf("%f",&farenheit);

    clecius=(farenheit-32)*5/9;
    printf("\nCelsius is %.2f",clecius);
    printf("C");
    return 0;
}
