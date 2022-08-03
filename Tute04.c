/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() 
{
    int num1, num2, maximum, minimum, product;
    
    
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1,&num2);
    
    maximum = max(num1,num2);  
    minimum = min(num1,num2);  
    product = multiply(num1,num2);
    
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    printf("Product = %d",product);
    
    return 0;
}


int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int multiply ( int no1, int no2 )
{
	return no1* no2;
}