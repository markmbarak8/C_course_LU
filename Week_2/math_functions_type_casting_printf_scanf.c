#include<stdio.h>
#include<math.h>

void main(){
    //In the math.h there are several math functions for cruical calculation in our program
    // I mentioned some of them in the standard operations file but here are a few more
    
    /*fabs*/
    char a=-6;
    printf("The absolute value of %d is %d",a,(char)fabs(a)); // displays the absolute value of a number

    /*fmod*/
    float k=12.4,l=4.3;
    printf("\nThe remainder of the division of %f and %f is : %f",k,l,fmod(k,l)); //displays the remainder of a division between rational numbers

    // type conversions
    // In programming when performing standard operations between two numbers of different datatypes
    // The numbers are converted to the stronger datatype. example
    char b=25,e;
    int c=546;
    float d=145.715,f;
    printf("\nb+c=%d",b+c);// here b is converted to int since int (type of c) is stronger than char
    printf("\nc+d=%f",c+d);// here c is converted to float

    // in assignment however, the result is converted always to the type of the destination
    f=c; // here c is converted to float
    printf("\nf=%f",f);

    e=c; // here the type of c is stronger than the type of e char, which will result in a loss of presision during conversion.
    printf("\ne=%d",e);

    //forced type casting
    // we can dynamically change the type of the variable during a program; in C it is done as follows:
    printf("\n%d/%d=%f",c,b,(float)c/b); // here we converted c into a float before the division and in turn b got converted into float and the result into float
    printf("\nThe absolute value of %f is %d",d,(long)d);

    /* Read and Write data. */
    char n1=10,*n2="M",*name="mark";
    float n3=5.6,n4=8.2;
    // We've been using the print statement to print our results to the screen and check our work
    // We've also been using format specifiers insite our string to indicate how the values of our variables will be printed
    // the most commonly used format specifiers are:
    printf("\n%d and %i are relative integers.",n1,n3); // %d and %i for printing integers, letters,words will be converted to ascii code,floats will be rounded
    printf("\n%u is an unsigned integer.",n1); // %u for printing unsigned integers
    printf("\nThe ascii code of %c is %d",n2,n2); // %c for printing one character
    printf("\nMy name is %s.",name); // %s for a whole string
    printf("\nThe number %d is %o in octal and %x in hexadecimal.",n1,n1,n1); // %o for printing in octal and %x for printing in hexadecimal.
    printf("\nThe number %f is %e in scientific notation.",n3,n3); // %f for floats and %e for exponential notation

    //scanf
    //It is used for receiving data from the user (i.e reading data)
    float A,B;
    printf("\nEnter A: ");
    scanf("%f",&A); // here scanf does not print something to the terminal instead it receives data from the keyboard and stores it in A (we put &A)
    printf("Enter B: ");
    scanf("%f",&B);
    printf("The hypothenuse of the right triangle of sides %f and %f is %f.",A,B,sqrt(A*A+B*B));
}