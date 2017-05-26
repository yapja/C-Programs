#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int id;
    char name[21];
    struct student *next;
};


struct student* NewList()
{
    return NULL;
}

int main()
{
    struct student *pFirst;  //Pointer to the start of the list. Garbage value for now.
    struct student *pTemp; //Pointer to be used for operations and algorithms. Garbage value for now
  
    
/*---- Creating a list -----*/
    pFirst = NewList(); //Function version.
    
    
/*-------Making a new node ------*/
    pTemp = malloc(sizeof(struct student)); // Creates a new structure.
    pTemp->id = 11114649;                   // Initializes the values
    strcpy(pTemp->name, "Albert");
    pTemp->next = NULL; // Points to NULL instead of a garbage value.
        // at this point, you have a created an item. Filled up the values properly.
        // But it is not yet linked to the list. To link this to you empty list:
    
  
/*------ Linking the new node ---- */
    pFirst = pTemp; // Because pFirst is still an empty list. pTemp is counted as the first item of the entire list
    
    
/*-------Accessing the values created by pTemp using pFirst----*/
    printf("ID: %d\n", pFirst->id);
    printf("Name: %s\n", pFirst->name);
    
    system("pause");
    return 0;
}

/*    ==== VISUAL REPRESENTATION ====


------Creating a list -------
        pFirst ---> NULL
        
        
----Making a new node --------
        pFirst ----> NULL        ____________
                                |            |
                                |   data     |
                                |            |
                                |------------|
                                |   next     |------> NULL
                                |____________|
                                    pTemp

----Linking the new node --------
        pFirst ----------        ____________
                        |       |            |
                         -----> |   data     |
                                |            |
                                |------------|
                                |   next     |-------> NULL
                                |____________|
                                    pTemp

*/
