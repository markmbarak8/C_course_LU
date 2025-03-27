#include<stdio.h>

void main(){
    // scanf is a function from the stdioh library that is used to receive inpyt from the keyboard
    int A,B,C;
    printf("Enter A,B,C: ");
    scanf("%li,%li,%li",&A,&B,&C);// here scanf can recieve 3 long integers from the keyboard and store them in A,B,C. the typing format is as such : num1,num2,num3
    printf("The value of A is %i,and that of B is %i and that of C is %i.",A,B,C);
    
    // scanf does not print anything to the terminal, instead we pass the type of input as well as the format
    char *first_name,*last_name,age;
    printf("\nEnter your full name (first_name last_name): ");
    scanf("%s %s",first_name,last_name);
    printf("Enter your age: ");
    scanf("%d",&age);
    age>=18?printf("Welcome to this page %s %s",first_name,last_name):printf("You are not allowed on this site.");
    // In the above program I am using two scanfs, one for my name and the other is for my age
    // then a ternary operator to check if I am above 18 and hence allowed to this site
}