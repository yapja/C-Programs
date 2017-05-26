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
struct student *NewNode()
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
struct student *LinkNewNode(struct student *pFirst, struct student* New)
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

void DeleteList(struct student *pFirst)
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
}

void Menu()
{
    printf("[1] - New Student\n");
    printf("[2] - Display All Students\n");
    printf("[3] - Delete List\n");
    printf("[4] - Exit\n");
    printf("Input: ");
}

int main()
{
    struct student *pFirst;
    struct student *pTemp;
    int input;

    pFirst = NewList();

    while(1)
    {
        Menu();
        scanf("%d", &input);
        fflush(stdin);
        switch(input)
        {
            case 1: pTemp = NewNode();
                    pFirst = LinkNewNode(pFirst, pTemp);
                    break;
            case 2: DisplayAll(pFirst);
                    break;
            case 3: DeleteList(pFirst);
                    pFirst = NewList();
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid Input!\n");
        }
        system("pause");
        system("cls");
    }
    return 0;
}

/*=========== NOTES ============
    Hurray!

    Linked-List = A list of structures connected using a pointers
    Node = A structure that contains a pointer to another structure or data
    Traverse = To move across or visit each node in the list

    It is very important to have a pointer to the first node.
    As you can see in the codes, Using the first node, you are able to access every other node.

    NULL can be used in a number of ways, like It determines when the list ends or Whether the link is empty or not.

    I highly suggest you read up the on the codes written in the course notes. (notice the similarities? >_>)
    Good Luck :D
*/
