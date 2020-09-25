void personal();
void personal()
{
	printf("\n In progress");
}
void mainmenu();
void mainmenu()
{
	int a,b;
	printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO OUR BANK \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n          MAIN MENU");
	printf("\n Choose your choice according to the index number provided \n 1. LOGIN TO YOUR ACCOUNT  \n  2. EXPLOIT OUR BANKING SERVICES ");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:
		    printf("\n You will be redirected to the login page....");
		    login();
		    break;
		case 2:
			printf("\n         WELCOME TO OUR BANKING SERVICES");
			printf("\n Please enter your interest in the following: \n 1.PERSONAL \n 2. SME(Small Medium Enterprizes) \n 3.QUICK APPLY \n 4. SMART BUY OFFERS \n 5. WAYS TO BANK  \n 6. CALCULATOR");
			scanf("%d",&b);
			//switch(b)
			{
				if(b==1)
				//case 1:
					{
					printf("\n    WELCOME TO OUR PERSONAL SERVICES");
					personal();
					break;
					}
			else	if(b==2)//case 2:
					{	
					printf("\n     WELCOME TO OUR SME(Small Medium Enterprizes)");
					sme();
					}
					break;
			else	if(b==3)//case 3:
					{
					printf("\n 		WELCOME TO QUICK APPLY");
					quickapply();
					}
					break;
			else	if(b==4){//case 4:
					printf("\n		WELCOME TO SMART BUY SERVICES");
					smartbuyoffers();
					break;
				}
			else	if(b==5){//case 5:
					printf("\n		EXPLOIT WAYS TO BANK");
					waystobank();
					break;
				}
			else	if(b==6){//case 6:
					printf("\n		WELCOME TO MATHS ZONE");
					calculator();
					break;
				}
			//default:
			else {
			printf("\n Invalid Choice");
			break;
		}
			}
		default:printf("\n Invalid Choice");
	}
}
