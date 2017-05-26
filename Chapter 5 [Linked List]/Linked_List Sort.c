#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*================================================

            Structure Definitions

================================================*/
struct nodeTag
{
    int ID;
    char name[21];
    struct nodeTag *Next;
};

/*================================================

            Initialize Empty List

================================================*/
struct nodeTag * NewList()
{
    return NULL;
}

/*================================================

        Individual Display

================================================*/
void Display(struct nodeTag * pTemp)
{
    printf("ID# %d\n", pTemp->ID);
    printf("Name: %s\n", pTemp->name);
    printf("Address: %p\n", pTemp);
    printf("Next Address: %p\n\n", pTemp->Next);
}

/*================================================

        Standard Automatic Traverse

================================================*/
void Traverse(void *pFirst)
{
    struct nodeTag * pTemp;

    pTemp = pFirst;
    if(pTemp != NULL)
        while(pTemp != NULL)
        {
            Display(pTemp);
            pTemp = pTemp->Next;
        }
    else printf("No List Yet\n\n");
}

/*================================================

        Manual Traversing

================================================*/
void ManualTraverse(struct nodeTag * pFirst)
{
    struct nodeTag * pTemp;
    int input;

    pTemp = pFirst;

    if(pTemp != NULL)
        while(pTemp != NULL)
        {
            Display(pTemp);
            printf("[1]-Next || [2]-Back\nInput: ");
            scanf("%d", &input);
            if(input == 1) pTemp = pTemp->Next;
        }
}

/*================================================

        New Node

================================================*/
struct nodeTag * NewData()
{
    struct nodeTag * pTemp;

    pTemp = malloc(sizeof(struct nodeTag));

    printf("ID: ");
    scanf("%d", &pTemp->ID);
    fflush(stdin);
    printf("Name: ");
    gets(pTemp->name);
    fflush(stdin);
    pTemp->Next = NULL;

    return pTemp;
}

/*================================================

        Linking New Node Function

================================================*/
struct nodeTag * AddData(struct nodeTag * pFirst, struct nodeTag * NewData)
{
    struct nodeTag * pTemp;

    if(pFirst == NULL)
        pFirst = NewData;
    else{
        pTemp = pFirst;
        while(pTemp->Next != NULL)
            pTemp = pTemp->Next;
        printf("Linking %p to %p\n\n", pTemp, NewData);
        pTemp->Next = NewData;
    }
    return pFirst;
}





/*================================================

        Sorting Function
            Using Bubble Sort

================================================*/
struct nodeTag * Sort(struct nodeTag * pFirst)
{
    struct nodeTag * Current;
    struct nodeTag * A;
    struct nodeTag * B;
    struct nodeTag * C;
    struct nodeTag * D;
    int count = 0;
    int i;

