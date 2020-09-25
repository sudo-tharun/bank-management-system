/*#include <windows.h>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>*/
void partnershop();
void compnshop();
void dealsnoffers();
void smartbuyoffers();
/*main()
{
	smartbuyoffers();
}*/
void smartbuyoffers()
{
	int c;
	printf("\n The way to buy is a smart way. Welcome to our smart buy offers");
	printf("\n Enter your choice:");
	printf("\n 1. Smart Buy at our partner stores \n 2. Compare and Shop \n 3. Deals and offers");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\n Watch what we are upto with our partner stores");
			partnershop();
			break;
		case 2:
			printf("\n Confused of many products.Here we are. Compare and Shop now");
			compnshop();
			break;
		case 3:
			printf("\n Check for more Deals and Offers");
			dealsnoffers();
			break;
		default:(printf("\n Invalid Choice"));
	}
}
void partnershop()
{
	char* linkChar="https://offers.store.flipkart.com/";
	ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
	smartbuyoffers();
}
void compnshop()
{
	char* linkChar="https://offers.smartbuy.hdfcbank.com/compare_shopping?_ga=2.108004938.936435055.1555666340-1223913511.1548823461";
	ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
	smartbuyoffers();
}
void dealsnoffers()
{
	char* linkChar="https://offers.smartbuy.hdfcbank.com/deals?_ga=2.108004938.936435055.1555666340-1223913511.1548823461";
	ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
	smartbuyoffers();
}
