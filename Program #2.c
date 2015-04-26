/*************************************************************************
*
*   login.c
*
*       This module will check username and password that user type in the
*   database are those correct or not. If correct, it will get into user 
*   account. If not, program will go back to the main menu.
*
*   Created by Pitipat Buniam(Mob)  ID: 55070503429
*   Team: MVP		
*       27 April 2013 for CPE 113
*************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"data.h"


/************************************************************************
*   This function will ask for username and password when login.
*   Argument
*       username_L  -   Store username as string
*       password_L  -   Store password as string
************************************************************************/
void input_UnPw(char* username_L,char* password_L)
{
    char buffer[MAXINPUT];   /*For input string*/
    
    printf("\n- Login -\n");
	printf("Username: ");
	fgets(input,sizeof(buffer),stdin);
	scanf(input,"%s",username_L);
	
	printf("Password: ");
	fget(input,sizeof(buffer),stdin);
	sscanf(input,"%s",password_L);
}


/************************************************************************
*      This function will ask user to select process matching, edit, 
*   delete or logout(Back to the main menu). Otherwise program will ask
*   again and again.
************************************************************************/
void loginMenu()
{
    char input[MAXINPUT];   /*For input string*/
    int choose=0;   /*For choose the menu*/
    
    printf("\n\t- Login -\n");
    printf("1) Matching\n");
    printf("2) Edit\n");
    printf("3) Delete\n");
    printf("4) Logout\n");
    
    while(1)
        {
        printf("Choose choice: ");
        fgets(input,sizeof(input),stdin);
        sscanf(input,"%d",&choose);
       
        switch(choose)
            {
            case 1:
                printf("Sorry: Not Finished yet\n");
                /*matching();   Not Finished yet*/
                break;
            case 2:
                printf("Sorry: Not Finished yet\n");
                /*edit();        Not Finished yet*/
                break;
            case 3:
                printf("Sorry: Not Finished yet\n");
                /*delete();     Not Finished yet*/
                break;
            case 4:
                break;          /*Get back to main menu*/
            default:
                printf("ERROR: Choose 1-4\n");   
            }
        if(choose==4) break;    /*Get out of while loop*/
        }
}


/************************************************************************
*      This function will read "account.txt" and check the username and
*   password are match together or not. If match, program will go to
*   user account. If not, it will back to the main menu.
************************************************************************/
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
