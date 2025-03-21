#include<stdio.h> /*This is how to initiate a library in C.*/

/*This is a comment. A line of code that is not read by the computer but used as notes for the developers*/

// This is 
// a multi 
// line comment

/*stdio is a library that allows for print functions.*/

/*main is a function in the stdio library used to initiate print statements*/
void main()
{
    /*The printf function used to print data to the terminal or output.*/
    printf("Hello World!!\n");
    printf("Hi how are you?\nHow old are you?\nWhere do you study?"); /*Every function ends with a semicolon*/
    /*\n is used to print a new line and is used in all programming languages.*/

    /*Identifiers*/
    // Identifiers are used to assign values to variables so that they can be dynamically used in a program.
    char* first_name; // char* refers to a string identifier, text.
    char* last_name; 
    int age; //int is used to initiate integer variables, numbers without decimals.
    float length; //float is used to initiate variables that contain decimal numbers.
    float weight;
    first_name="Mark"; 
    last_name="Mbarak";
    age=21;
    length=1.75;
    weight=68.5;
    printf("\nMy name is %s %s",first_name,last_name); //for char variables we use %s to substitute it.
    printf("\nMy age is %d.",age); // for int variables %d is used in a string to substitute it.
    printf("\nI am %fm tall and weigh in at about %fkg.",length,weight); //for float variables %f is used to substitute them in a string.
}

