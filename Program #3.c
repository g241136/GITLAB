
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"data.h"

int login()
{
	char input[MAXINPUT];   /*For input string*/
	char username_L[MAXINPUT];  /*For username that user type as string*/
	char password_L[MAXINPUT];  /*For password that user type as string*/
	char username_R[MAXINPUT];  /*For username that in the database*/
	char password_R[MAXINPUT];  /*For password that in the database*/
	char inputLine[MAXINPUT];   /*Read string in database*/
	
	FILE* pFile = fopen("account.txt","r"); /*Read the database*/
	
	if( (pFile==NULL) )
		{
		printf("ERROR: Can't open the file\n");
		exit(0);    /*Exit program, return value 0*/
		}
	
	input_UnPw(username_L,password_L);  /*Ask for username and password, send parameters to input_UnPw()*/
	
	while(fgets(inputLine,sizeof(inputLine),pFile) != NULL) /*Read one line in database*/
		{
		sscanf(inputLine,"%s %s",username_R,password_R);
		if(!strcmp(username_L,username_R)&&!strcmp(password_L,password_R))  /*Check username and password are match or not*/
		    {
		    loginMenu();   /*Go to user account*/
		    break;
		    }
		else
		    {
		    printf("Error: Invalid username or password\n\n");
		    break;  /*Get out of while loop*/
		    }   
	    }
	    
	fclose(pFile);  //Close file
}
