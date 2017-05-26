/********************************************************************************************************************** 
This is to certify that this project is my own work, based on my personal efforts in studying and applying 
the concepts learned. I have constructed the functions and their respective algorithms and 
corresponding code by myself. The program was run, tested, and debugged by my own efforts. 
I further certify that I have not copied in part or whole or otherwise plagiarized the work of other students and/or persons. 
																		Yap, John Antoni B., DLSU ID# 11223677 
**********************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//This is your inventory variables.
typedef struct my_inventory
{
     int phoenixDown,elixirEssence,platinumIngot,goldenMateria,scarletite,adamantite,darkMatter,trapezohedron;
}my_inventory;

//This is your character variables.
typedef struct my_character
{
     char name[20];
     float gil, debt, bankMoney;
}my_character;

//This is your shop item variables.
typedef struct shop_item
{
     int phoenixDown,elixirEssence,platinumIngot,goldenMateria,scarletite,adamantite,darkMatter,trapezohedron;
}shop_item;

void initializeRift(my_character *character, shop_item *shopItem, my_inventory *inventory, int days);
void initializeCharacter(my_character *character);
void initializeShopItems(shop_item *shopItem, int specVar, int days);
void initializeInventory(my_inventory *inventory);
void initializeShopWindow(my_character *character, shop_item *shopItem, my_inventory *inventory, int days);
void shopBuy(my_character *character, shop_item *shopItem, my_inventory *inventory, int days);
void shopSell(my_character *character, shop_item *shopItem, my_inventory *inventory, int days);
void initializeWithdraw(my_character *character);
void initializeDeposit(my_character *character);
void initializeLoan(my_character *character);
void initializeDebt(my_character *character);
void initializeBank(my_character *character);
void initializeBonus(my_character *character);
void initializeEnding(my_character *character);

//This function is your main. This is where the program starts.
main()
{
    system("cls");
	my_character *character = malloc(sizeof(my_character));
    my_inventory *inventory = malloc(sizeof(my_inventory));
    shop_item *shopItem = malloc(sizeof(shop_item));
    int days = 1, Indicator = 1;
    char tempname[20];
    int tempid;
    char option;
    sleep(1000);
    printf("\t\t   ___ ___ _    ___   _   __  __ ___ ___ _  _   _\n");
    sleep(500);
    printf("\t\t  / __|_ _| |  / __| /_\\ |  \\/  | __/ __| || | ( )\n");
    sleep(500);
    printf("\t\t | (_ || || |_| (_ |/ _ \\| |\\/| | _|\\__ \\ __ | |/\n"); 
    sleep(500);
    printf("\t\t  \\___|___|____\\___/_/ \\_\\_|  |_|___|___/_||_|\n");   
    sleep(500); 
    printf("\t\t       __  __ ___ ___   _      ___ ___ _\n");    
    sleep(500);
    printf("\t\t      |  \\/  | __/ __| /_\\    / __|_ _| |\n");   
    sleep(500);
    printf("\t\t      | |\\/| | _| (_ |/ _ \\  | (_ || || |__\n"); 
    sleep(500);
    printf("\t\t      |_|  |_|___\\___/_/ \\_\\  \\___|___|____|\n");
    sleep(500);
    printf("\t\t    _   _____   _____ _  _ _____ _   _ ___ ___\n");
    sleep(500);
    printf("\t\t   /_\\ |   \\ \\ / / __| \\| |_   _| | | | _ \\ __|\n");
    sleep(500);
    printf("\t\t  / _ \\| |) \\ V /| _|| .` | | | | |_| |   / _|\n"); 
    sleep(500);
    printf("\t\t /_/ \\_\\___/ \\_/ |___|_|\\_| |_|  \\___/|_|_\\___|\n");
    sleep(500);
    printf("\n\n\n\n \t\t\t\t[S]tart a New Game\n\n\t\t\t\t[Q]uit Game");

    printf("\n\n\n\n\nYour Choice: ");
    while(Indicator)
    {
		option = getch();
		if(option == 'S' || option == 's')
		{
            //system("MPmusic.mp3");
			system("cls");
			Indicator = 0;
			printf("Objective:\n\nAt the start of the game, You will have 20,000Gil on hand and a 50,000Gil debt\nfrom the Merchant of the Rift. ");
			printf("You have 30 days to earn enough money to pay off that debt and have money remaining on your hand to win the game.\n");
			system("pause");
			system("cls");
			printf("Enter Name: ");
			fflush(stdin);
			fgets(tempname,sizeof(tempname),stdin);
			strcpy(character->name,tempname);
			initializeCharacter(character);
			initializeInventory(inventory);
			system("cls");
			printf("Your name is %s\n\n",character->name);
			printf("Gil: %.2f\t\t\t\t\t     ##### \n",character->gil);
			printf("Debt: %.2f\t\t\t\t\t    #### _\\_  ________ \n",character->debt);
			printf("Bank Money: %.2f\t\t\t\t    ##=-[.].]| \\       \\ \n",character->bankMoney);
			printf("\t\t\t\t\t\t    #(    _\\ |  |------| \n");
			printf("\t\t\t\t\t\t     #   __| |  |||||||| \n");
			printf("\t\t\t\t\t\t      \\  _/  |  |||||||| \n");
			printf("\t\t\t\t\t\t   .--'--'-. |  | ____ | \n");
			printf("\t\t\t\t\t\t  / __      `|__|[o__o]| \n");
			printf("\t\t\t\t\t\t_(____nm_______ /____\\____  \n\n\n\n\n\n\n\n\n\n\n");
			system("pause");
			initializeRift(character, shopItem, inventory, days);}
		else if(option == 'Q' || option == 'q')
		{
			system("cls");
			Indicator = 0;
			printf("\n\n\n\n\n\t             .-.                          .-.          .-    .-.\n");
            printf("\t      / (_)     .--.    .-    .--.-'     .---;`-'     (_) )-.\n");
            printf("\t     /         /    )`-'     (  (_)     (   (_)          /   \\\n ");
            printf("\t    /         /    /          `-.        )--            /     )\n");
            printf("\t .-/.    .-. (    /         _    )      (      /     .-/  `--'\n");
            printf("\t(_/ `-._.     `-.'         (_.--'       `\\___.'     (_/     `-._)\n ");
		}
	}
    getch();
}

//This function initializes the structure of the user's character.
void initializeCharacter(my_character *character) 
{
    character->gil = 20000.0;
    character->debt = 50000.0;
    character->bankMoney = 0.0;
}

//This function initializes the structure of the inventory of the user's character.
void initializeInventory(my_inventory *inventory) 
{
    inventory->phoenixDown = 0;
    inventory->elixirEssence = 0;
    inventory->platinumIngot = 0;
    inventory->goldenMateria = 0;
    inventory->scarletite = 0;
    inventory->adamantite = 0;
    inventory->darkMatter = 0;
    inventory->trapezohedron = 0;
}

//This function initializes the Main Rift. This is where the user inputs where he should go. 
void initializeRift(my_character *character, shop_item *shopItem, my_inventory *inventory, int days) 
{    
     while(days <= 30)
	{    
		int Indicator = 1, eventTrigger;
		char answer;
		system("cls");
		printf("Gilgamesh: Where should my travels take me to?\n\n");
		printf("[1]Tycoon's Meteor's Mineral\t\t\tDay #%d\n",days);
		printf("[2]Pulsian Restoratives\t\t\t\tGil: %.2f\n",character->gil);
		printf("[3]Archadian Luxuries\t\t\t\tDebt: %.2f\n",character->debt);
		printf("[4]Cid's Magical Escapades\n");
		printf("[5]Gaian Gratitudes\t\t\t\t[Q]uit\n");
		printf("[6]Riches and Mineral of Spira\n");
		printf("[7]Go and see the Merchant of the Rift\n");
		printf("\nYour choice: ");
		while(Indicator)
		{
			scanf(" %c", &answer);
			answer = tolower(answer);
            switch(answer)
			{
				case '1':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 1, days);
					initializeShopWindow(character, shopItem, inventory, days);
					eventTrigger = 1+rand()%4;
					if(eventTrigger == 3)
						initializeBonus(character);
                    days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '2':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 2, days);
					initializeShopWindow(character, shopItem, inventory, days);
					days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '3':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 3, days);
					initializeShopWindow(character, shopItem, inventory, days);
					days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '4':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 4, days);
					initializeShopWindow(character, shopItem, inventory, days);
					days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '5':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 5, days);
					initializeShopWindow(character, shopItem, inventory, days);
					days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '6':
				{
					Indicator = 0;
					initializeShopItems(shopItem, 6, days);
					initializeShopWindow(character, shopItem, inventory, days);
					days++;
					character->debt = character->debt + (character->debt * 0.15);
					character->bankMoney = character->bankMoney + (character->bankMoney * 0.1);
					break;
				}
				case '7':
				{
					Indicator = 0;
					initializeBank(character);
					break;
				}
				case 'q':
				{
					Indicator = 0;
                    initializeEnding(character);
                    break;
				}
				default: printf("Invalid Input!\nYour choice: ");
			}
		}
	}
    initializeEnding(character);
}

//This function initializes the computed price per item and if they are sold out.
void initializeShopItems(shop_item *shopItem, int specVar, int days)
{
	system("cls");
    int rand1,rand2,rand3,rand4,rand5,rand6,rand7,rand8;
    srand(time(NULL));
    rand1 = 1+rand()%3;
    rand2 = 1+rand()%3;
    rand3 = 1+rand()%3;
    rand4 = 1+rand()%3;
    rand5 = 1+rand()%3;
    rand6 = 1+rand()%3;
    rand7 = 1+rand()%3;
    rand8 = 1+rand()%3;
    if(specVar == 1)
    {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t_____________________________\n\t\t\t| Tycoon's Meteor's Mineral |\n\t\t\t_____________________________");
		if(rand1 != 2)
                 shopItem->phoenixDown = 500+rand()%701;
        else shopItem->phoenixDown = 0;
		if(rand2 != 2)
                 shopItem->elixirEssence = 1500+rand()%601;
        else shopItem->phoenixDown = 0;
		if(rand3 != 2)
			shopItem->platinumIngot = 5000+rand()%2001;
		else shopItem->platinumIngot = 0;
		if(rand4 != 2)
			shopItem->goldenMateria = 3500+rand()%2001;
		else shopItem->goldenMateria = 0;
		if(rand5 != 2)
			shopItem->scarletite = 8000+rand()%4001;
		else shopItem->scarletite = 0;
		if(rand6 != 2)
			shopItem->adamantite = 15000+rand()%15001;
		else shopItem->adamantite = 0;
		if(rand7 != 2)
			shopItem->darkMatter = 40000+rand()%30001;
		else shopItem->darkMatter = 0;
        shopItem->trapezohedron = 35000+rand()%30001;          
    }
    else if(specVar == 2)
    {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t   ________________________\n\t\t\t   | Pulsian Restoratives |\n\t\t\t   ________________________");
        shopItem->phoenixDown = 300+rand()%501;
        shopItem->elixirEssence = 1000+rand()%701;
		if(rand3 != 2)
			shopItem->platinumIngot = 5000+rand()%2001;
		else shopItem->platinumIngot = 0;
		if(rand4 != 2)
			shopItem->goldenMateria = 3500+rand()%2001;
		else shopItem->goldenMateria = 0;
		if(rand5 != 2)
			shopItem->scarletite = 8000+rand()%4001;
		else shopItem->scarletite = 0;
		if(rand6 != 2)
			shopItem->adamantite = 15000+rand()%15001;
		else shopItem->adamantite = 0;
		if(rand7 != 2)
			shopItem->darkMatter = 40000+rand()%30001;
		else shopItem->darkMatter = 0;
		if(rand8 != 2)
			shopItem->trapezohedron = 60000+rand()%30001;          
		else shopItem->trapezohedron = 0;
    }
    else if(specVar == 3)
    {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    _____________________\n\t\t\t    | Arcadian Luxuries |\n\t\t\t    _____________________");
		if(rand1 != 2)
                 shopItem->phoenixDown = 500+rand()%701;
        else shopItem->phoenixDown = 0;
		if(rand2 != 2)
                 shopItem->elixirEssence = 1500+rand()%601;
        else shopItem->phoenixDown = 0;
		shopItem->platinumIngot = 4500+rand()%1501;
		if(rand4 != 2)
			shopItem->goldenMateria = 3500+rand()%2001;
		else shopItem->goldenMateria = 0;
		if(rand5 != 2)
			shopItem->scarletite = 8000+rand()%4001;
		else shopItem->scarletite = 0;
		if(rand6 != 2)
			shopItem->adamantite = 15000+rand()%15001;
		else shopItem->adamantite = 0;
		if(rand7 != 2)
			shopItem->darkMatter = 40000+rand()%30001;
		else shopItem->darkMatter = 0;
		if(rand8 != 2)
			shopItem->trapezohedron = 60000+rand()%30001;          
		else shopItem->trapezohedron = 0;
    }
    else if(specVar == 4)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t  ___________________________\n\t\t\t  | Cid's Magical Escapades |\n\t\t\t  ___________________________");
		if(rand1 != 2)
                 shopItem->phoenixDown = 500+rand()%701;
        else shopItem->phoenixDown = 0;
		if(rand2 != 2)
                 shopItem->elixirEssence = 1500+rand()%601;
        else shopItem->phoenixDown = 0;
		if(rand3 != 2)
			shopItem->platinumIngot = 5000+rand()%2001;
		else shopItem->platinumIngot = 0;
		shopItem->goldenMateria = 3000+rand()%2001;
		if(rand5 != 2)
			shopItem->scarletite = 8000+rand()%4001;
		else shopItem->scarletite = 0;
		if(rand6 != 2)
			shopItem->adamantite = 15000+rand()%15001;
		else shopItem->adamantite = 0;
		if(rand7 != 2)
			shopItem->darkMatter = 40000+rand()%30001;
		else shopItem->darkMatter = 0;
		if(rand8 != 2)
			shopItem->trapezohedron = 60000+rand()%30001;          
		else shopItem->trapezohedron = 0;
    }
    else if(specVar == 5)
    {
	    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ____________________\n\t\t\t    | Gaian Gratitudes |\n\t\t\t    ____________________");
		if(rand1 != 2)
                 shopItem->phoenixDown = 500+rand()%701;
        else shopItem->phoenixDown = 0;
		if(rand2 != 2)
                 shopItem->elixirEssence = 1500+rand()%601;
        else shopItem->phoenixDown = 0;
		if(rand3 != 2)
			shopItem->platinumIngot = 5000+rand()%2001;
		else shopItem->platinumIngot = 0;
		if(rand4 != 2)
			shopItem->goldenMateria = 3500+rand()%2001;
		else shopItem->goldenMateria = 0;
		shopItem->scarletite = 5000+rand()%5001;
		if(rand6 != 2)
			shopItem->adamantite = 15000+rand()%15001;
		else shopItem->adamantite = 0;
		if(rand7 != 2)
			shopItem->darkMatter = 40000+rand()%30001;
		else shopItem->darkMatter = 0;
		if(rand8 != 2)
			shopItem->trapezohedron = 60000+rand()%30001;          
		else shopItem->trapezohedron = 0;
    }
    else if(specVar == 6)
    {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t________________________________\n\t\t\t| Riches and Minerals of Spira |\n\t\t\t________________________________");
		if(rand1 != 2)
                 shopItem->phoenixDown = 500+rand()%701;
        else shopItem->phoenixDown = 0;
		if(rand2 != 2)
                 shopItem->elixirEssence = 1500+rand()%601;
        else shopItem->phoenixDown = 0;
		if(rand3 != 2)
			shopItem->platinumIngot = 5000+rand()%2001;
		else shopItem->platinumIngot = 0;
		if(rand4 != 2)
			shopItem->goldenMateria = 3500+rand()%2001;
		else shopItem->goldenMateria = 0;
		if(rand5 != 2)
			shopItem->scarletite = 8000+rand()%4001;
		else shopItem->scarletite = 0;
		shopItem->adamantite = 9500+rand()%10501;
		shopItem->darkMatter = 22000+rand()%28001;
		if(rand8 != 2)
			shopItem->trapezohedron = 60000+rand()%30001;          
		else shopItem->trapezohedron = 0;
    }
    getch();
    system("cls");
}

//This function initializes shop window, and allows the user what to do depeding on the input (Buy, sell or leave).
void initializeShopWindow(my_character *character, shop_item *shopItem, my_inventory *inventory, int days)
{
    char option;
    while(option != 'l')
    {
		system("cls");
		printf("Shopkeeper: Welcome! How may I be of service?\n\n"); 
		printf("Item \t\t\t On hand \t Price\n");
		if(shopItem->phoenixDown != 0)
			printf("[1] Phoenix Down \t  %d \t\t %d G\n",inventory->phoenixDown,shopItem->phoenixDown);
		else printf("[X]Phoenix Down \t  %d \t\t Sold Out\n",inventory->phoenixDown);
		if(shopItem->elixirEssence != 0)
			printf("[2] Elixir Essence \t  %d \t\t %d G \t Day #%d\n",inventory->elixirEssence,shopItem->elixirEssence,days);
		else printf("[X]Elixir Essense \t  %d \t\t Sold Out \t Day #%d\n",inventory->elixirEssence, days);
		if(shopItem->platinumIngot != 0)
			printf("[3] Platinum Ingot \t  %d \t\t %d G \t Gil: %.2f\n",inventory->platinumIngot,shopItem->platinumIngot,character->gil);
		else printf("[X] Platinum Ingot \t  %d \t\t Sold Out \t Gil: %.2f\n",inventory->platinumIngot,character->gil);
		if(shopItem->goldenMateria != 0)
			printf("[4] Golden Materia \t  %d \t\t %d G \t Debt: %.2f\n",inventory->goldenMateria,shopItem->goldenMateria,character->debt);
		else printf("[X] Golden Materia \t  %d \t\t Sold Out \t Debt: %.2f\n",inventory->goldenMateria, character->debt);
		if(shopItem->scarletite != 0)
			printf("[5] Scarletite \t\t  %d \t\t %d G\n",inventory->scarletite,shopItem->scarletite);
		else printf("[X] Scarletite \t\t  %d \t\t Sold Out\n",inventory->scarletite);
		if(shopItem->adamantite != 0)
			printf("[6] Adamantite \t\t  %d \t\t %d G\n",inventory->adamantite,shopItem->adamantite);
		else printf("[X] Adamantite \t\t  %d \t\t Sold Out\n",inventory->adamantite);
		if(shopItem->darkMatter != 0)
			printf("[7] Dark Matter \t  %d \t\t %d G\n",inventory->darkMatter,shopItem->darkMatter);
		else printf("[X] Dark Matter \t  %d \t\t Sold Out\n",inventory->darkMatter);
		if(shopItem->trapezohedron != 0)
			printf("[8] Trapezohedron \t  %d \t\t %d G\n\n",inventory->trapezohedron,shopItem->trapezohedron);
		else printf("[X] Trapezohedron \t  %d \t\t Sold Out\n\n",inventory->trapezohedron);
		printf("\n[B]uy\t\t[S]ell\t\t[L]eave\n");
		printf("Option: ");
			option = getch();
			option = tolower(option);
			switch(option)
			{
				case 'b':
				{
					shopBuy(character, shopItem, inventory, days);
					break;
				}
				case 's':
				{
					shopSell(character, shopItem, inventory, days);
					break;
				}
				case 'l': break;
				default:printf("Invalid input!\nOption: ");
			}
		}
}

//This function initializes buying window. This enables the user to input what item he wants to buy(if aren't sold out) and how much of that certain item he wishes to.
void shopBuy(my_character *character, shop_item *shopItem, my_inventory *inventory, int days) 
{
    int quantity;
    char option;
    system("cls");
    printf("Shopkeeper: Welcome! How may I be of service?\n\n"); 
    printf("Item \t\t\t On hand \t Price\n");
    if(shopItem->phoenixDown != 0)
		printf("[1] Phoenix Down \t  %d \t\t %d G\n",inventory->phoenixDown,shopItem->phoenixDown);
    else printf("[X]Phoenix Down \t  %d \t\t Sold Out\n",inventory->phoenixDown);
	if(shopItem->elixirEssence != 0)
		printf("[2] Elixir Essence \t  %d \t\t %d G \t Day #%d\n",inventory->elixirEssence,shopItem->elixirEssence,days);
    else printf("[X]Elixir Essense \t  %d \t\t Sold Out \t Day #%d\n",inventory->elixirEssence, days);
    if(shopItem->platinumIngot != 0)
		printf("[3] Platinum Ingot \t  %d \t\t %d G \t Gil: %.2f\n",inventory->platinumIngot,shopItem->platinumIngot,character->gil);
    else printf("[X] Platinum Ingot \t  %d \t\t Sold Out \t Gil: %.2f\n",inventory->platinumIngot,character->gil);
    if(shopItem->goldenMateria != 0)
		printf("[4] Golden Materia \t  %d \t\t %d G \t Debt: %.2f\n",inventory->goldenMateria,shopItem->goldenMateria,character->debt);
    else printf("[X] Golden Materia \t  %d \t\t Sold Out \t Debt: %.2f\n",inventory->goldenMateria, character->debt);
    if(shopItem->scarletite != 0)
		printf("[5] Scarletite \t\t  %d \t\t %d G\n",inventory->scarletite,shopItem->scarletite);
    else printf("[X] Scarletite \t\t  %d \t\t Sold Out\n",inventory->scarletite);
    if(shopItem->adamantite != 0)
		printf("[6] Adamantite \t\t  %d \t\t %d G\n",inventory->adamantite,shopItem->adamantite);
    else printf("[X] Adamantite \t\t  %d \t\t Sold Out\n",inventory->adamantite);
	if(shopItem->darkMatter != 0)
		printf("[7] Dark Matter \t  %d \t\t %d G\n",inventory->darkMatter,shopItem->darkMatter);
    else printf("[X] Dark Matter \t  %d \t\t Sold Out\n",inventory->darkMatter);
    if(shopItem->trapezohedron != 0)
		printf("[8] Trapezohedron \t  %d \t\t %d G\n\n",inventory->trapezohedron,shopItem->trapezohedron);
    else printf("[X] Trapezohedron \t  %d \t\t Sold Out\n\n",inventory->trapezohedron);
	printf("What would you like to buy?: ");
    while(option != 0)
    {
		option = getch();
		option = tolower(option);
		switch(option)
		{
			case '1':
			{
				if(shopItem->phoenixDown != 0)
				{
					printf("\nHow much Phoenix Down would you like to buy? ");
					scanf("%d", &quantity);                                
					if(character->gil >= (shopItem->phoenixDown * quantity) && quantity >= 0)
					{
						inventory->phoenixDown+=quantity;
						character->gil-=shopItem->phoenixDown * quantity ;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Phoenix Down is sold out!\n");
					getch();
				}
				option = 0;
			break;
			}
			case '2':
			{
				if(shopItem->elixirEssence != 0)
				{
					printf("\nHow much Elixir Essence would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->elixirEssence * quantity) && quantity >= 0)
					{
						inventory->elixirEssence+=quantity;
						character->gil-=shopItem->elixirEssence * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Elixir Essence is sold out!\n");
					getch();
				}
				option = 0;
			break;
			}
			case '3':
			{
				if(shopItem->platinumIngot != 0)
				{
					printf("\nHow much Platinum Ingot would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->platinumIngot * quantity ) && quantity >= 0)
					{
						inventory->platinumIngot+=quantity;
						character->gil-=shopItem->platinumIngot * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Platinum Ingot is sold out!\n");
					getch();
				}
				option = 0;
				break;
			}
			case '4':
			{
				if(shopItem->goldenMateria != 0)
				{
					printf("\nHow much Golden Materia would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil > (shopItem->goldenMateria * quantity) && quantity >= 0)
					{
						inventory->goldenMateria+=quantity;
						character->gil-=shopItem->goldenMateria * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Golden Materia is sold out!\n");
					getch();
				}
				option = 0;
				break;
			}
			case '5':
			{
				if(shopItem->scarletite != 0)
				{
					printf("\nHow much Scarletite would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->scarletite * quantity) && quantity >= 0)
					{
					inventory->scarletite+=quantity;
					character->gil-=shopItem->scarletite * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Scarletite is sold out!\n");
					getch();
				}
				option = 0;
				break;
			}
			case '6':
			{
				if(shopItem->adamantite != 0)
				{
					printf("\nHow much Adamantite would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->adamantite * quantity) && quantity >= 0)
					{
						inventory->adamantite+=quantity;
						character->gil-=shopItem->adamantite * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Adamantite is sold out!\n");
					getch();
				}
				option = 0;
				break;
			}
			case '7':
			{
				if(shopItem->darkMatter != 0)
				{
					printf("\nHow much Dark Matter would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->darkMatter * quantity) && quantity >= 0)
					{
					inventory->darkMatter+=quantity;
					character->gil-=shopItem->darkMatter * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Dark Matter is sold out!\n");
					getch();
				}
				option = 0;
				break;
			}
			case '8':
			{
				if(shopItem->trapezohedron != 0)
				{
					printf("\nHow much Trapezohedron would you like to buy? ");
					scanf("%d", &quantity);
					if(character->gil >= (shopItem->trapezohedron * quantity) && quantity >= 0)
					{
					inventory->trapezohedron+=quantity;
					character->gil-=shopItem->trapezohedron * quantity;
					}
					else
					{
						printf("Not enough Gil!\n");
						getch();
					}
				}
				else
				{
					printf("Trapezohedron is sold out!\n");
					getch();
				}
				option = 0;
                }
			default:
            {
                printf("Invalid Input!\nWhat would you like to buy? ");
			    getch();
            }
		}
	}
}

//This function initializes selling window. This enables the user to input what item he wants to sell(if aren't sold out and is available from his inventory) and how much of that certain item he wishes to.
void shopSell(my_character *character, shop_item *shopItem, my_inventory *inventory, int days)
{
    int quantity;
    char option;
    system("cls");
    printf("Shopkeeper: Welcome! How may I be of service?\n\n"); 
    printf("Item \t\t\t On hand \t Price\n");
    if(shopItem->phoenixDown != 0)
		printf("[1] Phoenix Down \t  %d \t\t %d G\n",inventory->phoenixDown,shopItem->phoenixDown);
    else printf("[X]Phoenix Down \t  %d \t\t Sold Out\n",inventory->phoenixDown);
	if(shopItem->elixirEssence != 0)
		printf("[2] Elixir Essence \t  %d \t\t %d G \t Day #%d\n",inventory->elixirEssence,shopItem->elixirEssence,days);
    else printf("[X]Elixir Essense \t  %d \t\t Sold Out \t Day #%d\n",inventory->elixirEssence, days);
    if(shopItem->platinumIngot != 0)
		printf("[3] Platinum Ingot \t  %d \t\t %d G \t Gil: %.2f\n",inventory->platinumIngot,shopItem->platinumIngot,character->gil);
    else printf("[X] Platinum Ingot \t  %d \t\t Sold Out \t Gil: %.2f\n",inventory->platinumIngot,character->gil);
    if(shopItem->goldenMateria != 0)
		printf("[4] Golden Materia \t  %d \t\t %d G \t Debt: %.2f\n",inventory->goldenMateria,shopItem->goldenMateria,character->debt);
    else printf("[X] Golden Materia \t  %d \t\t Sold Out \t Debt: %.2f\n",inventory->goldenMateria, character->debt);
    if(shopItem->scarletite != 0)
		printf("[5] Scarletite \t\t  %d \t\t %d G\n",inventory->scarletite,shopItem->scarletite);
    else printf("[X] Scarletite \t\t  %d \t\t Sold Out\n",inventory->scarletite);
    if(shopItem->adamantite != 0)
		printf("[6] Adamantite \t\t  %d \t\t %d G\n",inventory->adamantite,shopItem->adamantite);
    else printf("[X] Adamantite \t\t  %d \t\t Sold Out\n",inventory->adamantite);
	if(shopItem->darkMatter != 0)
		printf("[7] Dark Matter \t  %d \t\t %d G\n",inventory->darkMatter,shopItem->darkMatter);
    else printf("[X] Dark Matter \t  %d \t\t Sold Out\n",inventory->darkMatter);
    if(shopItem->trapezohedron != 0)
		printf("[8] Trapezohedron \t  %d \t\t %d G\n\n",inventory->trapezohedron,shopItem->trapezohedron);
    else printf("[X] Trapezohedron \t  %d \t\t Sold Out\n\n",inventory->trapezohedron);
    printf("What would you like to sell?: ");
    while(option != 0)
    {
		option = getch();
		option = tolower(option);
		switch(option)
		{
			case '1':
			{
				if(shopItem->phoenixDown != 0)
				{
					printf("\nHow much Phoenix Down would you like to sell? ");
					scanf("%d", &quantity);                                
					if(inventory->phoenixDown >= quantity && quantity >= 0)
					{
						inventory->phoenixDown-=quantity;
						character->gil+=shopItem->phoenixDown * quantity ;
					}
					else
					{
						printf("Not enough Phoenix Down!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Phoenix Down today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '2':
			{
				if(shopItem->elixirEssence != 0)
				{
                    printf("\nHow much Elixir Essence would you like to sell? ");
                    scanf("%d", &quantity);
					if(inventory->elixirEssence >= quantity && quantity >= 0)
					{                     
						inventory->elixirEssence-=quantity;	
						character->gil+=shopItem->elixirEssence * quantity;
					}
					else
					{
						printf("Not enough Elixir Essence!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Elixir Essence today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '3':
			{
				if(shopItem->platinumIngot != 0)
				{
					printf("\nHow much Platinum Ingot would you like to sell? ");
					scanf("%d", &quantity);
					if(inventory->platinumIngot >= quantity && quantity >= 0)
					{
						inventory->platinumIngot-=quantity;
						character->gil+=shopItem->platinumIngot * quantity;
					}
					else
					{
						printf("Not enough Platinum Ingot!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Platinum Ingot today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '4':
			{
				if(shopItem->goldenMateria != 0)
				{
					printf("\nHow much Golden Materia would you like to sell? ");
					scanf("%d", &quantity);
					if(inventory->goldenMateria >= quantity && quantity >= 0)
					{
						inventory->goldenMateria-=quantity;
						character->gil+=shopItem->goldenMateria * quantity;
					}
					else
					{
						printf("Not enough Golden Materia!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Golden Materia today!");
					getch();
				}
			option = 0;
			break;
			}
			case '5':
			{
				if(shopItem->scarletite != 0)
				{
					printf("\nHow much Scarletite would you like to sell? ");
					scanf("%d", &quantity);
					if(inventory->scarletite >= quantity && quantity >= 0)
					{
						inventory->scarletite-=quantity;
						character->gil+=shopItem->scarletite * quantity;
					}
					else
					{
						printf("Not enough Scarletite!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Scarletite today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '6':
			{
				if(shopItem->adamantite != 0)
				{
					printf("\nHow much Adamantite would you like to buy? ");
					scanf("%d", &quantity);
					if(inventory->adamantite >= quantity && quantity >= 0)
					{
						inventory->adamantite-=quantity;
						character->gil+=shopItem->adamantite * quantity;
					}
					else
					{
						printf("Not enough Adamantite!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Adamantite today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '7':
			{
				if(shopItem->darkMatter != 0)
				{
					printf("\nHow much Dark Matter would you like to sell? ");
					scanf("%d", &quantity);
					if(inventory->darkMatter >= quantity && quantity >= 0)
					{
					inventory->darkMatter-=quantity;
					character->gil+=shopItem->darkMatter * quantity;
					}
					else
					{
						printf("Not enough Dark Matter!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Dark Matter today!\n");
					getch();
				}
			option = 0;
			break;
			}
			case '8':
			{
				if(shopItem->trapezohedron != 0)
				{
					printf("\nHow much Trapezohedron would you like to sell? ");
					scanf("%d", &quantity);
					if(inventory->trapezohedron >= quantity && quantity >= 0)
					{
					inventory->trapezohedron-=quantity;
					character->gil+=shopItem->trapezohedron * quantity;
					}
					else
					{
						printf("Not enough Trapezohedron!\n");
						getch();
					}
				}
				else
				{
					printf("I don't buy Trapezohedron today!\n");
					getch();
				}
			option = 0;
			break;
            }
			default:
			{
				printf("Invalid Input!\n");
				getch();
			}
        }
	}
}

//This function initializes the Merchant of the Rift, asks the user whether he wants to withdraw, deposit, loan or pay debt.
void initializeBank(my_character *character) 
{
    char option;
    system("cls");
    printf("Merchant of the Rift: What do you want to do?\n\n");
    printf("[1]Withdraw\n");
    printf("[2]Deposit\n");
    printf("[3]Loan\n");
    printf("[4]Pay debt\n");
    printf("[5]Leave\n");
    printf("\nYour choice: ");
    while(option != '5')
    {
        scanf(" %c", &option);
		switch(option)
		{
			case '1':
			{
				initializeWithdraw(character);
				break;
			}
			case '2':
			{
				initializeDeposit(character);
				break;
			}
			case '3':
			{
				initializeLoan(character);
				break;
			}
			case '4':
			{
				initializeDebt(character);
				break;
			}
			case '5':  break;
			default: printf("Invalid Input!\nYour choice: ");
		}
	}
}

//This function initializes your transaction when you withdraw. It allows the user to get money from his bank unto his hand.
void initializeWithdraw(my_character *character)
{
    float withdraw;
    system("cls");
    printf("Merchant of the Rift: How much would you like to withdraw?\n");
    printf("Gil in bank: %.2f\n", character->bankMoney);
    printf("Gil in hand: %.2f\n\n", character->gil);
    printf("Enter amount: ");
    scanf("%f", &withdraw);
    if(character->bankMoney >= withdraw)
    {
		system("cls");
		character->bankMoney = character->bankMoney - withdraw;
		printf("Gil in bank: %.2f\n", character->bankMoney);
		character->gil = character->gil + withdraw;
		printf("Gil in hand: %.2f\n", character->gil);
	}
	system("pause");
	initializeBank(character);
}

//This function initializes your transaction when you deposit. It allows the user to put money on his bank which, in return, increases by 10% each day.
void initializeDeposit(my_character *character)
{
    float deposit;
    system("cls");
    printf("Merchant of the Rift: How much would you like to deposit?\n");
    printf("Gil in bank: %.2f\n", character->bankMoney);
    printf("Gil in hand: %.2f\n\n", character->gil);
    printf("Enter amount: ");
    scanf("%f", &deposit);
    if(character->gil >= deposit)
    {
		system("cls");
		character->bankMoney = character->bankMoney + deposit;
		printf("Gil in bank: %.2f\n", character->bankMoney);
		character->gil = character->gil - deposit;
		printf("Gil in hand: %.2f\n", character->gil);
	}
    system("pause");
    initializeBank(character);
}

//This function initializes your transaction when you loan, allowing the user to borrow money from the bank and result to an additional debt equal to the borrowed money.
void initializeLoan(my_character *character)
{
    float loan;
    system("cls");
    printf("Merchant of the Rift: How much would you like to loan?\n");
    printf("Enter amount: ");
    scanf("%f", &loan);
    if(loan >= 0)
    {
  		character->gil = character->gil + loan;
		character->debt = character->debt + loan;
		printf("\nYou have now: %.2f Gil and %.2f debt\n", character->gil, character->debt);
    }
    system("pause");
    initializeBank(character);
}
//This function initializes your transaction when you pay debt, which allows the user to pay his debt completely or partially. Debt increases by 15% each day.
void initializeDebt(my_character *character)
{
    float payDebt;
    char option;
    system("cls");
    printf("Merchant of the Rift: How would you like to pay?\n");
    printf("[1]Pay debt completely\n");
    printf("[2]Pay debt partially\n");
    printf("[3]Go back\n");
    printf("Your response: ");
    while(option != '3')
	{
        scanf(" %c", &option);
		switch(option)
		{
			case '1':
			{
				if(character->gil >= character->debt)
				{
					character->gil = character->gil - character->debt;
					printf("\nYou have payed your debt completely.\nYou still have %.2f Gil\n", character->gil);
				}
			else printf("Not enough Gil!\n");
			system("pause");
			initializeBank(character);
			break;
			}
			case '2':
			{
				system("cls");
				printf("Merchant of the Rift: How much would you like to pay?\n");
				printf("Enter amount: ");
				scanf("%f", &payDebt);
				if(character->gil >= payDebt && payDebt >= 0)
				{
					character->debt = character->debt - payDebt;
					character->gil = character->gil - payDebt;
					printf("\n\nYou still have %.2f Gil and %.2f debt\n", character->gil, character->debt);
				}
				else printf("Not enough Gil!\n");
			system("pause");
	    	break;
			}
			case '3': break;
			default: printf("Invalid Input!\nYour response: ");
        }
	}		
	initializeBank(character);
}

//This function initializes the bonus event. It allows the input whether he wants to choose rock, paper or scissors. Winning this event will award the user a certain amount of Gil. 
void initializeBonus (my_character *character)
{
     system("cls");
     char player;
     int computer, gil, Indicator = 1;
     printf("Event Host: WHOAH! I, your host, is hosting a Jack en Poy event!\nWinner will receive an amount of Gil, ranging from 1 - 15000G!\n");
     printf("Choices: [R]ock\t[P]aper\t[S]cissors\n\n");
     {
     while(Indicator != 0)
     {
     printf("You: ");
     scanf(" %c", &player);
     player = tolower(player);
     printf("Computer: ");
     srand ( time(NULL) ); 
     computer = 1+rand()%3;
     {
         if(computer == 1)
              printf("Rock\n");
         else if(computer == 2)
              printf("Scissors\n");
         else
              printf("Paper\n");
		if(player == 'r' && computer == 1 || player == 'p' && computer == 3 || player == 's' && computer == 1)
		{
          		  printf("It's a tie!\n");
				  Indicator = 1;
        }
	    else if(player == 'p' && computer == 1 || player == 'r' && computer == 2 || player == 's' && computer == 3)
		{
				printf("You win!\n");
				character->gil = character->gil + (gil = 1+rand()%15000);
				printf("Your Gil: %.2f",character->gil);
				Indicator = 0;
		}
		else if(player == 'r' && computer == 3 || player == 'p' && computer == 2 || player == 's' && computer == 1)
		{		  
                printf("You lose!");
                character->gil = character->gil - (gil = 1+rand()%500);
                printf("Your Gil: %.2f",character->gil);
                Indicator = 0; 
        }
     }
     }
     }
     getch();
}

//This function initializes the screen output when the game ends or when the user quits. It allows the user to completely exit the program or start a new game.
void initializeEnding(my_character *character)
{
    system("cls");
	char answer;
	printf("END OF THE GAME, %s\n",character->name);
	printf("Total Gil Earned: %.2f G\n",character->gil);
	printf("Debt Remaining: %.2f G\n\n",character->debt);
	printf("Total Profit: %.2f G\n\n",(character->gil - character->debt));
	if(character->gil >= character->debt)
    	printf("Merchant of the Rift: You did well young traveller.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	else if(character->gil < character->debt)
	{
	    printf("Merchant of the Rift: REALLY?!\t      (\\                      /) \n");
		printf("REALLY?! YOU COULDN'T EVEN EARN       | \\    _,--------._    / | \n");
		printf("ENOUGH TO BUY AN EXCALIPOOR!\t      | `.,'            `. /  | \n");
		printf("\t\t\t\t      `  '              ,-'   ' \n");
		printf("\t\t\t\t       \\/_         _   (     / \n");
		printf("\t\t\t\t      (,-.`.    ,',-.`. `__,' \n");
		printf("\t\t\t\t       |/#\\ ),-','#\\`= ,'.` | \n");
		printf("\t\t\t\t       `._/)  -'.\\_,'   ) ))| \n");
		printf("\t\t\t\t       /  (_.)\\     .   -'// \n");
		printf("\t\t\t\t      (  /\\____/\\    ) )`'\\ \n");
		printf("\t\t\t\t       \\ |V----V||  ' ,    \\ \n");
		printf("\t\t\t\t        |`- -- -'   ,'   \\  \\      _____ \n");
		printf("\t\t\t\t ___    |         .'    \\ \\  `._,-'     `- \n");
		printf("\t\t\t\t    `.__,`---^---'       \\ ` -' \n");
		printf("\t\t\t\t       -.______  \\ . /  ______,- \n");
		printf("\t\t\t\t               `.     ,'            \n");
    }
	printf("Play Again? [Y]es [N]o: ");
	while(answer != 'y' || answer != 'n')
	{
        scanf(" %c", &answer);
		answer = tolower(answer);
		if(answer == 'y')
		main();
		else if(answer == 'n')
		{
        system("pause");
		exit(0);
		}
    }
}
