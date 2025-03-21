#include<stdio.h>
void main()
{
    //Escape sequences
    /*Escape sequences are used in a string for a certain character or special task*/

    // \n is used to skip into a new line example:
    printf("I will write\neach phrase\non a line.\n");

    // \t is used to write tabspaces:
    printf("This is a   tabspace.\n");
    printf("This is a\ttabspace.\n"); // you can use the regular tabspace on the keyboard no difference.

    // " is used to begin and end a string but if we want to include it we can use \"
    printf("Here\"s the boy.\n");

    /*also \ can be escaped by \\*/
    printf("This \\ is a slash.\n");

    // \a is used to ring a bell
    printf("\a\n");

    // \b used for skipping one character before it.
    printf("The\b letter e in the will be skipped.\n");

    // \0 returns only the string before it.
    printf("This escape sequence\0 will do this.");

    //  \r does the same as \n and \f is page break
    printf("\nA normal strinf\f with this escape sequence.\r");

    // \v is a vertical tabulator.
    printf("A vertical\vtabulator.\n");

    //  \? interrogation point.
    printf("This is \? an interrogation point.\r");

    //Numerical types

    //In C we can use different datatypes for signed and unsigned numbers.
    // for signed numbers we have char,short,int,long,long long. the difference is in the size of the number.
    char number_of_subjects=6;
    printf("I will take %d subjects in this semester.\n",number_of_subjects);

    short temperature_mars=-300;
    printf("The temperature on mars is %d degrees celcius.\n",temperature_mars);

    // but for unsigned numbers we can use the same keywords with the word unsigned before it
    unsigned char age=-16;
    printf("I am %i years old.\n",age); // the number is not unsigned but converted to a different number.

    //For rational functions we use float,double,long double.the difference is in the size of the number.
    float length=1.7;
    printf("I am %fm tall.\n",length);
}