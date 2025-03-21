#include<stdio.h>

int main()
{
    // when assigning types to variables C will automatically choose the most economical
    // type, for example when assigning the variable age to the long type C will automatically convert it to char
    // because it takes less memory to store it.
    long Age=21;
    printf("My age is %u years old.\n",Age); //Age here is converted to char.

    // but we can enforce an integer to be unsigned by adding the suffix u or u 
    // We can also enforce the type long by adding the suffix l or L.
    // we can use both by adding ul or UL or uL or Ul.
    int number_of_students=-89ul;
    printf("The number of students in this class is %u.\n",number_of_students);

    char credits;
    credits=6ul;
    printf("m1103 and 4 and 5 and i1101 have %u credits each, while m1106 and 2 have %u credits each.\n",credits,credits/2);

    // Octal and hexadecimal bases
    // any number that starts with 0 is read in octal base
    int num=0734;
    printf("The number %o is in octal base.\n",num); // %o for writing in octal.

    // any number that starts with 0x or 0X is read in hexadecinal base
    int num2=0x4ac;
    printf("This number %x is in hexadecimal base.\n",num2); // %x for writing in hexadecimal

    char n=21;
    printf("The number %d in decimal is %x in hexadecimal and %o on octal\n",n,n,n);


    //Real constants
    // we can indicate decimal numbers using a decimal point
    float pi=3.14;
    printf("The number %f represents pi.\n",pi);

    //we can also indicate them in exponential notation using e or E
    float a=23E1F; //we can use F or f to force the float type.
    printf("The number a is %f.\n",a);

    float b=122e-4;
    printf("The number b is %f\n",b);

    // When assigning a character we can dynamically change it throughout a program
    char example=4;
    example+=2;
    printf("Example is %d\n",example);

    // but we can add the keyword const so that the variable cannot be manipulated (becomes read only)
    const char e2=3;
    //e2+=1; this leads to an error
    printf("another example %d\n",e2);
    
    return 0;
}