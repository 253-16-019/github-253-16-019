#include <stdio.h> // header file
#include <conio.h> //header file

// main function starts

void main(){
int a,b,sum; // declaring three integers a, b and sum
printf("Enter integer one: \n"); // printing on output
scanf ("%d",&a); //taking the input value into a
printf("Enter integer two: \n"); // printing on output
scanf ("%d",&b); // taking the input value into b
sum=a+b; // taking their summation into sum
printf("Sum is: %d\n", sum); // displaying the sum
getch(); //waiting for a character to return
}
