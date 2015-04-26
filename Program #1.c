/************************************************************
 *														    *
 *	edit.c													*
 *															*
 *  	This source file will edit data of user information *
 *	: Password, Account information,Personal information,	*
 *	Preference, and answer question.						*
 *															*
 *	Created by: Veerapat Ma(Ped) ID:55070503445	section:D	*
 *	Team: MVP												*
 *	    Date: 27 April 2013									*
 ***********************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"data.h"

/************************************************************
 *	    This function use to confirm the user that really   *
 *	want to edit his/her data.      		                *
 ***********************************************************/
int chooseNoYes()
{
	char input[MAXINPUT];
	char sure;
	do
		{
		printf("Are you sured to change this data?(' A ' or ' B '): ");
		fgets(input,MAXINPUT,stdin);
		sscanf(input,"%c",&sure);
		}
	while((sure!='Y') && (sure!='N'));	/*check user enter only Y or N*/
	if(sure == 'Y')						/*if user enter 'Y'*/
		return 1;
	else		/*if user enter 'N'*/
		return 0;
}

/************************************************************
 *	    This function will ask user to input pass for login *
 *	this program.		                                    *
 *  Argument                                                *
 *      account - pointer that point to account struct		*
 ***********************************************************/
void passwordEdit(ACCOUNT_T* account)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new Password\n");
	password(account);
	retval = chooseYesNo();
	if(retval=1)
		{
		sscanf(input,"%s",account->password);
		printf("New password is %s \n",account->password);
		}
	else
		printf("Cancel edit password\n");
}

