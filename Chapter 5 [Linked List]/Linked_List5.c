#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int id;
    char name[21];
    struct student *next;
};

void Display(struct student *Current)
{
    printf("\nID: %d\n", Current->id);
    printf("Name: %s\n", Current->name);
}
/*---- Displays all the nodes ----*/
void DisplayAll(struct student *pFirst)
{
    struct student *Current;

    Current = pFirst;
    printf("\n\n\n::::Output::::\n");
    while(Current != NULL)
    {
        Display(Current);
        Current = Current->next;
    }
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
    fflush(stdin);
    printf("Name: ");
    gets(pTemp->name);
    fflush(stdin);
    pTemp->next = NULL;

    return pTemp;
}

/*------- Links a newly created node to the list -----*/
struct student* LinkNewNode(struct student* pFirst, struct student* New)
{
    struct student *Current;

    if(pFirst == NULL) // If list is empty
        pFirst = New;  // The new node is the start

    else{
        // If the list is not empty
        Current = pFirst; // Starts at the start...duh XD

        while(Current->next != NULL)
            Current = Current->next; // Goes to the end of the list.

        Current->next = New; // Links the new node to the end of the list.
    }
    return pFirst; // Returns the updated list
}

int main()
{
    struct student *pFirst;
    struct student *pTemp;

    printf("::::Input::::\n");
    pFirst = NewList();
    pTemp = NewNode();

/*------ Linking the First Node ---- */
    pFirst = pTemp;

/*------ Adding More Nodes ----- */
    pTemp = NewNode();
    pFirst = LinkNewNode(pFirst, pTemp);

    pTemp = NewNode();
    pFirst = LinkNewNode(pFirst, pTemp);

    pTemp = NewNode();
    pFirst = LinkNewNode(pFirst, pTemp);

/*------- Accessing the values using a loop ----*/
    DisplayAll(pFirst);

    system("pause");
    return 0;
}


/*========== VISUAL REPRESENTATION ==============
          ===== For LinkNewNode =====

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
                                                                                            |   What's the next? Is it NULL? OH LOOK IT IS. Meaning it is the last node.
            Current--------------------------------------------------------------------------

                                                                                                         ____________
                                                                                                        |            |
                                                                                                        |    data    |
                                                                                                        |            |
                                                                                                        |------------|
                                                                                                        |    next    |---> NULL
                                                                                                        |____________|
                                                                                                             New






    2)
        pFirst ---         ____________                    ____________                  ____________
                  |       |            |                  |            |                |            |
                   -----> |   data     |                  |    data    |                |    data    |
                          |            |                  |            |                |            |
                          |------------|                  |------------|                |------------|
                          |   next     |----------------->|    next    |--------------->|    next    |--------
                          |____________|                  |____________|                |____________|        |
                                                                                            /\                |
                                                                                            |                 |     LINKED!
                                                                                            |                 |
            Current--------------------------------------------------------------------------                 |
                                                                                                              |
                                                                                                         _____V______
                                                                                                        |            |
                                                                                                        |    data    |
                                                                                                        |            |
                                                                                                        |------------|
                                                                                                        |    next    |---> NULL
                                                                                                        |____________|
                                                                                                             New


                                     Now the whole thing works but with one problem. Its still static. Why?
                                        Because we have to code the new nodes! I DON"T WANT THAT. Well, we don't right?
                                            So, how do you make it....dynamicccccccc.....? Check out the next file

*/
