void register_acc()
{
 	int choice;
    FILE *ptr;

    ptr=fopen("newaccount.dat","a+");
    account_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2 ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\nEnter the account number:");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %s %d/%d/%d %d %s  %lf %s %f %d/%d/%d\n",&add.acc_no,&add.pass1,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;

            }
    }
    add.acc_no=check.acc_no;
    printf("\n Enter new password:");
    scanf("%s",add.pass1);
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
    fprintf(ptr,"%d %s %s %d/%d/%d %d %s %s %lf %d/%d/%d\n",add.acc_no,add.pass1,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.phone,add.deposit.month,add.deposit.day,add.deposit.year);


    fclose(ptr);
    printf("\n Account created successfully!");
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