/************************************************************
 *	    This function will ask user to input name and       *
 *	surname of the user.                                    *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void nameSurnameAccountIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new name and surname\n");
	nameSurnameAccountInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		sscanf(input,"%s %s",personInfo->name,personInfo->surname);
		printf("New name and surname is %s %s \n",personInfo->name,personInfo->surname);
		}
	else
		printf("Cancel edit name and surname\n");
}

/************************************************************
 *	    This function will ask user to input nickname       *
 *	of the user.                                    *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void nicknameIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new nickname\n");
	nicknameInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		sscanf(input,"%s\n",personInfo->nickname);
		printf("New nickname is%s\n",personInfo->nickname);
		}
	else
		printf("Cancel edit nickname\n");
}

/************************************************************
 *	    This function will ask user to input telephone      *
 *	number of the user.                                     *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void telNumberAccountIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new telephone\n");
	telNumberAccountInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
			{
			sscanf(input,"%s",personInfo->telNumber);
			printf("New telephone is %s\n",personInfo->telNumber);
			}
		else
			printf("Cancel edit telephone number\n");
}

/************************************************************
 *	    This function will ask user to input email address  *
 *	number of the user.                                     *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void emailAccountIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new E-mail\n");
	emailAccountInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		sscanf(input,"%s",personInfo->email);
		printf("New E-mail is %s\n",personInfo->email);
		}
	else
		printf("Cancel edit E-mail\n");
}

/************************************************************
 *	    This function will ask user to input birthdate      *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void birthdateAccountIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new birthdate\n");
	birthdateAccountInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->birthdate,input);
		printf("New birthdate is %s",personInfo->birthdate);
		}
	else
		printf("Cancel edit birthdate\n");
}

/************************************************************
 *	    This function will ask user to choose nationality   *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void nationalityPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new nationality\n");
	nationalityPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->nationality,nationality[choose-1]);
		printf("New nationality is %s",personInfo->nationality);
		}
	else
		printf("Cancel edit nationality\n");
}

/************************************************************
 *	    This function will ask user to choose religion      *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void religionPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new religion\n");
	religionPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->religion,religion[choose-1]);
		printf("New religion is %s",personInfo->religion);
		}
	else
		printf("Cancel edit religion\n");
}

/************************************************************
 *	    This function will ask user to choose first language*
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void firstLanguagePersonalEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new first language\n");
	firstLanguagePersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->firstLanguage,firstLanguage[choose-1]);
		printf("New first language is %s",personInfo->firstLanguage);
		}
	else
		printf("Cancel edit first language\n");
}

/************************************************************
 *	    This function will ask user to choose education     *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void educationPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new education\n");
	educationPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->education,education[choose-1]);
		printf("New education is %s",personInfo->education);
		}
	else
		printf("Cancel edit education\n");
}

/************************************************************
 *	    This function will ask user to choose city          *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void cityPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new city\n");
	cityPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->city,city[choose-1]);
		printf("New city is %s",personInfo->city);
		}
	else
		printf("Cancel edit city\n");
}

/************************************************************
 *	    This function will ask user to choose occupation    *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void occupationPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new occupation\n");
	occupationPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->occupation,occupation[choose-1]);
		printf("New occupation is %s",personInfo->occupation);
		}
	else
		printf("Cancel edit occupation\n");
}

/************************************************************
 *	    This function will ask user to choose net income    *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void netIncomePersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new net income\n");
	netIncomePersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->netIncome,netIncome[choose-1]);
		printf("New net income is %s",personInfo->netIncome);
		}
	else
		printf("Cancel edit net income\n");
}

/************************************************************
 *	    This function will ask user to choose marital status*
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void maritalStatusPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new marital status\n");
	maritalStatusPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->maritalStatus,maritalStatus[choose-1]);
		printf("New marital status is %s",personInfo->maritalStatus);
		}
	else
		printf("Cancel edit marital status\n");
}

/************************************************************
 *	    This function will ask user to choose number        *
 *	of children.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void childrenPersonalIntEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new children\n");
	childrenPersonalInt(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->children,children[choose-1]);
		printf("New children is %s\n",personInfo->children);
		}
	else
		printf("Cancel edit children\n");
}

/************************************************************
 *	    This function will ask user to input height         *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void heightPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Create new height\n");
	heightPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		sscanf(input,"%d",&preference->height);
		printf("New height is %d\n",personInfo->height);
		}
	else
		printf("Cancel edit height\n");
}

/************************************************************
 *	    This function will ask user to choose shape         *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void shapePreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new shape\n");
	shapePre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->shape,shape[choose-1]);
		printf("New height is %s\n",personInfo->shape);
		}
	else
		printf("Cancel edit shape\n");
}

/************************************************************
 *	    This function will ask user to choose skin color    *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void skinColorPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new skin color\n");
	skinColorPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->skinColor,skinColor[choose-1]);
		printf("New skin color is %s\n",personInfo->shape);
		}
	else
		printf("Cancel edit skin color\n");
}

/************************************************************
 *	    This function will ask user have tattoo or not      *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void tattooPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Edit tattoo\n");
	tattooPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		sscanf(input,"%c",&personInfo->tattoo);
	else
		printf("Cancel edit tattoo\n");
}

/************************************************************
 *	    This function will ask user to choose pros          *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void prosPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new pros\n");
	prosPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->pros,pros[choose-1]);
		printf("New pros is %s\n",personInfo->pros);
		}
	else
		printf("Cancel edit pros\n");
}

/************************************************************
 *	    This function will ask user to choose cons          *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void consPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new cons\n");
	consPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->cons,cons[choose-1]);
		printf("New cons is %s\n",personInfo->cons);
		}
	else
		printf("Cancel edit cons\n");
}

/************************************************************
 *	    This function will ask user to choose interest      *
 *	of the user.                                            *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void interestPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	printf("Create new interest\n");
	interestPre(personInfo);
	retval = chooseYesNo();
	if(retval=1)
		{
		strcpy(personInfo->interest,interest[choose-1]);
		printf("New interest is %s\n",personInfo->interest);
		}
	else
		printf("Cancel edit interest\n");
}

/************************************************************
 *	    This function will ask user smoking or not          *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void smokingPreEdit(PERSONALINFORMATION_T*personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Edit smoking\n");
	smokingPre(personInfo);
	if(retval=1)
		sscanf(input,"%c",&personInfo->smoking);
	else
		printf("Cancel edit smoking\n");
}

/************************************************************
 *	    This function will ask drink alcohol or not         *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void alcoholPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Edit alcohol\n");
	alcoholPre(personInfo);
	if(retval=1)
		sscanf(input,"%c",&personInfo->alcohol);
	else
		printf("Cancel edit alcohol\n");
}

/************************************************************
 *	    This function will ask user like nightlife or not   *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void nightLifePreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Edit nightlife\n");
	nightLifePre(personInfo);
	if(retval=1)
		sscanf(input,"%c",&personInfo->nightLife);
	else
		printf("Cancel edit nightlife\n");
}

/************************************************************
 *	    This function will ask user love pet or not         *
 *  Argument                                                *
 *      personInfo - pointer that point to personInfo stuct *
 ***********************************************************/
void lovePetsPreEdit(PERSONALINFORMATION_T* personInfo)
{
	int retval=0;
	char input[MAXINPUT];
	printf("Edit love pets\n");
	lovePetsPre(personInfo);
	if(retval=1)
		sscanf(input,"%c",&personInfo->lovePets);
	else
		printf("Cancel edit love pets\n");
}

