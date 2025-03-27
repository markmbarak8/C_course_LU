#include<stdio.h>

void main(){
    // in integers, we can specify the minimal space an integer can aquire 
    // we put the number of minimum integers before after the % in the format specifier
    // if an integer has less characters than the minimum additional space is added 
    short x=2345,y=214,z=13000;
    printf("x equals %5d.",x);// this will print an additional space to the left of x
    printf("\nx equals %-5d.",x); // this will print an additional space to the right of x
    printf("\n%-4dis%3x in hexadecimal.",y,y);
    printf("\nz equals %10u.",z);

    //we can also adjust the size and precision in floats using a similar method.
    float a=2.34678957,b=134.325456,c=546.34141341354;
    printf("\na equals %0.2f..",a);
    printf("\nb equals %-8.3f..",b);
    printf("\nc equals %-10.0f.",c);
    
}
