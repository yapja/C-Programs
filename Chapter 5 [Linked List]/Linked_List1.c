#include<stdio.h>
#include<stdlib.h>

struct student{
    int id;
    char name[21];
    struct student *next;
};



int main()
{
    struct student *pFirst;  //Pointer to the start of the list. Garbage value for now.
    struct student *pTemp; //Pointer to be used for operations and algorithms. Garbage value for now
    
    pFirst = NULL;  // This, by itself, is the most simple and easiest form of a Linked List.
                   // It is similar to saying, I made a list, and it is empty. This is also called an "Empty List"
    
    system("pause");
    return 0;
}
