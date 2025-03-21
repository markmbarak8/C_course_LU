#include<stdio.h>
#include<math.h>

int main()
{
    // Comparison operators
    const unsigned char a=4,b=3;
    // We used to use comparison operators in math properties but they are
    // frequently used in programming languages for setting up conditions
    // or returning valuable data
    // in the following examples I will compare numbers a and b and
    // the result will be 1 if the statement is true otherwise 0 if the statement is false
    printf("Is a greater than b : %d",a>b); // a greater than b
    printf("\nIs a is greater than or equal to b : %d",a>=b); // a greater than or equal to b
    printf("\nIs a is less than or equal to b : %d",a<=b); // a less than or equal to b
    printf("\nIs a is less than b : %d",a<b); // a less than b
    printf("\nIs a equal to b : %d",a==b); // a equals b
    printf("\nIs a not equal to b : %d",a!=b); // a not equal to b

    //assignement operator
    //The assignment operator is the most common just one equal to assign a variable to a value,
    char *name,age;
    name="Mark Mbarak"; // assigning a string value to the name variable
    age=21; // assigning an int value to the age variable.
    printf("\nFull name : %s\nAge : %d",name,age);

    // you can also assign a variable to another variable
    char num1,num2=4;
    num1=num2; //assigning num1 to num2
    printf("\nnum1 : %d\nnum2 : %d",num1,num2);

    // arithmetic operators
    // In math we used to use arithmetic operators like + - * / for solving math problems or calculating the result
    // In programming, we use these same operators for various tasks from updating variables to complicated search algorithms.
    // example
    short x=20,y=15;
    printf("\nx plus y equals : %d",x+y); //plus operator
    printf("\nx minus y equals : %d",x-y); //minus operator
    printf("\nx multiplied by y equals : %d",x*y); // * times operator
    printf("\nx divided by y equals : %f",(float)x/(float)y); // / divide operator, just remember to type cast the divident and the divisor to float or other decimal datatype
    printf("\nThe remainder of the division of x by y is : %d",x%y); // % modulo operator, returns the remainder of a division

    // we can use these operators to update variables example
    x=x+1;
    y=y-8;
    printf("\nx=%d y=%d",x,y);
    // we can also use them to update variables on other varibles
    x=x/y;
    y=y%x;
    printf("\nx=%d y=%d",x,y);

    // but we can use a shortcut which is putting the opertor and then an equals sign the value we want to update with
    // example += -= *= /= %=  :
    float n1=8,n2=2.5,n3=-6,n4=-4.1,n5=-9.6,n6=7;
    n2*=2;
    n4-=0.9;
    n5+=0.6;
    printf("\nn2=%f , n4=%f , n5=%f",n2,n4,n5);
    // we can also use them on other variables
    n2+=n4;
    n1-=n6+=1; // for assignment variables the order is from right to left
    n3/=n1;
    printf("\nn2=%f n1=%f n6=%f n3=%f",n2,n1,n6,n3);

    // Increment and decrement operators
    // In programming, the most frequent type of operation is i=i+1 (incrementing) or i=i-1(decrementing) used in iteration mostly.
    // however instead of writing i=i+1 or i=i-1 there is a shortcut for that which is i++ or ++i (for incrementation)
    // and i-- or --i (for decrementation) examples:
    char a1=6,a2=4;
    a1++;
    ++a2;
    printf("\na1=%d a2=%d",a1,a2);
    --a1;
    a2--;
    printf("\na1=%d a2=%d",a1,a2);
    //In most cases using the increment and decremment operator before or after the variable doesn't make a difference
    //In a case we are using an assignment operator with an increment operator then the order matters:
    char b1=0,b2=4,b3=1,b4=17;
    b1+=b2++; // here b2 is added to b1 then b2 is incremented.
    b3*=b4--; // here b3 is multiplied by b4 then b4 is decremented.
    printf("\nb1=%d b2=%d b3=%d b4=%d",b1,b2,b3,b4);
    // if the increment(or decrement) operator is placed after the variable the assignment operator executes before the incrementor

    b1=0;b2=4;b3=1;b4=17; // reassigning the variables to their original values
    b1+=++b2;// here b2 is incremented first then added to b1
    b3*=--b4;// here b4 is decremented first then multiplied by b3
    printf("\nb1=%d b2=%d b3=%d b4=%d",b1,b2,b3,b4);
    // if the increment(or decrement) operator is placed before the variable the assignment operator executes after the incrementor

    //Logical operators
    // In programming; we use logical operators to evaluate a statement or a couple of statements
    // example
    // and && (x&&y if x and y are true, then x&&y is true and if one of them is false then x&&y is false)
    // or || (x||y if x or y are true, then x||y is true, x||y is false if and only if x is false and y is false)
    // not ! (!x if x is true then !x is false else !x is true)
    // in programming languages there is a datatype for true and false values called boolean datatype
    // Unfortunately in C, bool datatype does not exist so if a statement is true it returns 1 and if it is false it returns 0
    // any number not equal to zero is interpreted as true and 0 is false.
    // example : checking if a number is in a certain range
    const short r1=-302,r2=459;
    short x1=530,x2=231,x3=-421,x4=984,x5=23,x6=-123;
    // let's see which of these numbers are in range [r1,r2]
    printf("\nx1 is in range [r1,r2] : %d",(x1>=r1)&&(x1<=r2));
    printf("\nx2 is in range [r1,r2] : %d",(x2>=r1)&&(x2<=r2));
    printf("\nx3 is in range [r1,r2] : %d",(x3>=r1)&&(x3<=r2));
    printf("\nx4 is in range [r1,r2] : %d",(x4>=r1)&&(x4<=r2));
    printf("\nx5 is in range [r1,r2] : %d",(x5>=r1)&&(x5<=r2));
    printf("\nx6 is in range [r1,r2] : %d",(x6>=r1)&&(x6<=r2));
    //let's see which of these numbers are in range ]-inf,r1]u[r2,+inf[
    printf("\nx1 is in range ]-inf,r1]u[r2,+inf[ : %d",!((x1>=r1)&&(x1<=r2)));
    printf("\nx2 is in range ]-inf,r1]u[r2,+inf[ : %d",!((x2>=r1)&&(x2<=r2)));
    printf("\nx3 is in range ]-inf,r1]u[r2,+inf[ : %d",!((x3>=r1)&&(x3<=r2)));
    printf("\nx4 is in range ]-inf,r1]u[r2,+inf[ : %d",(x4<r1)||(x4>r2));
    printf("\nx5 is in range ]-inf,r1]u[r2,+inf[ : %d",(x5<r1)||(x5>r2));
    printf("\nx6 is in range ]-inf,r1]u[r2,+inf[ : %d",(x6<r1)||(x6>r2));

    // some functions in the math module
    short d1=5,d2=2;
    float d3=4.4,d4=4.6;
    float an1=45,an2=30,an3=60,an4=90;
    printf("\n%d",(short)pow(d1,d2)); // raises d1 to the d2 th power
    printf("\n%d",(short)floor(d4)); // rounds d4 to the greatest integer lower than it
    printf("\n%d",(short)ceil(d3)); // rounds d3 to the least integer greater than it
    printf("\n%d",(char)round(d3)); // rounds to the nearest integer
    printf("\ncos(60)=%f\nsin(30)=%f\ntan(45)=%f",cos(an3),sin(an2),tan(an1)); // trigonometric functions of various types
    printf("\ne^d2=%f",exp(d2)); //exponential function
    return 0;
}