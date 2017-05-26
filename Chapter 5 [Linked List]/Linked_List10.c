#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[21];
    struct student *next;
    struct student *back;
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
    pTemp->back = NULL;
    
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
            
        New->back = Current;
        Current->next = New;
    }
    return pFirst; 
}

/*------- Browse the list ------------*/
void BrowseList(struct student *pFirst)
{
    int input;
    struct student *pCurrent;
    
    if(pFirst == NULL)
        printf("List is empty!\n");
    else{
        pCurrent = pFirst;
        
        while(pCurrent != NULL)
        {
            printf("\n\n------------\n");
            printf("Name: %s", pCurrent->name);
            printf("[1] - Next\n");
            printf("[2] - Back\n");
            printf("[0] - Exit\n");
            scanf("%d", &input);
            switch(input)
            {
                case 1: pCurrent = pCurrent->next;
                        break;
                case 2: pCurrent = pCurrent->back;
                        break;
                case 0: pCurrent = NULL;
                        break;
                default: printf("Invalid Input!\n");
            }
        }
    }
}

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
                if(pTrail == NULL)
                {
                    pTemp = pCurrent;
                    pFirst = pCurrent->next;
                }
                else if(pCurrent->next == NULL) 
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
                
                break;
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
        while(pFirst->next != NULL) 
        {                                   
            pTemp = pFirst;
            pFirst = pFirst->next;
            free(pTemp);
        }
    else printf("List is empty\n");
    
    return NULL;
}

void Menu()
{
    printf("[1] - New Student\n");
    printf("[2] - Browse Records\n");
    printf("[3] - Display all Records\n");
    printf("[4] - Delete first entry\n");
    printf("[5] - Delete last entry\n");
    printf("[6] - Delete an entry\n");
    printf("[7] - Delete List\n");
    printf("[8] - Exit\n");
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
            case 2: BrowseList(pFirst);
                    break;
            case 3: DisplayAll(pFirst);
                    break;
            case 4: pFirst = DeleteFirstNode(pFirst);
                    break;
            case 5: pFirst = DeleteLastNode(pFirst);
                    break;
            case 6: pFirst = DeleteNode(pFirst);
                    break;
            case 7: pFirst = DeleteList(pFirst);
                    pFirst = NewList();
                    break;
            case 8: exit(0);
                    break;
            default: printf("Invalid Input!\n");
        }
        system("pause");
        system("cls");
    }
    return 0;
}