/************************************************************
 *	    This function will open the file, show the current  *
 *   user information and edit                              *
 *	of the user.                                            *
 ***********************************************************/
void edit()
{
    char input[MAXINPUT];
	char gender[MAXINPUT];
	int choice=0;
	FILE* pFile_Ac=NULL;    /*Pointer to open file account.txt*/
	FILE* pFile_MaleInfo=NULL;  /*Pointer to open file male_Info.txttxt*/
	FILE* pFile_FemaleInfo=NULL;    /*Pointer to open file female_Info.txt*/

	ACCOUNT_T* account = (ACCOUNT_T*)calloc(1,sizeof(ACCOUNT_T));	//Allocate for stuct ACCOUNT_T
	PERSONALINFORMATION_T* personInfo = (PERSONALINFORMATION_T*)calloc(1,sizeof(PERSONALINFORMATION_T));  //Allocate for stuct PERSONALINFORMATION_T

	if( (account==NULL)||(personInfo==NULL) )
		{
		printf("ERROR: Allocate memory failed\n");
		exit(0);
		}

	pFile_Ac = fopen("account.txt","a");	//Open the file
	pFile_MaleInfo = fopen("male_Info.txt","a");	//Open the file
	pFile_FemaleInfo = fopen("female_Info","a");	//Open the file

	if( (pFile_Ac==NULL)||(pFile_MaleInfo==NULL)||(pFile_FemaleInfo==NULL))
		{
		printf("ERROR: Can't open the file\n");
		exit(0);
		}

	if((personInfo->gender)==1)
		strcpy(gender,"Male");
	else
		strcpy(gender,"Female");

	while(1)
		{
		do		/*loop to choose choice to edit*/
			{
			printf("\n**************************************************************************\n");
			printf("*                         WHICH TOPIC DO YOU WANT TO EDIT                *\n");
			printf("**************************************************************************\n");
			printf("->Account<-\n");
			printf("            Usename		   		:    %s\n",account->username);
			printf("            1) Password    		:    %s\n",account->password);
			printf("->Personal Information<-\n");
			printf("			2) Name and Surname :	 %s %s\n",personInfo->name,personInfo->surname);
			printf("			3) Nickname			:	 %s\n",personInfo->nickname);
			printf("			4) Telephone Number :	 %s\n",personInfo->telNumber);
			printf("			5) E-mail			:	 %s\n",personInfo->email);
			printf("			Gender				:	 %s\n",gender);
			printf("			6) Birth Date		:	 %s\n",personInfo->birthdate);
			printf("			7) Nationality		:	 %s\n",personInfo->nationality);
			printf("			8) Religion			:	 %s\n",personInfo->religion);
			printf("			9) First Language	:	 %s\n",personInfo->firstLanguage);
			printf("		   10) Education		:	 %s\n",personInfo->education);
			printf("		   11) City				:	 %s\n",personInfo->city);
			printf("		   12) Occupation		:	 %s\n",personInfo->occupation);
			printf("		   13) Net income		:	 %s\n",personInfo->netIncome);
			printf("		   14) Marital Status	: 	 %s\n",personInfo->maritalStatus);
			printf("		   15) Children			:	 %s\n",personInfo->children);
			printf("->Preference<-\n");
			printf("		   16) Height			:	 %d\n",preference->height);
			printf("		   17) Shape			:	 %s\n",personInfo->shape);
			printf("		   18) Skin Color		:	 %s\n",personInfo->skinColor);
			printf("		   19) Tattoo			:	 %c\n",personInfo->tattoo);
			printf("		   20) Pros				:	 %s\n",personInfo->pros);
			printf("		   21) Cons				:	 %s\n",personInfo->cons);
			printf("		   22) Interest			:	 %s\n",personInfo->interest);
			printf("		   23) Smoking			:	 %c\n",personInfo->smoking);
			printf("		   24) Alcohol			:	 %c\n",personInfo->alcohol);
			printf("		   25) Nightlife		:	 %c\n",personInfo->nightLife);
			printf("		   26) Love Pets		:	 %c\n",personInfo->lovePets);
			printf("		   27) Exit\n");
			printf("******************************************************************\n");
			printf("Select(1-27): ");
			fgets(input,sizeof(input),stdin);
			sscanf(input,"%d",&choice);
			}
		while((choice<1) || (choice>27));	/*check user choose only 1-27*/

		/*if user choose 1*/
		if(choice==1)
			passwordEdit(account);
		/*if user choose 2*/
		else if(choice==2)
			nameSurnameAccountIntEdit(personInfo));
		/*if user choose 3*/
		else if(choice==3)
			nicknameIntEdit(personInfo);
		/*if user choose 4*/
		else if(choice==4)
			telNumberAccountIntEdit(personInfo);
		/*if user choose 5*/
		else if(choice==5)
			emailAccountIntEdit(personInfo);
		/*if user choose 6*/
		else if(choice==6)
			birthdateAccountIntEdit(personInfo);
		/*if user choose 7*/
		else if(choice==7)
			nationalityPersonalIntEdit(personInfo);
		/*if user choose 8*/
		else if(choice==8)
			religionPersonalIntEdit(personInfo);
		/*if user choose 9*/
		else if(choice==9)
			firstLanguagePersonalEdit(personInfo);
		/*if user choose 10*/
		else if(choice==10)
			educationPersonalIntEdit(personInfo);
		/*if user choose 11*/
		else if(choice==11)
			cityPersonalIntEdit(personInfo);
		/*if user choose 12*/
		else if(choice==12)
			occupationPersonalIntEdit(personInfo);
		/*if user choose 13*/
		else if(choice==13)
			netIncomePersonalIntEdit(personInfo);
		/*if user choose 14*/
		else if(choice==14)
			maritalStatusPersonalIntEdit(personInfo);
		/*if user choose 15*/
		else if(choice==15)
			childrenPersonalIntEdit(personInfo);
		/*if user choose 16*/
		else if(choice==16)
			heightPreEdit(personInfo);
		/*if user choose 17*/
		else if(choice==17)
			shapePreEdit(personInfo);
		/*if user choose 18*/
		else if(choice==18)
			skinColorPreEdit(personInfo);
		/*if user choose 19*/
		else if(choice==19)
			tattooPreEdit(personInfo);
		/*if user choose 20*/
		else if(choice==20)
			prosPreEdit(personInfo);
		/*if user choose 21*/
		else if(choice==21)
			consPreEdit(personInfo);
		/*if user choose 22*/
		else if(choice==22)
			interestPreEdit(personInfo);
		/*if user choose 23*/
		else if(choice==23)
			smokingPreEdit(personInfo);
		/*if user choose 24*/
		else if(choice==24)
			alcoholPreEdit(personInfo);
		/*if user choose 25*/
		else if(choice==25)
			nightLifePreEdit(personInfo);
		/*if user choose 26*/
		else if(choice==26)
			lovePetsPreEdit(personInfo);
		/*if user choose 27*/
		else
			{
			printf("EXIT\n");		/*go back to main*/
			break;
			}
		}
	fprintf(pFile_Ac,"%s %s\n",account->username,account->password);

	if(personInfo->gender==1)
	fprintf(pFile_MaleInfo,"%s\n%s\n%s\n%s\n%s\n%d\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s\n%s\n%c\n%s\n%s\n%s\n%c\n%c\n%c\n%c\n\n",personInfo->name,personInfo->surname,personInfo->nickname,personInfo->telNumber,personInfo->email,personInfo->gender,personInfo->birthdate,personInfo->nationality,personInfo->religion,personInfo->firstLanguage,personInfo->education,personInfo->city,personInfo->occupation,personInfo->netIncome,personInfo->maritalStatus,personInfo->children,personInfo->height,personInfo->shape,personInfo->skinColor,personInfo->tattoo,personInfo->pros,personInfo->cons,personInfo->interest,personInfo->smoking,personInfo->alcohol,personInfo->nightLife,personInfo->lovePets);    /*Write into file male_Info*/
	else if(personInfo->gender==2)
	fprintf(pFile_FemaleInfo,"%s\n%s\n%s\n%s\n%s\n%d\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s\n%s\n%c\n%s\n%s\n%s\n%c\n%c\n%c\n%c\n\n",personInfo->name,personInfo->surname,personInfo->nickname,personInfo->telNumber,personInfo->email,personInfo->gender,personInfo->birthdate,personInfo->nationality,personInfo->religion,personInfo->firstLanguage,personInfo->education,personInfo->city,personInfo->occupation,personInfo->netIncome,personInfo->maritalStatus,personInfo->children,personInfo->height,personInfo->shape,personInfo->skinColor,personInfo->tattoo,personInfo->pros,personInfo->cons,personInfo->interest,personInfo->smoking,personInfo->alcohol,personInfo->nightLife,personInfo->lovePets);    /*Write into file female_Info*/

	fclose(pFile_Ac);   //Close file account.txt
	fclose(pFile_MaleInfo); //Close file male_Info.txt
	fclose(pFile_FemaleInfo);   //Close file female_Info.txt
	free(account);  //free memory
	free(personInfo);   //free memory
}
