void close();
void existing();
void register_acc();
int i,j;
int main_exit;
int mc;

struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
 	long long int pass;
    }add,upd,check,rem,transaction;
void netbanking()
{
	long long int acc_no;
	char pass[10];
	printf("\n Please select your type:");
	printf("\n 1.Existing \n 2. Register");
	scanf("%d",&mc);
	switch(mc)
	{
		case 1:
			printf("\n Please fill all the requirements:");
			existing();
			break;
		case 2:
			printf("\n To register please fill the requirements correctly !");
			register_acc();
			break;
		default:
			printf("\n Invalid Choice");
	}
	
}
void existing()
{
	long long int acc_no;
	char pass[10];
	printf("\n Enter your 16 digit account number:");
	scanf("%lld",&acc_no);
    char password[10]="stasbank";
    long long int acc_no1=1807012401925145;
    int i=0;
    printf("\n Enter the password to login:");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0 && acc_no==acc_no1)
        {printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            printf("\n Menu will be displayed soon");
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        netbanking();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
}
void register_acc()
{
 	int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    account_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2 ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\nEnter the account number:");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%lld %d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.pass,&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;

            }
    }
    add.acc_no=check.acc_no;
    printf("\n Enter new password(only numbers):");
    scanf("%lld",&add.pass);
    printf("\nEnter the name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address:");
    scanf("%s",add.address);
    printf("\nEnter the phone number: ");
    scanf("%lf",&add.phone);
        fprintf(ptr,"%lld %d %d/%d/%d %d %s %s %lf %d/%d/%d\n",add.pass,add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.phone,add.deposit.month,add.deposit.day,add.deposit.year);


    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        close();
    else if(main_exit==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
