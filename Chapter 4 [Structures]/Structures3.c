#include<stdio.h>
#include<stdlib.h>

struct sampleTag{
    int i;
    double d;
    char ch;
};

//<return type>     <name>   <parameter)
struct sampleTag    Initialize()
{
    struct sampleTag Structure; // Declaring
    
    Structure.i = 5;
    Structure.d = 10.0;
    Structure.ch = 'A';
    
    return Structure;   //Returns the structure
}

int main()
{
    struct sampleTag receiver;
    
    receiver = Initialize(); // the variable receiver will receive all data from the function
    
    printf("%d\n%.2lf\n%c\n", receiver.i, receiver.d, receiver.ch);
    
    system("pause");
    return 0;
}
