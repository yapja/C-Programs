#include<stdio.h>
#include<stdlib.h>

void SampleFunction( struct Sample Square);

/*
struct, or structures, are just a way to group together related data/variables 
into one data type. They are called custom data types, because it's up to you, 
to customized how the structure is defined.
*/
struct Sample{
    int x;
    int y;
    int y;
};
/*
That's a sample structure definition. 
struct Sample is what you refer it, or the name of the custom data type you just defined. x,y and z are all members of it.
*/

int main()
{
    /*
    To declare a variable under the structure definition of struct Sample,
    You do this:
    
    <struct name>  <variable name>;
    */
    struct Sample Triangle;
    
    /*
    Now, a struct Sample variable is created, named "Triangle". 
    All members of this variable are also created, and like normally declared variables, 
    they contain garbage values. "Triangle" has the members x, y and z. To access each member, you do this:
    */
    
    Triangle.x = 5;  // Accessing the x member of Triangle
    Triangle.y = 10; // Accessing the y member of Triangle
    Triangle.z = 15; // Accessing the z member of Triangle
    
    /*
    You should treat structures as normal variables, meaning you pass them to functions, 
    return them from functions, or declare them like other variables like int, double, or char.
    
    To pass the structure variable Triangle to SampleFunction(), you do this:
    */
    SampleFunction( Triangle ); //passing the values of Triangle to the first paramter of SampleFunction
    
    return 0;
}

void SampleFunction( struct Sample Square)
{
    printf("Entering SampleFunction");
}
