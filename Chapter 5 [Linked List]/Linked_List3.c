#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int id;
    char name[21];
    struct student *next;
};

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
    printf("\n::::Input::::\n");
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
  
    
    pFirst = NewList();
    pTemp = NewNode();
    
/*------ Linking the new node ---- */
    pFirst = pTemp;
    
/*------ Adding More Nodes ----- */
    pTemp = NewNode();
    pFirst->next = pTemp;
    
    pTemp = NewNode();
    pFirst->next->next = pTemp;
    
    
/*-------Accessing the values created by pTemp using pFirst----*/
    printf("\nID: %d\n", pFirst->id);
    printf("Name: %s\n", pFirst->name);
    printf("ID: %d\n", pFirst->next->id);
    printf("Name: %s\n", pFirst->next->name);
    printf("ID: %d\n", pFirst->next->next->id);
    printf("Name: %s\n", pFirst->next->next->name);
    //Working, but very annoying and wrong. There is a more correct way to be explain in the next file
    
    system("pause");
    return 0;
}



/*    ==== VISUAL REPRESENTATION ====


------Creating a list -------
        pFirst ---> NULL
                                    pTemp = ???      
        
----Making a new node --------
        pFirst ----> NULL        ____________
                                |            |
                                |   data     |
                                |            |
                                |------------|
                                |   next     |------> NULL
                                |____________|
                                    pTemp

----Linking The New Node --------
        pFirst ----------        ____________
                        |       |            |
                         -----> |   data     |
                                |            |
                                |------------|
                                |   next     |-------> NULL
                                |____________|
                                    pTemp
                                    
----Linking the More Node --------


    1)
        pFirst ----------        ____________                    ____________
                        |       |            |                  |            |
                         -----> |   data     |                  |    data    |
                                |            |                  |            |
                                |------------|                  |------------|
                                |   next     |-------> NULL     |    next    |-----> NULL
                                |____________|                  |____________|
                                                                     pTemp
                                    
                                    
                                    
    2)
        pFirst ----------        ____________                    ____________
                        |       |            |                  |            |
                         -----> |   data     |                  |    data    |
                                |            |                  |            |
                                |------------|                  |------------|
                                |   next     |----------------->|    next    |-----> NULL
                                |____________|                  |____________|
                                                                     pTemp
                                                                
                                                                
                                                                
   3)
        pFirst ----------        ____________                    ____________                  ____________
                        |       |            |                  |            |                |            |
                         -----> |   data     |                  |    data    |                |    data    |
                                |            |                  |            |                |            |
                                |------------|                  |------------|                |------------|
                                |   next     |----------------->|    next    |-----> NULL     |    next    |------> NULL
                                |____________|                  |____________|                |____________|
                                                                                                  pTemp                        
                                                                   
                                                                   
                                                                   
   3)
        pFirst ----------        ____________                    ____________                  ____________
                        |       |            |                  |            |                |            |
                         -----> |   data     |                  |    data    |                |    data    |
                                |            |                  |            |                |            |
                                |------------|                  |------------|                |------------|
                                |   next     |----------------->|    next    |--------------->|    next    |------> NULL
                                |____________|                  |____________|                |____________|
                                                                                                  pTemp                     

*/
