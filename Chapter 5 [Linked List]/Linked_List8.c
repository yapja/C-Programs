
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[21];
    struct student *next;
};

void Display(struct student *Current)
{
    printf("Name: %s\n", Current->name);
}
/*---- Displays all the nodes ----*/
void DisplayAll(struct student *pFirst)
{
    struct student *Current;

    if(pFirst == NULL)
        printf("List is empty\n");
    else{
        Current = pFirst;
        printf("\n\n\n::::Output::::\n");
        while(Current != NULL)
        {
            Display(Current);
            Current = Current->next;
        }
    }
}


/*---- Creating a list -----*/
struct student* NewList()
{
    return NULL;
}

/*-------Making a new node ------*/
struct student *NewNode()
{
    struct student *pTemp;

    pTemp = malloc(sizeof(struct student));

    printf("\n\n");
    printf("New Student\n");
    printf("Name: ");
    scanf("%s", pTemp->name);

    pTemp->next = NULL;

    return pTemp;
}

/*------- Links a newly created node to the list -----*/
struct student *LinkNewNode(struct student *pFirst, struct student* New)
{
    struct student *Current;

    if(pFirst == NULL)
        pFirst = New;

    else{
        Current = pFirst;

        while(Current->next != NULL)
            Current = Current->next;

        Current->next = New;
    }
    return pFirst;
}

// Deleting first node
struct student *DeleteFirstNode(struct student *pFirst)
{
    struct student *pTemp;

    if( pFirst == NULL )
        printf("List is empty\n");
    else{
        printf("Deleting first entry\n");

        pTemp = pFirst;
        pFirst = pFirst->next;

        free(pTemp);
    }
    return pFirst;
}

// Deleting last node
struct student *DeleteLastNode( struct student *pFirst)
{
    struct student *pCurrent;

    if( pFirst == NULL)
        printf("List is empty\n");
    else{
        printf("Deleing last entry\n");

        pCurrent = pFirst;

        while( pCurrent->next->next != NULL)
            pCurrent = pCurrent->next;

        free(pCurrent->next);
        pCurrent->next = NULL;
    }

    return pFirst;
}

// Deleting a node in the list
struct student *DeleteNode(struct student *pFirst)
{
    char Name[21];
    struct student *pCurrent;
    struct student *pTrail;
    struct student *pTemp;

    if( pFirst == NULL )
        printf("List is empty\n");
    else{
        printf("Name of student to delete: ");
        scanf("%s", Name);

        pTrail = NULL;
        pCurrent = pFirst;

        while( pCurrent != NULL )
        {
            if(strcmp(pCurrent->name, Name) == 0)
            {
                printf("Name found");
                if(pTrail == NULL) // If first node
                {
                    pTemp = pCurrent;
                    pFirst = pCurrent->next;
                }
                else if(pCurrent->next == NULL) // If last node
                {
                    pTemp = pCurrent;
                    pTrail->next = NULL;
                }
                else
                {
                    pTemp = pCurrent;
                    pTrail->next = pCurrent->next;
                    pCurrent = pCurrent->next;
                }
                free(pTemp);

                break; // stop the loop if found
            }
            pTrail = pCurrent;
            pCurrent = pCurrent->next;
        }

    }
    return pFirst;
}

struct student * DeleteList(struct student *pFirst)
{
    struct student *pTemp;

    if(pFirst != NULL)
        while(pFirst->next != NULL)         //Traverses the list
        {                                   // And frees each node one by one
            pTemp = pFirst;
            pFirst = pFirst->next;
            free(pTemp);
        }
    else printf("List is empty\n");

    return NULL; // returns a NULL. An empty list;
}

void Menu()
{
    printf("[1] - New Student\n");
    printf("[2] - Display All Students\n");
    printf("[3] - Delete first entry\n");
    printf("[4] - Delete last entry\n");
    printf("[5] - Delete an entry\n");
    printf("[6] - Delete List\n");
    printf("[7] - Exit\n");
    printf("Input: ");
}

int main()
{
    struct student *pFirst;
    struct student *pTemp;
    int input;
    int index;

    pFirst = NewList();

    while(1)
    {
        Menu();
        scanf("%d", &input);
        switch(input)
        {
            case 1: pTemp = NewNode();
                    pFirst = LinkNewNode(pFirst, pTemp);
                    break;
            case 2: DisplayAll(pFirst);
                    break;
            case 3: pFirst = DeleteFirstNode(pFirst);
                    break;
            case 4: pFirst = DeleteLastNode(pFirst);
                    break;
            case 5: pFirst = DeleteNode(pFirst);
                    break;
            case 6: pFirst = DeleteList(pFirst);
                    pFirst = NewList();
                    break;
            case 7: exit(0);
                    break;
            default: printf("Invalid Input!\n");
        }
        system("pause");
        system("cls");
    }
    return 0;
}

/*=========== NOTES ============
    Node deletion

    Remember to maintain reference to nodes especially the pFirst to avoid problems
*/
