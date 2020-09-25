//#include <iostream>
//#include <windows.h>
void quickapply();
void quickapply()
{
	int e;
	printf("\n				WELCOME TO QUICK APPLY");
	printf("\n Select your choice to explore:");
	printf("\n 1.Credit Cards \n 2. Personal Loan \n 3. New Car Loan \n 4. Home Loan \n 5. Two-wheeler Loan  \n 6. Easy EMI \n 7. Savings Account \n 8.  Deposits \n 9. Forex Cards \n 10. Insurance \n 11. Current Account");
	scanf("%d",&e);
	switch(e)
	{
		case 1:
			{
			printf("\n Use now and pay next. Welcome to credit card's zone");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/credit%20card.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        quickapply();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
				printf("1");
			break;
			}
		case 2:
			{
			printf("\n Support to your personal life. Welcome to Personal Loan Agenda");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/personalloan.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        quickapply();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
				quickapply();
			}
			break;
		case 3:
			{
			printf("\n Go with luxurious journey. Welcome to New Car Loan Scheme");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/carloan.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        quickapply();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
				quickapply();
			}
			break;	
		case 4:
			{
			printf("\n Willing to live in your own shelter here is our HOME LOAN scheme");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/homeloan.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        quickapply();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
					quickapply();
			}
			break;	
		case 5:
			{
			printf("\n Time to ride. Welcome to Two-wheeler scheme");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/2wheeler.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        quickapply();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
				quickapply();
			}
			break;
		case 6:
			{
			printf("\n Welcome to Easy EMI");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/easyemi.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;	
		case 7:
			{
			printf("\n Save now for the future. Welcome to Savings Account");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/savings.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;
		case 8:
			{
			printf("\n Your money, safe for sure. Welcome to deposits zone");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/deposit.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;
		case 9:
			{
			printf("\n Welcome to Forex Cards Service");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/credit%20card.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;
		case 10:
			{
			printf("\n Welcome to the Insurance Zone");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/insurance.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;	
		case 11:
			{
			printf("\n Welcome to Current Account");
			char* linkChar="file:///E:/DEV%20CPP/C%20PROJECT/currentaccount.htm";
			ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
			system("cls");
			quickapply();
			}
			break;	
		default:{
		break;
		}
		printf("\n Invalid Choice");
		system("cls");
		close();
	}
}
/*main()
{
	quickapply();
}*/
