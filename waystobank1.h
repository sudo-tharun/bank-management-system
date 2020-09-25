//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
void contactus();
void findnearbybank();
void reachatsocial();
void holidays();
void nearbyatms();
void nonworkingdays();
void waystobank();
void contactus()
{
	printf("\n Contact us through phone.Below are details:");
	printf("\n BUDDIGINA THARUN : 83318 74648 \n DIVILI SATHVIK : 63096 26867 \n ADITYA SINGH :  77549 81111 \n ARIPIRALA SAI SRIVATHSAV : 89195 22140");
	printf("\n NOTE : THESE NUMBERS ARE AVAILBLE ONLY IN OFFICE HOURS TO ANSWER !!");
}
void reachatsocial()
{
	printf("\n We now know that INSTAGRAM N FACEBOOK became a part of our life. So bringing you to the path of social connection");
	printf("\n We on INSTAGRAM:");
	printf("\n BUDDIGINA THARUN : tharun_b_logan \n DIVILI SATHVIK : urstrulysathvik \n ADITYA SINGH : adityasingh4309  \n ARIPIRALA SAI SRIVATHSAV :shree_vathsav ");
	printf("\n BUDDIGINA THARUN : Tharun B \n DIVILI SATHVIK : Sathvik D \n ADITYA SINGH : Aditya Singh \n ARIPIRALA SAI SRIVATHSAV :Shree Vathsav ");

}
void nearbyatms()
{
	printf("\n SORRY FOR THE INCONVENIENCE. \n We are currently able to display ONLY the ATMs nearby SYMBIOSIS INSTITUTE OF TECHNOLOGY, PUNE");
	printf("\n Bank of India ATM \nAddress: Symbiosis Knowledge Village, Symbiosis Campus Path Lavale, Maharashtra, 411042, Lavale, Maharashtra 411042");
	printf("\n ICICI BANK ATM \n Address: Lupin Limited, Mulshi, Pune, Maharashtra 411026");
	printf("\n Bank of India ATM \n Address: Lavale, Maharashtra 412115");	
	printf("\n AXIS BANK ATM \n Address: 4, Pashan-Sus Rd, Pashan, Pune, Maharashtra 411021");
	system("colour 74");
	printf("\n			ALL THESE ARE ACCORDING TO THE INFORMATION UPDATED ON GOOGLE");
}
void findnearbybank()
{
	printf("\n Address:SYMBIOSIS INSTITUE OF TECHNOLOGY, Lavale, Mulshi 412115");
	printf("\n Thank You for the Support");
}
void nonworkingdays()
{
	printf("\n All Saturdays from 12.00 PM \n All Sundays");
	printf("\n This calendar is updated from JANUARY TO APRIL. \n KINDLY NOTICE !!");
	holidays();
	printf("\n Remaining Data will be updated soon.");
}
void holidays()
{
printf("\n List of holidays are as follows:");
printf("\n Public Holidays in January 2019:");
printf("\n 1 Jan      Tuesday      New Year's Day");
printf("\n 13 Jan     Sunday        Guru Govind Singh Jayanti");
printf("\n 13 Jan     Sunday        Lohri");
printf("\n 14 Jan     Monday        Makar Sankranti");
printf("\n 15 Jan     Tuesday       Pongal");
printf("\n 26 Jan     Saturday      Republic Day");
system("COLOR F1");
printf("\n Public Holidays in February 2019:");
printf("\n 5 Feb       Tuesday      Chinese New Year");
printf("\n 10 Feb     Sunday        Vasant Panchami");
printf("\n 14 Feb     Thursday      Valentine's Day");
printf("\n 19 Feb     Tuesday       Shivaji Jayanti");
printf("\n 19 Feb     Tuesday       Guru Ravidas Jayanti");
printf("\n Public Holidays in March 2019:");
printf("\n 1 Mar       Friday       Maharishi Dayanand Saraswati Jayanti");
printf("\n 4 Mar       Monday       Maha Shivaratri Shivaratri");
printf("\n 21 Mar     Thursday      March Equinox");
printf("\n 20 Mar     Wednesday     Holika Dahana");
printf("\n 21 Mar     Thursday      Holi");
printf("\n 21 Mar     Thursday      Dolyatra");
printf("\n 21 Mar     Thursday      Hazarat Ali's Birthday");
}
void waystobank()
{
	int m;
	printf("\n           HOPING YOU CAN NOW REACH US EASILY.");
	printf("\n Enter your choice :");
	printf("\n 1. Contact Us \n 2. Find nearby bank \n 3. Reach us @social \n 4. Locate nearby ATMs \n 5. Non-working Days");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\n Reach us through following details");
			contactus();
			break;
		case 2:
			printf("\n Get interacted in our bank");
			findnearbybank();
			break;
		case 3:
			printf("\n We will be with you everywhere. Now connect with us socially");
			reachatsocial();
			break;
		case 4:
			printf("\n Cannot search for them! Here we locate nearby ATMs of you");
			nearbyatms();
			break;
		case 5:
			printf("\n See when we are at your services. Non-working days of our bank");
			nonworkingdays();
			break;
		default:
			printf("\n Invalid Choice");
	}
}
/*main()
{
	waystobank();
}*/
