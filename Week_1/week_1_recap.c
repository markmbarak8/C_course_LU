#include<stdio.h>

void main(){
    // This is a comment
    /*This is
    a multiline
    comment
    */
    // /*This is /*not allowed*/ ok */

    // to print something to the terminal use printf
    printf("This is a sentence.\n"); // \n escape sequence for new line

    // You can use many print statements to print on one line.
    printf("This is ");
    printf("one line.\n");

    //escape sequences
    printf("This\nis a newline.\n"); // \n for newline.
    printf("This\ris also a newine."); // \r also for newine.
    printf("\nThis\tis a tabulator."); // \t for tabspace.
    printf("\nThis\ais an alarm."); // \a for alarm.
    printf("\nThis\bis a back cursor."); // \b for skipping one character before it.
    printf("\nThis\vis a vertical tabulator."); // \v for vertical tabulation.
    printf("\nThis\0is a null string"); // \0 ends the string.
    printf("\nThis\fis a page break."); // \f for page break.
    printf("\nThis\\is a backslash,and these\"are quotation marks."); // use \ to escape \ and "

    //Identifiers
    //an identifier name can contain the characters 0-9 a-z A-Z and _ but it can only start with a-z A-Z and _
    char *first_name="Mark",*last_name="Mbarak",age=21;
    printf("\nMy name is %s %s and I'm %d years old.",first_name,last_name,age); // %s for strings and %d for integers

    //numerical datatypes
    char a=120; // char has a maximum capacity of 1 byte for integers
    short b=31000; // short has a maximum capacity of 2 bytes for integers
    int c=-108000; //int has a maximum storage capacity of 4 bytes for integers
    long d=360000; //long has a maximum storage capacity of 4 bytes for integers
    long long e=-92238923; // long long has a maximum storage capacity of 8 bytes for integers
    printf("\n%i %i %i %i %i",a,b,c,d,e); // %i for integers

    // for decimals
    float f=31.567;
    double g=1.78319786734;
    long double h=-7.13434;
    printf("\n%f %f %f",f,g,h); // %f for floats

    // unsigned datatypes
    unsigned char n1=-4;
    unsigned short n2=-234,n21=445;
    unsigned int n3=-546;
    unsigned long n4=-12423;
    unsigned long long n5=-5609423;
    printf("\n%u %u %u %u %u %u",n1,n2,n21,n3,n4,n5);
    // the keyword unsigned does not get the absolute value but converts the - sign to binary then converts it io another integer
    // if the number has no - then it remains the same

    // enforced datatypes
    // when assigning datatypes with huge memmory capacities to variables with small values C will automatically convert it to the most economically beneficial datatype
    // but we can enforce a datatype on a number using special suffixes
    long x,y,z,w;
    x=23L; //L or l forces the use of the long type
    y=-32U; // U or u forces the use of unsigned datatype
    z=45ul; // ul or UL forces the use of unsigned long
    w=98.F; // .f or .F forces the use of the float type
    printf("\n%d %d %d %d",x,y,z,w);

    // exponential notation
    // you can use e or E for exponential notation
    float x_=23e-1,y_=45E-2,z_=31e2,w_=87E3;
    printf("\n%f %f %F %f",x_,y_,z_,w_);

    // constant variables
    // Adding the keyword const will make the variable in read only mode (cannot be edited)
    const float r=34.45;
    // r+=5; //error
    printf("\n%f",r);

    const unsigned int re=5;
    // re+=1; //error
    printf("\n%d",re);

    //octal and hexadecimal
    // any number that starts with 0 is interpreted in octal base
    const unsigned char p=02776;
    printf("\nThis number %d in decimal is %o in octal.",p,p); // %o for octal

    //any number that starts with 0x is interpreted in hexadecimal base.
    const long l=0xa6b;
    printf("\nThe number %d in decimal is %x in hexadecimal.",l,l);

    
}