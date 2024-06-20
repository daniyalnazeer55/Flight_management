#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	here:
	printf("Welcome to Fly Sky Pakistan Flight F-307 From Islamabad to Madinah\n");
	printf("To Preserve Seats Mark Relevent Option\n");
	printf("1. Bussiness Class\n");
	printf("2. Economy Class\n");
	scanf("%d",&choice);
	switch(choice)
	{
		printf("Total Seats are 110\n");
		case 1:
		int num,bs_cl_seat,bs_cl_tot;
		printf("Bussiness Class Seats are 1 to 25\n Enter Your Seat No\n");
		scanf("%d",&bs_cl_seat);
		if(bs_cl_seat>=1 && bs_cl_seat<=25)
		{
		 bs_cl_tot=bs_cl_seat*89000;
		 printf("Your Seat No: %d is Reserved\nFare is PKR Rs%d/- Only\nThanks to Fly with Fly Sky Pakistan\n",bs_cl_seat,bs_cl_tot);
	    }
	    else
	    printf("Seat Cannot Be Allocated Mark As Per Guidelines\n");
		printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		scanf("%d",&num);
		if(num==1)
		goto here;
		else if(num>=2)
		printf("Thanks For Using Our Service\n");
		exit(0);
		break;
		case 2:
		int	ec_cl_seat,ec_cl_tot;
		printf("Seats Available are 26 to 110 Except Seat No 34 & 77\nMark Your Seat No Please\n");
		scanf("%d",&ec_cl_seat);
		if(ec_cl_seat>=26 && ec_cl_seat<=110 && (ec_cl_seat!=34 && ec_cl_seat!=77))
		{
		  if(ec_cl_seat%8==0)
		  {
		     ec_cl_tot=ec_cl_seat*61610;
		     printf("Your Window Seat No %d is Reserved\n Fare is PKR Rs%d/- Only\nThanks to Fly with Fly Sky Pakistan\n",ec_cl_seat,ec_cl_tot);
	      }
	      else
	      {
	         ec_cl_tot=ec_cl_seat*61000;
	         printf("Your Seat Other than Window one's %d is Reserved\n Fare is PKR Rs%d/- Only\nThanks to Fly with Fly Sky Pakistan\n",ec_cl_seat,ec_cl_tot);
	      }
		  printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		  scanf("%d",&num);
		  if(num==1)
		  goto here;
		  else if(num>=2)
		  printf("Thanks For Using Our Service\n");
		  exit(0);
		  break;
		}
		else
		printf("Seat Cannot Be Allocated\nMark As Per Guidelines\n");
		printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		scanf("%d",&num);
		if(num==1)
		goto here;
		else if(num>=2)
		printf("Thanks For Using Our Service\n");
		exit(0);
	}
getchar();
return 0;	 	
}

int main()
{
	int choice;
	here:
	printf("Welcome to Fly Sky Pakistan Flight F-307 From Islamabad to Madinah\n");
	printf("To Preserve Seats Mark Relevent Option\n");
	printf("1. Bussiness Class\n");
	printf("2. Economy Class\n");
	scanf("%d",&choice);
	switch(choice)
	{
		printf("Total Seats are 110\n");
		case 1:
		int i,n,num,bs_cl_seat[30],bs_cl_tot1,bs_cl_tot2,bs_cl_tot3,age[100];
		printf("Bussiness Class Seats are 1 to 25\n How Many Seats You want to Reserve? Enter!\n");
		scanf("%d",&n);
		printf("Enter Seats No Please\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&bs_cl_seat[i]);
		}
		for(i=0;i<n;i++)
		if(bs_cl_seat[i]>=1 && bs_cl_seat[i]<=25)
		{
		  printf("Enter Ages Of Passengers\n");
		  for(i=0;i<n;i++)
		  {
		  scanf("%d",&age[i]);
	      }
	      for(i=0;i<n;i++)
	      {
		  if(age[i]<=12)
		  {
		  bs_cl_tot1=n*55180;}
		  else(age[i]>12);
		  bs_cl_tot2=n*89000;
	      }
		  bs_cl_tot3=bs_cl_tot1+bs_cl_tot2;
		  if(bs_cl_tot3>600000)
		  bs_cl_tot3=bs_cl_tot3-((4/100)*bs_cl_tot3);
		  printf("Seats Reserved are\n");
		  for(i=0;i<n;i++)
		  printf("%d\t\n",bs_cl_seat[i]);
		  for(i=0;i<n;i++)
		  {
		  	if(age[i]<12)
		  	printf("Childs ages are: %d\n",age[i]); 
		  }
		  for(i=0;i<n;i++)
		  {
		  	if(age[i]>12)
		  	printf("Adults ages are: %d\n",age[i]);
		  }
		  printf("Total Fare is PKR Rs%d\- Only\n",bs_cl_tot3);
		 // printf("Discount is 4%\n");
		}
	    else
	    printf("Seat Cannot Be Allocated Mark As Per Guidelines\n");
		printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		scanf("%d",&num);
		if(num==1)
		goto here;
		else if(num>=2)
		printf("Thanks For Using Our Service\n");
		exit(0);
		break;
		case 2:
		int	ec_cl_seat[50],ec_cl_tot4,ec_cl_tot5,ec_cl_tot6,j,n1,age1[100];
		printf("Seats Available are 26 to 110 Except Seat No 34 & 77\nHow many seats you want to reserve\n");
		scanf("%d",&n1);
		printf("Enter Seat No's\n");
		for(j=0;j<n1;j++)
		{
		scanf("%d",&ec_cl_seat[j]);
		}
		for(j=0;j<n1;j++)
		if(ec_cl_seat[j]>=26 && ec_cl_seat[j]<=110 && (ec_cl_seat[j]!=34 && ec_cl_seat[j]!=77))
		{
		printf("Enter Ages of Passenger\n");
		for(j=0;j<n1;j++)
		{
			scanf("%d",&age1[j]);
		}
		for(j=0;j<n1;j++)
		{
		  if(age1[j]<12)
		  {
		     ec_cl_tot4=n1*41480;
	      }
	      else(age1[j]>12);
	      ec_cl_tot5=n1*61000;
		}
	      ec_cl_tot6=ec_cl_tot4+ec_cl_tot5;
	      if(ec_cl_tot6>600000)
	      ec_cl_tot6=ec_cl_tot6-((4/100)*ec_cl_tot6);
	      printf("Seats Resered Are\n");
	      for(j=0;j<n1;j++)
	      printf("%d\t\n",ec_cl_seat[j]);
	      for(j=0;j<n1;j++)
	      {
	      	if(age1[j]<=12)
	      	printf("Child Ages are %d\n",age1[j]);
		  }
		  for(j=0;j<n1;j++)
		  {
		  	if(age1[j]>12)
		  	printf("Adult Ages are %d\n",age1[j]);
		  }
		  printf("Fare is PKR Rs%d\-only\n",ec_cl_tot6);
		  printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		  scanf("%d",&num);
		  if(num==1)
		  goto here;
		  else if(num>=2)
		  printf("Thanks For Using Our Service\n");
		  exit(0);
		  break;
		}
		else
		printf("Seat Cannot Be Allocated\n Mark As Per Guidelines\n");
		printf("Do you want to Reserve More Seats? Then Press 1, If NOT Press 2\n");
		scanf("%d",&num);
		if(num==1)
		goto here;
		else if(num>=2)
		printf("Thanks For Using Our Service\n");
		exit(0);
	}
getchar();
return 0;	 	
}