    if(pFirst != NULL)
    {
        Current = pFirst;
        printf("Node Locations: \n");
        while(Current != NULL){
            count++;
            printf("%d: %p\n", count, Current);
            Current = Current->Next;
        }
        printf("\n");
        Current = pFirst;
        for(i = 0; i < count; i++)
        {
            while(Current->Next != NULL)
            {
                if(Current->ID > Current->Next->ID)
                {
                    if(Current == pFirst)           //----- If First Node -----
                    {
                        printf("==== Swapping First Nodes ====\n");
                        printf("pFirst:  %p\n", pFirst);
                        printf("ID:       [%d] - %p\n", Current->ID, Current);
                        printf("SwapWith: [%d] - %p\n\n", Current->Next->ID, Current->Next);

                        A = Current;                                        //     [   ]--->[   ]--->[   ]--->
                        B = Current->Next;                                  //       A        B        C
                        C = Current->Next->Next;                            //   You're gonna swap A and B

                        printf("[Before Swap]\n");
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n\n", C, C->Next);

                        //---- Swapping Pointers----
                        B->Next = A;                                       //        B--->A--->B--->C--->
                        A->Next = C;                                       //        B--->A--->C--->
                        pFirst = B;                                        //   pFirst--->B--->A--->C

                        printf("[After Swap]\n");
                        printf("pFirst:   %p\n", pFirst);
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n", C, C->Next);
                        printf("-------------------------------------\n\n");

                        if(C == NULL) break;    //---- If Less than 3 Nodes ----

                        system("pause");
                    }
                    else if(Current->Next->Next != NULL){       //----- If NOT Last Node -----
                        printf("==== Swapping ====\n");
                        printf("ID:     [%d] - %p\n", Current->ID, Current);
                        printf("SwapWith[%d] - %p\n\n", Current->Next->ID, Current->Next);

                        B = Current;                                        //            Current--->Next------>Next----->next
                        C = Current->Next;                                  //     A-------->B-------->C-------->D-------> ?
                        D = Current->Next->Next;                            //          Swap B & C

                        printf("[Before Swap]\n");
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n", C, C->Next);
                        printf("D->Next: %p\n\n", D);

                        //---- Swapping Pointers----
                        A->Next = C;
                        C->Next = B;
                        B->Next = D;

                        printf("[After Swap]\n");
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n", C, C->Next);
                        printf("D->Next: %p\n", D);
                        printf("--------------------------------------\n\n");

                        system("pause");
                    }
                    else{           //----- If Last Node -----
                        printf("==== Swapping Last Node ====\n");
                        printf("ID:     [%d] - %p\n", Current->ID, Current);
                        printf("SwapWith[%d] - %p\n\n", Current->Next->ID,  Current->Next);

                        B = Current;
                        C = Current->Next;

                        printf("[Before Swap]\n");
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n\n", C, C->Next);

                        //---- Swapping Pointers----
                        A->Next = C;
                        C->Next = B;
                        B->Next = NULL;

                        printf("[After Swap]\n");
                        printf("A->Next: %p->%p\n", A, A->Next);
                        printf("B->Next: %p->%p\n", B, B->Next);
                        printf("C->Next: %p->%p\n", C, C->Next);

                        printf("--------------------------------------\n\n");
                        system("pause");
                        break;
                    }
                }
                A = Current;
                Current = Current->Next;
                printf("Addjusting Current Pointer\n");
                printf("A:          %p\n", A);
                printf("Current:    %p\n", Current);
                printf("-------------------\n\n\n");

          // ============== FAIL SORT CODE BELOW ==================
                /*
                printf("------------\n");
                printf("A:       %p\n", A);
                printf("Current: %p\n", Current);
                printf("------------\n\n"); */



                /*
                if(Current == pFirst){   // If First Node and there are at least 3 nodes
                    if((Current->sData.strIDNo > Current->Next->sData.strIDNo) && Current->Next->Next != NULL){
                        A = Current;
                        B = Current->Next;
                        C = Current->Next->Next;

                        A->Next = C;
                        B->Next = A;
                        pFirst = B;
                    }
                    else{   //Only 2 Nodes
                        A = Current;
                        B = Current->Next;

                        pFirst = B;
                        B->Next = A;
                        A->Next = NULL;
                    }
                }
                else{//If Not First Node;
                    if(Current->Next->Next == NULL){ //If Last Possible Swappable Node
                        B = Current;
                        C = Current->Next;
                        if(B->sData.strIDNo > C->sData.strIDNo){
                            A->Next = C;
                            C->Next = B;
                            B->Next = NULL;
                        }
                    }
                }
                A = Current;
                Current = Current->Next; */
            }
            Current = pFirst;
        }
    }
    else printf(" List Empty!\n");

    return pFirst;
}






/*================================================

        List Delete Function

================================================*/
void DeleteList(struct nodeTag * pFirst)
{
    struct nodeTag * pTemp;

    while(pFirst != NULL)
    {
        pTemp = pFirst;
        pFirst = pFirst->Next;
        free(pTemp);
    }
}






/*================================================

        Menu Display

================================================*/
void Menu()
{
    printf("[1]-New List\n");
    printf("[2]-Add Student\n");
    printf("[3]-Display Students\n");
    printf("[4]-Manual Browsing\n");
    printf("[5]-Sort List\n");
    printf("[6]-Exit\n");
    printf("Input: ");
}






/*================================================

        Main Function

================================================*/
int main()
{
    struct nodeTag * pFirst;
    struct nodeTag * pTemp;
    int input;

    pFirst = NewList();

    while(1)
    {
        Menu();
        scanf("%d", &input);

        switch(input)
        {
            case 1: DeleteList(pFirst);
                    pFirst = NewList();
                    break;
            case 2: pTemp = NewData();
                    pFirst = AddData(pFirst, pTemp);
                    break;
            case 3: Traverse(pFirst); break;
            case 4: ManualTraverse(pFirst); break;
            case 5: pFirst = Sort(pFirst); break;   // Sort using Bubble Sort
            case 6: DeleteList(pFirst); exit(0);
        }
        system("pause");
        system("cls");
    }


    system("pause");
    return 0;
}
