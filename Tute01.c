/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(){
	
int a,b;
float avg;
 
printf("Enter Your Marks :");
scanf("%d",&a);

printf("Enter Your Marks :");
scanf("%d",&b);
 
avg= (a+b)/2;

printf("Avarage is = %.2f",avg);

return 0; 
 	
}