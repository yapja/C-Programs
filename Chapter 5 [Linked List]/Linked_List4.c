#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int id;
    char name[21];
    struct student *next;
};

/*-----Displaying the contents -----*/
void Display(struct student *Current)
{
    printf("\nID: %d\n", Current->id);
    printf("Name: %s\n", Current->name);
}


/*---- Creating a list -----*/
struct student* NewList()
{
    return NULL;
}


/*-------Making a new node ------*/
struct student* NewNode()
{
    struct student *pTemp;

    pTemp = malloc(sizeof(struct student));
    printf("ID: ");
    scanf("%d", &pTemp->id);              
    printf("Name: ");
    scanf("%s", pTemp->name);
    
    pTemp->next = NULL;
    
    return pTemp;
}

int main()
{
    struct student *pFirst;  
    struct student *pTemp; 
    struct student *Current;  // Pointer to be used for the currently selected node
  
    printf("::::Input::::\n");
    pFirst = NewList();
    pTemp = NewNode();
    
/*------ Linking the First Node ---- */
    pFirst = pTemp;
    
/*------ Adding More Nodes ----- */
    pTemp = NewNode();
    pFirst->next = pTemp;

    pTemp = NewNode();
    pFirst->next->next = pTemp;
    
                  // Now this is also annoying, because what if you make more than a hundred nodes?
                  // The proper way will be in the next file
    
    
/*------- Accessing the values using a loop ----*/
    Current = pFirst; // Start at the first;
    printf("\n\n\n::::Output::::\n");
    while(Current != NULL) // While it is not the end, since we know that our list will end at a NULL
    {
        Display(Current); // Displays the current node
        Current = Current->next;  // Goes to the next node
    } // This is called "Traversing the List". To Traverse, meaning to travel across, in this case, To travel across the list. Node by node
    
    system("pause");
    return 0;
}


/*========== VISUAL REPRESENTATION ==============

    1)
        pFirst ---         ____________                    ____________                  ____________
                  |       |            |                  |            |                |            |
                   -----> |   data     |                  |    data    |                |    data    |
                          |            |                  |            |                |            |
                          |------------|                  |------------|                |------------|
                          |   next     |----------------->|    next    |--------------->|    next    |------> NULL
                          |____________|                  |____________|                |____________|
                                /\ 
                                |
                                |
            Current-------------
            
    2)
        pFirst ---         ____________                    ____________                  ____________
                  |       |            |                  |            |                |            |
                   -----> |   data     |                  |    data    |                |    data    |
                          |            |                  |            |                |            |
                          |------------|                  |------------|                |------------|
                          |   next     |----------------->|    next    |--------------->|    next    |------> NULL
                          |____________|                  |____________|                |____________|
                                                                /\
                                                                |
                                                                |
            Current---------------------------------------------
                                                                                                                       
    3)
        pFirst ---         ____________                    ____________                  ____________
                  |       |            |                  |            |                |            |
                   -----> |   data     |                  |    data    |                |    data    |
                          |            |                  |            |                |            |
                          |------------|                  |------------|                |------------|
                          |   next     |----------------->|    next    |--------------->|    next    |------> NULL
                          |____________|                  |____________|                |____________|
                                                                                              /\
                                                                                              |
                                                                                              |
            Current---------------------------------------------------------------------------
                                                                      
    4)
        pFirst ---         ____________                    ____________                  ____________
                  |       |            |                  |            |                |            |
                   -----> |   data     |                  |    data    |                |    data    |
                          |            |                  |            |                |            |
                          |------------|                  |------------|                |------------|
                          |   next     |----------------->|    next    |--------------->|    next    |------> NULL
                          |____________|                  |____________|                |____________|         /\
                                                                                                               |     oops, end of list! :D
                                                                                                               |
                                                                                                               |
            Current---------------------------------------------------------------------------------------------
                        

*/
