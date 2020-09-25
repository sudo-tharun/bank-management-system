//#include <iostream>
//#include <windows.h>
void sme();
void sme()
{
	int f;
	printf("\n 			Welcome to Enterprizers zone");
	printf("\n Please choose one to explore:");
	printf("\n 1. Accounts and Deposits \n 2. Financing your business \n 3. Payments and Collection \n 4. Cards");
	scanf("%d",&f);
	//switch(mc)
	
		if(f==1)//case 1:
			{
				printf("\n		Welcome to the section of Accounts and Deposits");
				char* linkChar="https://www.hdfcbank.com/sme/accounts-and-deposits";
				ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
				printf("\n 1");
			sme_try:
            printf("\nEnter 1 to try again,2 for MAIN MENU and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        sme();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else if(main_exit==2)
            {
            	system("cls");
            	mainmenu();
			}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto sme_try;}
			}
			//break;
		else if(f==2)//case 2:
			{
			printf("\n 		The growth of customers is ours");
			char* linkChar="https://www.hdfcbank.com/sme/financing_your_business";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			sme();
			}	
			//break;
		else if(f==3)//case 3:
			{
			printf("\n 		Welcome to Payments and Collection");
			char* linkChar="https://www.hdfcbank.com/sme/payments-and-collections/tax-payments";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			sme();
			}
			//break;
		else if(f==4)//case 4:
			{
			printf("\n 		Money anywhere with a Card");
			char* linkChar="https://www.hdfcbank.com/sme/sme-homepage";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);	
			system("cls");
			sme();		
			}
		//default:
		else
		printf("\n Invalid");
}
/*main()
{
	sme();
}*/
