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
    printf("Name: ");
    scanf("%s", pTemp->name);
    
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

void Menu()
{
    printf("[1] - New Student\n");
    printf("[2] - Display All Students\n");
    printf("[3] - Exit\n");
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
        switch(input)
        {
            case 1: pTemp = NewNode();
                    pFirst = LinkNewNode(pFirst, pTemp);
                    break;
            case 2: DisplayAll(pFirst);
                    break;
            case 3: exit(0);
                    break;
            default: printf("Invalid Input!\n");
        }
        system("pause");
        system("cls");
    }
    return 0;
}

/*=========== NOTES ============
    Now we have successfully made a dynamic linked-list!
    But we're missing one thing.....
    
    
    That is....
    
    
    
    ...Freeing up the memory space!!!!! O_O
    WORRY NOT. For it is possible. Proceed to the next file :D
*/
