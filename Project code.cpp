//#include <iostream>
//#include <conio.h>
//#include <fstream>
//#include <Windows.h>
//#include <mmsystem.h>
//#include <string>
//#include <cstdlib>
//#include <cstring>
//#include <iomanip>
//#include <cctype>
//using namespace std;
//void Unite_Bank();
//void Welcom_Blink();
//void file();
//void New_Account();
//bool Pasword_validity(const char *a);
//bool UserNameValidity(const char *a);
//bool CNIC_VALIDITY(char *a, int size);
//void trim_spaces(char *a, int size);
//void GenereteAccount(char *a);
//void User_LOGIN();
//void change_admin_pasword();
//void User_account_delete();
//void Add_Balance();
//void Admin_Mode();
//void AdminLogin();
//bool Account_identify(const char *a);
//bool Equal_Account(const char *a, const char *b);
//void  Cash_WIthdrawal();
//void Balance_inquiry();
//void  Fast_Transfer();
//void change_password();
//void DELETE_ACCOUNT();
//void USER();
//void invisible_password(char Password[]);
//float amount_chek(float a);
//int choice_handler(int a);
//void view_User_info();
//void  send_money();
//int main()
//{
//	/*file();*///**************************************this funciont is only to call once because it include headings
//	Welcom_Blink();
//	Unite_Bank();
//
//	int choice=0;
//	char Userwish;
//Main_Menu1:
//	cout << "(1)ADMIN                                 (2)User" << endl;
//	cout << "(3)Exit                             " << endl;
//Main_Menu:
//	cout << "Enter Your Choice:";
//	choice = choice_handler(choice);
//	switch (choice)
//	{
//	case 1:
//		AdminLogin();
//		cout << "                                   Do you want to perform any further activity? Y/N:";
//		cin >> Userwish;
//		if (Userwish == 'Y' || Userwish == 'y')
//		{
//			cin.ignore();
//			goto Main_Menu1;
//		}
//		else
//		{
//			goto Last;
//		}
//		break;
//
//	case 2:
//	{
//		  USER_LOG:
//			  cout << "(1)Sign in                          (2)Create new Account" << endl;
//			  cout << "(3) Leave This Page." << endl;
//		  Login:
//			  cout << "What do you want? Please select an option:";
//			  choice = choice_handler(choice);
//			  switch (choice)
//			  {
//			  case 1:
//				  User_LOGIN();
//					cout << "                                   Do you want to perform any further activity? Y/N:";
//					cin >> Userwish;
//					if (Userwish == 'Y' || Userwish == 'y')
//					{
//						goto Main_Menu1;
//					}
//					else
//					{
//						goto Last;
//					}
//					break;
//			  case 2:
//				  New_Account();
//				  cout << "                                   Do you want to perform any further activity? Y/N:";
//				  cin >> Userwish;
//				  if (Userwish == 'Y' || Userwish == 'y')
//				  {
//					  goto Login;
//				  }
//				  else
//				  {
//					  goto Last;
//				  }
//				  break;
//			  case 3:
//				  goto Main_Menu1;
//			  default:
//				  cout << "Please Enter a valid choice." << endl;
//				  goto USER_LOG;
//			  }
//
//	}
//	case 3:
//		goto Last;
//		break;
//	default:
//		cout << "                                       Please Enter a valid choice." << endl;
//		goto Main_Menu;
//		fflush(stdin);
//		break;
//	}
//Last:
//	return 0;
//}
//void Welcom_Blink()
//{
//	int j = 0;
//	while (j < 20){
//		cout << "     ***                                ***  ***************   ***                  ***********        *******       ******                  ******  ************** " << endl;
//		cout << "     ***                                ***  ***           *   ***                 **          *      **     **      *** ***               ***  ***  ***          *" << endl;
//		cout << "     ***                                ***  ***               ***                **                 **       **     ***   ***           ***    ***  ***           " << endl;
//		cout << "     ***                                ***  ***               ***               **                 **         **    ***     ***       ***      ***  ***           " << endl;
//		cout << "     ***               **               ***  ***               ***              **                 **           **   ***       ***   ***        ***  ***           " << endl;
//		cout << "     ***             ******             ***  ***        *      ***              **                **             **  ***         ******         ***  ***        *  " << endl;
//		cout << "     ***            ***  ***            ***  ************      ***              **                **             **  ***           **           ***  ************  " << endl;
//		cout << "     ***          ***      ***          ***  ***        *      ***              **                **             **  ***                        ***  ***        *  " << endl;
//		cout << "     ***        ***          ***        ***  ***               ***              **                 **           **   ***                        ***  ***           " << endl;
//		cout << "     ***      ***              ***      ***  ***               ***               **                 **         **    ***                        ***  ***           " << endl;
//		cout << "     ***    ***                  ***    ***  ***               ***                **                 **       **     ***                        ***  ***            " << endl;
//		cout << "     ***  ***                      ***  ***  ***           *   ***           *     **          *      **     **      ***                        ***  ***          *" << endl;
//		cout << "     ******                         *******  ***************   ***************      ***********        *******       ***                        ***  **************" << endl;
//		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
//		cout << "                                                                          TO" << endl;
//		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
//		for (long i = 0; i <= 199990000; i++)
//		{
//			i++;
//		}
//		j++;
//		if (j == 10)
//		{
//			break;
//		}
//		system("cls");
//	}
//	return;
//}
//void trim_spaces(char *a, int size)
//{
//	int i = size - 1;
//	while (i >= 0)
//	{
//		if (a[i] != ' ')
//		{
//			size = i + 1;
//			a[size] = '\0';
//			break;
//		}
//		i--;
//	}
//}
//void New_Account()
//{
//	{
//		string Account_Type = "";
//		int choice = 0;
//		cout << "Please select an Account type:" << endl;
//		cout << "(1) Student                   (2) Current Account" << endl;
//		cout << "(3) Business" << endl;
//		main:
//		cout << "Your choice:";
//		choice = choice_handler(choice);
//		switch (choice)
//		{
//		case 1:
//			Account_Type = "Student";
//			break;
//		case 2:
//			Account_Type = "Current Account";
//			break;
//		case 3:
//			Account_Type = "Business";
//			break;
//		default:
//			cout << "Please select a valid choice and try again..." << endl;
//				goto main;
//		}
//		cout << "                              WELCOME TO SIGN UP MENU\n";
//		bool Condition;//this will chek different kindes of conditios
//		char Office_recogniser;//this will tell if user has office 
//		ofstream out;
//		int i = 0;
//		char Name[100];
//		char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100],confir_Password[100], Profession1[100], Education[100];
//		char CNIC[100], Home_Adress[100], Office_adress[100], Permanent_Adress[100], Residence_country[100], Post_code[100];
//		string Office_adress1 = "No Office", Permanent_Adress1 = "";
//		string Preferred_title;
//		string Merital_status;
//		string Gender;
//		string Profession = "";
//		string Education1 = "", Mailing_Preference;
//		char aCCountNO[100];
//		double Balance = 0;
//	NAME:
//		cout << "Name:";
//		cin.getline(Name, 100);
//		if (Name[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto NAME;
//		}
//		cout << "Preeeferred Title:" << endl;
//		cout << "                   (1)Mr.                                           (2)Mrs." << endl;
//		cout << "                   (3)Ms.                                           (4)Dr." << endl;
//		cout << "                   (5)Master                                        (6)Miss" << endl;
//		cout << "                   (7)Ms.                                           (8)Mx." << endl;
//	PREFERRED_TITLE:
//		cout << "Your Choice:";
//		choice = choice_handler(choice);
//		switch (choice)
//		{
//		case 1:
//			Preferred_title = "Mr.";
//			break;
//		case 2:
//			Preferred_title = "Mrs.";
//			break;
//		case 3:
//			Preferred_title = "Ms.";
//			break;
//		case 4:
//			Preferred_title = "Mr.";
//			break;
//		case 5:
//			Preferred_title = "Master";
//			break;
//		case 6:
//			Preferred_title = "Miss";
//			break;
//		case 7:
//			Preferred_title = "Ms.";
//			break;
//		case 8:
//			Preferred_title = "Mx.";
//			break;
//		default:
//			cout << "Please Enter a valid choice." << endl;
//			goto PREFERRED_TITLE;
//		}
//	FATHER:
//		cout << "Father/Husband/'s Name:";
//		cin.getline(Father_HusbandName, 100);
//		if (Father_HusbandName[0] == '\0')
//		{
//			cout << "You can not skip it. This is compulsory." << endl;
//			goto FATHER;
//		}
//	CNIC://**************************************************
//		cout << "Enter CNIC:";
//		cin.getline(CNIC, 100);////*************************************************CNIC
//		if (CNIC[0] == '\0')
//		{
//			cout << "Your CNIC is not valid Please try again...!\n";
//
//			goto CNIC;
//		}
//		Condition = CNIC_VALIDITY(CNIC, 99);
//		if (Condition == false)
//		{
//		cout << "Your CNIC is not valid Please try again...!\n";
//		goto CNIC;
//		}
//		cout << "Merital Status:" << endl;
//		cout << "                   (1)Single                                          (2)Married" << endl;
//		cout << "                   (3)Widow                                           (4)Widower" << endl;
//		cout << "                   (5)Divorced                                        (6)Separated" << endl;
//	MERITAL:
//		cout << "Your Choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Merital_status = "Single";
//			break;
//		case 2:
//			Merital_status = "Married";
//			break;
//		case 3:
//			Merital_status = "Widow";
//			break;
//		case 4:
//			Merital_status = "Widower";
//			break;
//		case 5:
//			Merital_status = "Divorced";
//			break;
//		case 6:
//			Merital_status = "Separated";
//			break;
//		default:
//			cout << "Please Enter a valid choice." << endl;
//			goto MERITAL;
//		}
//	GENDER:
//		cout << "Gender:" << endl;
//		cout << "                   (1)Male                                            (2)Female" << endl;
//		cout << "                   (3)Neuter" << endl;
//		cout << "Your Choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Gender = "Male";
//			break;
//		case 2:
//			Gender = "Female";
//			break;
//		case 3:
//			Gender = "Nerter";
//			break;
//		default:
//			cout << "Please Enter a valid choice." << endl;
//			goto GENDER;
//		}
//		cout << "Profession:" << endl;
//		cout << "                   (1)Govt.Employee                                   (2)Businessman" << endl;
//		cout << "                   (3)Private Service                                 (4)Housewife" << endl;
//		cout << "                   (5)Doctor                                          (6)Self Employed Professional" << endl;
//		cout << "                   (7)Landlord                                        (8)Engineer" << endl;
//		cout << "                   (9)labourer                                        (10)Professor" << endl;
//		cout << "                   (11)Student                                        (12)Marketing Manager" << endl;
//		cout << "                   (13)Chartered Accountant                           (14)I.T Professional" << endl;
//		cout << "                   (15)HR Manager                                     (16)Civil Service" << endl;
//		cout << "                   (17)Project manager                                (18)Creative Designer" << endl;
//		cout << "                   (19)Aviation Manager                               (20)Military Person" << endl;
//		cout << "                   (21)Musician                                       (22)Politician" << endl;
//		cout << "                   (23)Sports People                                  (24)Writer" << endl;
//		cout << "                   (25)Actor                                          (26)Architect" << endl;
//		cout << "                   (27)Architect                                      (28)Artist" << endl;
//		cout << "                   (29)Model                                          (30)Singer" << endl;
//		cout << "                   (31)Poet                                           (32)Farmer" << endl;
//		cout << "                   (33)Firefighter                                    (34)Fisherman" << endl;
//		cout << "                   (35)Founder                                        (36)Policeman" << endl;
//		cout << "                   (37)Hairdresser                                    (38)Jeweller" << endl;
//		cout << "                   (39)Media Person                                   (40)Religious Leader" << endl;
//		cout << "                   (41)Social Worker                                  (42)Bus Driver" << endl;
//		cout << "                   (43)Riksha Driver                                  (44)Translator" << endl;
//		cout << "                   (45)Theatre Person                                 (46)ShopKeeper" << endl;
//		cout << "                   (47)Furniture Maker                                (48)Fation designer" << endl;
//		cout << "                   (49)Lawyer                                         (50)Banker" << endl;
//		cout << "                   (51)Consultant                                     (52)Psychologist" << endl;
//		cout << "                   (53)Others " << endl;
//	PROFESSION:
//		cout << "Your Choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Profession = "Govt.Employee";
//			break;
//		case 2:
//			Profession = "Businessman";
//			break;
//		case 3:
//			Profession = "Private Service";
//			break;
//		case 4:
//			Profession = "Housewife";
//			break;
//		case 5:
//			Profession = "Doctor";
//			break;
//		case 6:
//			Profession = "Self Employed Professional";
//			break;
//		case 7:
//			Profession = "Landlord";
//			break;
//		case 8:
//			Profession = "Engineer";
//			break;
//		case 9:
//			Profession = "labourer";
//			break;
//		case 10:
//			Profession = "Professor";
//			break;
//		case 11:
//			Profession = "Student";
//			break;
//		case 12:
//			Profession = "Marketing Manager";
//			break;
//		case 13:
//			Profession = "Chartered Accountant";
//			break;
//		case 14:
//			Profession = "I.T Professional";
//			break;
//		case 15:
//			Profession = "HR Manager";
//			break;
//		case 16:
//			Profession = "Civil Service";
//			break;
//		case 17:
//			Profession = "Project manager";
//			break;
//		case 18:
//			Profession = "Creative Designer";
//			break;
//		case 19:
//			Profession = "Aviation Manager";
//			break;
//		case 20:
//			Profession = "Military Person";
//			break;
//		case 21:
//			Profession = "Musician";
//			break;
//		case 22:
//			Profession = "Politician";
//			break;
//		case 23:
//			Profession = "Sports People";
//			break;
//		case 24:
//			Profession = "Writer";
//			break;
//		case 25:
//			Profession = "Actor";
//			break;
//		case 26:
//			Profession = "Architect";
//			break;
//		case 27:
//			Profession = "Architect";
//			break;
//		case 28:
//			Profession = "Artist";
//			break;
//		case 29:
//			Profession = "Model";
//			break;
//		case 30:
//			Profession = "Singer";
//			break;
//		case 31:
//			Profession = "Poet";
//			break;
//		case 32:
//			Profession = "Farmer";
//			break;
//		case 33:
//			Profession = "Firefighter";
//			break;
//		case 34:
//			Profession = "Fisherman";
//			break;
//		case 35:
//			Profession = "Founder";
//			break;
//		case 36:
//			Profession = "Policeman";
//			break;
//			break;
//		case 37:
//			Profession = "Hairdresser";
//			break;
//		case 38:
//			Profession = "Jeweller";
//			break;
//		case 39:
//			Profession = "Media Person";
//			break;
//		case 40:
//			Profession = "Religious Leader";
//			break;
//		case 41:
//			Profession = "Social Worker";
//			break;
//		case 42:
//			Profession = "Bus Driver";
//			break;
//		case 43:
//			Profession = "Riksha Driver";
//			break;
//		case 44:
//			Profession = "Translator";
//			break;
//		case 45:
//			Profession = "Theatre Person";
//			break;
//		case 46:
//			Profession = "ShopKeeper";
//			break;
//		case 47:
//			Profession = "Furniture Maker";
//			break;
//		case 48:
//			Profession = "Fation designer";
//			break;
//		case 49:
//			Profession = "Lawyer";
//			break;
//		case 50:
//			Profession = "Banker";
//			break;
//		case 51:
//			Profession = "Consultant";
//			break;
//		case 52:
//			Profession = "Psychologist";
//			break;
//		case 53:
//		{
//				   cin.ignore();
//			   PROFESSION1:
//				   cout << "Please Specify:--";
//				   cin.getline(Profession1, 100);
//				   if (Profession1[0] = '\0')
//				   {
//					   cout << "You can not skip this portion this is importatn.\n";
//					   goto PROFESSION1;
//				   }
//				   for (int i = 0; Profession1[i] != '\0'; i++)
//					   Profession = Profession + Profession1[i];
//				   break;
//		default:
//			cout << "Please Enter a valid choice." << endl;
//			goto PROFESSION;
//		}
//		}
//	EDUCATION:
//		cout << "Education:" << endl;
//		cout << "                   (1)No Education                                  (2)Below Matric" << endl;
//		cout << "                   (3)Matriculation//O level                        (4)Intermediate//A level" << endl;
//		cout << "                   (5)Diploma                                       (6)Graduate" << endl;
//		cout << "                   (7)Post Graduate                                 (8)Doctrate" << endl;
//		cout << "                   (9)Others" << endl;
//		cout << "Your Choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Education1 = "No Education ";
//			break;
//		case 2:
//			Education1 = "Below Matric";
//			break;
//		case 3:
//			Education1 = "Matriculation/O level";
//			break;
//		case 4:
//			Education1 = "Intermediate/A level";
//			break;
//		case 5:
//			Education1 = "Diploma";
//			break;
//		case 6:
//			Education1 = "Graduate";
//			break;
//		case 7:
//			Education1 = "Post Graduate";
//			break;
//		case 8:
//			Education1 = "Doctrate";
//			break;
//		case 9:
//		{cin.ignore();
//	EDUCATION1:
//		cout << "Please Specify:--";
//		cin.getline(Education, 21);
//		if (Education[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto EDUCATION1;
//		}
//		for (int i = 0; Education[i] != '\0'; i++)
//			Education1 = Education1 + Education[i];
//		break;
//		default:
//			cout << "Please Enter a valid choice." << endl;
//			goto EDUCATION;
//		}
//
//		}
//		cin.ignore();
//	HOME_ADD:
//		cout << "Home Adress:";
//		cin.getline(Home_Adress, 100);
//		if (Home_Adress[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto HOME_ADD;
//		}
//		cout << "                                                 Press  1 if same as Home Adress or type adress. \n";
//	PERMANENT:
//		cout << "Permanent Adress:";
//		cin.getline(Permanent_Adress, 100);
//		if (Permanent_Adress[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto PERMANENT;
//		}
//		if (Permanent_Adress[0] == '1')
//		{
//			for (int i = 0; Home_Adress[i] != '\0'; i++)
//				Permanent_Adress1 = Permanent_Adress1 + Home_Adress[i];
//		}
//		cout << "Do you have a Office? Y/N:";
//		cin >> Office_recogniser;
//		if (Office_recogniser == 'Y' || Office_recogniser == 'y')
//		{
//			Office_adress1 = "";
//			cin.ignore();
//		OFFICE:
//			cout << "Office Adress:";
//			cin.getline(Office_adress, 100);
//			if (Office_adress[0] == '\0')
//			{
//				cout << "You can not skip this portion this is importatn.\n";
//				goto OFFICE;
//			}
//			for (int i = 0; Office_adress[i] != '\0'; i++)
//			{
//				Office_adress1 = Office_adress1 + Office_adress[i];
//			}
//		}
//	MAILIN_PRFERRENCE:
//		cout << "Mailng preference:" << endl;
//		cout << "                   (1)Home                                   (2)Permanent" << endl;
//		cout << "                   (3)Office" << endl;
//		cout << "Your Choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Mailing_Preference = "Home";
//			break;
//		case 2:
//			Mailing_Preference = "Permanent Adress";
//			break;
//		case  3:
//			Mailing_Preference = "Office";
//			break;
//		default:
//			cout << "Please Ennter a valid choice." << endl;
//			goto MAILIN_PRFERRENCE;
//		}
//	POST:
//		cin.ignore();
//		cout << "Post code:";
//		cin.getline(Post_code, 100);
//		if (Post_code[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto POST;
//		}
//	EMAIL:
//		cout << "Email Adress:";
//		cin.getline(Email, 100);
//		if (Email[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto EMAIL;
//		}
//	MOBILE:
//		cout << "Phone Number:";
//		cin.getline(Mobile_Number, 100);
//		if (Mobile_Number[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto MOBILE;
//		}
//	COUNTRY:
//		cout << "Residence Country:";
//		cin.getline(Residence_country, 100);
//		if (Residence_country[0] == '\0')
//		{
//			cout << "You can not skip this portion this is importatn.\n";
//			goto COUNTRY;
//		}
//		cout << "                                                                         Sign Up Guides:" << endl;
//		cout << "                                                                         Username  must  be at  least 3 characters" << endl;
//		cout << "                                                                         and   maximum   characters are  20. Pasword must" << endl;
//		cout << "                                                                         be at least  8 characters and maximum character" << endl;
//		cout << "                                                                         are 15.\n" << endl;
//	USERNAME:
//		cout << "Username:";
//		cin.getline(User_name, 100);
//		Condition = UserNameValidity(User_name);
//		if (Condition == false)
//		{
//		cout << "User name is too short or too long Please read sign Up guides!\n";
//		goto USERNAME;
//		}
//	PASSWORD:
//		cout << "Pasword: ";
//		invisible_password(Password);
//		cout << "Confirm Password: ";
//		invisible_password(confir_Password);
//		Condition = Pasword_validity(Password);
//		if (Condition == false)
//		{
//		cout << "Password is too short or too long Please read sign Up guides!\n";
//		goto PASSWORD;
//		}
//		if (strcmp(Password, confir_Password) != 0)
//		{
//			cout << "Password does not match" << endl;
//			goto PASSWORD;
//		}
//		cout << endl;
//		out.open("User_info.txt", ios::app);
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education1 << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress1 << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference;
//			out << left << setw(30) << Post_code << left << setw(40) << User_name << left << setw(40) << Password;
//			GenereteAccount(CNIC);
//			strcpy_s(aCCountNO, CNIC);
//			out << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << Balance << left << setw(40) <<Account_Type<< endl;
//		}
//		out.close();
//		cout << "                                                             Hi," << Name << endl;
//		cout << "                                                             You have created your account successufully!" << endl;
//		cout << "                                                             Your account No is:" << aCCountNO << endl;
//	}
//	return;
//}
//bool CNIC_VALIDITY(char *a, int size)
//{
//	int i = 0;
//	while (i <= size)
//	{
//		if (a[i] == '\0')
//		{
//			break;
//		}
//		i++;
//	}
//	if (a[5] == '-'&&a[13] == '-'&&i == 15)
//	{
//		return true;
//	}
//	return false;
//}
//void User_LOGIN()
//{
//main:
//	int m = 0;
//	bool b = false;
//	char User_login_name[100];
//	char User_login_Password[100];
//	cout << "Enter User Name:";
//	cin.getline(User_login_name, 100);
//	cout << "Enter Password:";
//	invisible_password(User_login_Password);
//	ifstream i;
//	i.open("User_info.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		trim_spaces(CNIC, 25);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/***********************************************************88*/
//		i.get(User_name, 41);
//		trim_spaces(User_name, 40);
//		/***********************************************************88*/
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(Password, 40);
//		int result = strcmp(User_login_name, User_name);
//		int result2 = strcmp(User_login_Password, Password);
//		//**********************************************************88
//		if (result == 0 && result2 == 0)
//		{
//			cout << "Successful!..." << endl;
//			b = true;
//			break;
//		}
//		//**********************************************************88
//	}
//	i.close();
//	if (b == true)
//	{
//		USER();
//	}
//	else
//	{
//		cout << "User name or password does not match. Try again..." << endl;
//		m++;
//		if (m == 2)
//		{
//			goto last;
//		}
//		goto main;
//	}
//last:
//	return;
//}
//void Unite_Bank()
//{
//	cout << "                        *           * *         * ***  *********** *********        *********           *         *         * *     *" << endl;
//	cout << "                        *           * * *       *  *        *      *                *         *        * *        * *       * *    *" << endl;
//	cout << "                        *           * *  *      *  *        *      *                *          *      *   *       *  *      * *   *" << endl;
//	cout << "                        *           * *   *     *  *        *      *                *         *      *     *      *   *     * *  *" << endl;
//	cout << "                        *           * *    *    *  *        *      *********        *********       *       *     *    *    * **" << endl;
//	cout << "                        *           * *     *   *  *        *      *                *         *    ***********    *     *   * *  *" << endl;
//	cout << "                        *           * *      *  *  *        *      *                *          *  *           *   *      *  * *   *" << endl;
//	cout << "                         *         *  *       * *  *        *      *                *         *  *             *  *       * * *    *" << endl;
//	cout << "                           *******    *         * ***       *      *********        *********   *               * *         * *     *" << endl;
//	return;
//}
//void file()
//{
//	ofstream out("User_info.txt", ios::app);
//	out << left << setw(40) << "User Names" << left << setw(40) << "Fathers Names" << left << setw(25) << "CNIC" << left << setw(50) << "Email_IDs" << left << setw(30) << "Mobile Numbers";
//	out << left << setw(30) << "Education" << left << setw(30) << "Preferred Titles" << left << setw(30) << "Marital Status" << left << setw(20) << "Gender";
//	out << left << setw(20) << "Professions" << left << setw(20) << "Residence Country";
//	out << left << setw(100) << "Home Adress" << left << setw(100) << "Permanent Adress" << left << setw(100) << "Office Adress" << left << setw(30) << "Mailing Preference";
//	out<< left << setw(30) << "Post Code" << left << setw(40) << "User Name" << left << setw(40) << "Password" << left << setw(40) << "Account NO" << left << setw(40) << "Balance" << left << setw(40) << "Account Type" << endl;
//	out.close();
//}
//bool Pasword_validity(const char *a)
//{
//	bool b = false;
//	int i = 0;
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		int c = 0;
//	}
//	if (i >= 8 && i <= 15)
//	{
//		b = true;
//	}
//	return b;
//}
//bool UserNameValidity(const char *a)
//{
//	bool b = false;
//	int i = 0;
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		int c = 0;
//	}
//	if (i >= 3 && i <= 15)
//	{
//		b = true;
//	}
//	return b;
//}
//void GenereteAccount(char *a)
//{
//	int i = 0;
//	int j = 0;
//	char Account[30];
//	while (a[i] != '\0')
//	{
//		if (a[i] == '-')
//		{
//			Account[i] = '7';
//		}
//		else
//		{
//			Account[i] = a[i];
//		}
//		i++;
//	}
//	i -= 1;
//	while (i >= 0)
//	{
//		a[j] = Account[i];
//		i--;
//		j++;
//	}
//	return;
//}
//void change_admin_pasword()
//{
//	char New_pass[30];
//	char New_UserName[30];
//	char AdminName[30];
//	char AdminPassword[30];
//	char confirm_pas[100];
//	ifstream i("Admin_file.txt");
//	ofstream o("Admin_file.txt");
//	i.getline(AdminName, 30);
//	i.getline(AdminPassword, 30);
//	Main:
//	cout << "Enter New User name:";
//	cin.getline(New_UserName, 30);
//	cout << "Enter New Password:";
//	invisible_password(New_pass);
//	cout << "Confirm New Password:";
//	invisible_password(confirm_pas);
//	if (strcmp(New_pass, confirm_pas) != 0)
//	{
//		cout << "Pasword does not match. Try again..." << endl;
//		goto Main;
//	}
//	o << New_UserName << endl;
//	o << New_pass << endl;
//	i.close();
//	o.close();
//	cout << "                                                   You Have successfully done!" << endl;
//}
//void User_account_delete()
//{
//	int result;
//	char UserCNIC[150];
//	cout << "Enter User\'s CNIC To delete Account:";
//	cin.getline(UserCNIC, 150);
//	ifstream i;
//	ofstream out;
//	i.open("User_info.txt");
//	out.open("User_info2.txt", ios::app);
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char  Balance[150];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		trim_spaces(CNIC, 25);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/***********************************************************88*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance , 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		result = strcmp(UserCNIC, CNIC);
//		if (result != 0)
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1;
//			out << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//		}
//	}
//	i.close();
//	out.close();
//	remove("User_info.txt");
//	rename("User_info2.txt", "User_info.txt");
//	cout << "Account deleted Successfully..."<<endl;
//}
//void Add_Balance()
//{
//	float Amount=0;
//	bool b=false;
//	float amount;
//	int result=0;
//	char AccountNO[150];
//	ifstream i;
//	ofstream out;
//	i.open("User_info.txt", ios::app);
//	out.open("User_info1.txt", ios::app);
//	cout << "                                      Enter User\'s Account NO to add Balance:";
//	cin.getline(AccountNO, 150);
//	b=Account_identify(AccountNO);
//	while (b != true)
//	{
//		cout << "                                      Enter User\'s Account NO to add Balance:";
//		cin.getline(AccountNO, 150);
//		b = Account_identify(AccountNO);
//		result++;
//		if (result == 2)
//		{
//			goto last;
//		}
//	}
//
//	AMONT:
//	cout << "                                      Enter amount to add:";
//
//	Amount = amount_chek(Amount);
//	if (Amount < 500)
//	{
//		result++;
//		if (result == 2)
//		{
//			goto last;
//		}
//		cout << "Amount should not be less than Rs.500" << endl;
//		goto AMONT;
//	}
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		trim_spaces(CNIC, 25);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, AccountNO);
//		if (result == 0)
//		{
//			amount = (float)atoi(Balance);
//			amount = amount + Amount;
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//		}
//		else
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//		}
//
//	}
//	cout << "Operational Successfull!" << endl;
//	i.close();
//	out.close();
//	remove("User_info.txt");
//	rename("User_info1.txt", "User_info.txt");
//last:
//	return;
//}
//void Admin_Mode()
//{
//	int choice=0;
//	Main1:
//	cout << "                                                Welcome Admin\n";
//	cout << "(1) Change password                        (2) Delete User Account" << endl;
//	cout << "(3) Add User Balance                       (4) View user infomation" << endl;
//	cout << "(5) Exit" << endl;
//	cout << "                                               Your wish:!";
//Main:
//	choice=choice_handler(choice);
//	switch (choice)
//	{
//	case 1:
//		change_admin_pasword();
//
//		break;
//	case 2:
//		User_account_delete();
//		break;
//	case 3:
//		Add_Balance();
//		break;
//	case 4:
//		view_User_info();
//		break;
//	case 5:
//		goto Last;
//		break;
//	default:
//		cout << "                                              Please enter a valid choice." << endl;
//		cout << "Your choice:";
//		goto Main;
//		break;
//	}
//	goto Main1;
//Last:
//	return;
//}
//void AdminLogin()
//{
//	char AdminName[50];
//	char AdminPassword[50];
//Main:
//	cout << "                                     Enter Admin User name:";
//	cin.getline(AdminName, 50);
//	cout << "                                     Enter  Admin Password:";
//	invisible_password(AdminPassword);
//	ifstream i("Admin_file.txt");
//	char AdminFileName[50];
//	char AdminFilePassword[50];
//	i.getline(AdminFileName, 50);
//	i.getline(AdminFilePassword, 50);
//	if (strcmp(AdminFileName, AdminName) == 0 && strcmp(AdminFilePassword, AdminPassword) == 0)
//	{
//		cout << "Successful!" << endl;
//		Admin_Mode();
//	}
//	else
//	{
//		cout << "Password or Username does not match" << endl;
//		goto Main;
//	}
//	i.close();
//
//}
//bool Account_identify(const char *a)
//{
//	bool b = false;
//	int result;
//	ifstream i;
//	i.open("User_info.txt", ios::app);
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, a);
//		if (result == 0)
//		{
//			b = true;
//		}
//	}
//	i.close();
//	return b;
//}
//bool Equal_Account(const char *a, const char *b)
//{
//	bool c = true;
//	int d = strcmp(a, b);
//	if (d == 0)
//	{
//		c = false;
//	}
//	return c;
//}
//void  Cash_WIthdrawal()
//{
//	int j = 0;
//	bool b = false;
//	bool a = false;
//	float amount;
//	int result;
//	char YOUR_ACCOUNT_NO[150];
//	ifstream i;
//	ofstream out;
//ACCOUNT1:
//	cout << "Enter  your Account No:";
//	cin.getline(YOUR_ACCOUNT_NO, 150);
//	a = Account_identify(YOUR_ACCOUNT_NO);
//	if (a != true)
//	{
//		cout << "                                        Account Not found!" << endl;
//		cout << "                                        Please ENter a valid account number." << endl;
//		j++;
//		if (j == 2)
//		{
//			goto last;
//		}
//		goto ACCOUNT1;
//	}
//	j = 0;
//	float Amount=0;
//	AMON:
//	cout << "Enter amount to withdraw:";
//	Amount = amount_chek(Amount);
//	if (Amount < 500)
//	{
//		cout << "Amount should not be less than Rs. 500.00" << endl;
//		goto AMON;
//	}
//	i.open("User_info.txt", ios::app);
//	out.open("User_info1.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//		amount = (float)atoi(Balance);
//		if (result == 0 && Amount <= amount)
//		{
//				amount = amount - Amount;
//				out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//				b = true;
//		}
//		else
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//		}
//	}
//	if (b == true)
//	{
//		cout << "                                      Collect your money form cashier!" << endl;
//		cout << "                                      Thans for using our service.\n";
//	}
//	else
//	{
//		cout << "Sorry! You have insuficient balance to make this transaction." << endl;
//	}
//	i.close();
//	out.close();
//	remove("User_info.txt");
//	rename("User_info1.txt", "User_info.txt");
//last:
//	return;
//}
//void Balance_inquiry()
//{
//	int j = 0;
//	bool a = false;
//	double amount;
//	int result;
//	char YOUR_ACCOUNT_NO[150];
//	ifstream i;
//	ofstream out;
//ACCOUNT1:
//	cout << "Enter  your Account No:";
//	cin.getline(YOUR_ACCOUNT_NO, 150);
//	a = Account_identify(YOUR_ACCOUNT_NO);
//	if (a != true)
//	{
//		cout << "                                        Account Not found!" << endl;
//		cout << "                                        Please ENter a valid account number." << endl;
//		j++;
//		if (j == 2)
//		{
//			goto last;
//		}
//		goto ACCOUNT1;
//	}
//	j = 0;
//	i.open("User_info.txt", ios::app);
//	out.open("User_info1.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//		if (result == 0)
//		{
//			amount = atof(Balance);
//			cout << "                            Your Balance is:" << fixed << setprecision(2) << amount << endl;
//		}
//	}
//
//	i.close();
//last:
//	return;
//}
//void  Fast_Transfer()
//{
//	int choice=0, j = 0, k = 0;
//	ifstream i;
//	ofstream out;
//Main:
//	cout << "(1)  Rs. 500                                        (2)  Rs. 1000" << endl;
//	cout << "(3)  Rs. 2000                                       (4)  Rs. 3000" << endl;
//	cout << "(5)  Rs. 4000                                       (6)  Rs. 5000" << endl;
//	cout << "(7)  Rs. 6000                                       (8)  Rs. 7000" << endl;
//	cout << "(9)  Rs. 8000                                       (10) Rs. 9000" << endl;
//	cout << "(11) Rs. 10,000                                     (12) Rs. 12,000" << endl;
//	cout << "(13) Rs. 15,000                                     (14) Rs. 20,000" << endl;
//	cout << "(15) Leave this menu" << endl;
//	cout << "Enter Your Choice:";
//	choice = choice_handler(choice);
//	switch (choice)
//	{
//	case 1:
//		choice = 500;
//		break;
//	case 2:
//		choice = 1000;
//		break;
//	case 3:
//		choice = 2000;
//		break;
//	case 4:
//		choice = 3000;
//		break;
//	case 5:
//		choice = 4000;
//		break;
//	case 6:
//		choice = 5000;
//		break;
//	case 7:
//		choice = 6000;
//		break;
//	case 8:
//		choice = 7000;
//		break;
//	case 9:
//		choice = 8000;
//		break;
//	case 10:
//		choice = 9000;
//		break;
//	case 11:
//		choice = 10000;
//		break;
//	case 12:
//		choice = 12000;
//		break;
//	case 13:
//		choice = 15000;
//		break;
//	case 14:
//		choice = 20000;
//		break;
//	case 15:
//		goto last;
//	default:
//		cout << "Please enter a valid choice." << endl;
//		goto Main;
//		break;
//	}
//	bool b = false;
//	bool a = false;
//	double amount;
//	int result, resutl1,result2;
//	char YOUR_ACCOUNT_NO[150];
//	char Your_pas[100];
//	char RECIEVER_ACCOUNT_NO[150];
//ACCOUNT1:
//ACCOUNT3 :
//	cout << "Enter  your Account No:";
//		 cin.getline(YOUR_ACCOUNT_NO, 150);
//		 a = Account_identify(YOUR_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Account Not found!" << endl;
//			 cout << "                                        Please ENter a valid account number." << endl;
//			 j++;
//			 if (j == 2)
//			 {
//				 goto Main;
//			 }
//			 goto ACCOUNT1;
//		 }
//		 j = 0;
//		 cout << "                                 Enter Your Password:";
//		 invisible_password(Your_pas);
//	 ACCOUNT2:
//		 cout << "                                 Enter The receiver acount number:";
//		 cin.getline(RECIEVER_ACCOUNT_NO, 150);
//		 a = Account_identify(RECIEVER_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Account Not found!" << endl;
//			 cout << "                                        Please ENter a valid account number." << endl;
//			 j++;
//			 if (j == 2)
//			 {
//				 goto Main;
//			 }
//			 goto ACCOUNT2;
//		 }
//		 k = 0;
//		 a = Equal_Account(YOUR_ACCOUNT_NO, RECIEVER_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Same Accounts!" << endl;
//			 cout << "                                        Please ENter a two difrent account numbers." << endl;
//			 k++;
//			 if (k == 2)
//			 {
//				 goto Main;
//			 }
//
//			 goto ACCOUNT3;
//		 }
//		 k = 0;
//
//		 float Amount = float(choice);
//
//		 i.open("User_info.txt", ios::app);
//		 out.open("User_info1.txt");
//		 char Name[100];
//		 char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//		 char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//		 char Preferred_title[100];
//		 char Merital_status[100];
//		 char Gender[100];
//		 char Profession[100];
//		 char Education[100], Mailing_Preference[100];
//		 char aCCountNO[150];
//		 char Balance[50];
//		 char Account_Type[100];
//		 while (i.peek() != EOF)
//		 {
//			 i.get(Name, 41);
//			 i.get(Father_HusbandName, 41);
//			 /***********************************************************88*/
//			 i.get(CNIC, 26);
//			 i.get(Email, 51);
//			 i.get(Mobile_Number, 31);
//			 i.get(Education, 31);
//			 i.get(Preferred_title, 31);
//			 i.get(Merital_status, 31);
//			 i.get(Gender, 21);
//			 i.get(Profession, 21);
//			 i.get(Residence_country, 21);
//			 i.get(Home_Adress, 101);
//			 i.get(Permanent_Adress, 101);
//			 i.get(Office_adress1, 101);
//			 i.get(Mailing_Preference, 31);
//			 i.get(Post_code, 31);
//			 /*"**********************************************************88";*/
//			 i.get(User_name, 41);
//			 i.get(Password, 41);
//			 trim_spaces(Password, 40);
//			 i.get(aCCountNO, 41);
//			 i.get(Balance, 41);
//			 i.get(Account_Type, 41);
//			 i.ignore();
//			 trim_spaces(aCCountNO, 40);
//			 result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//			 resutl1 = strcmp(aCCountNO, RECIEVER_ACCOUNT_NO);
//			 result2 = strcmp(Password, Your_pas);
//			 amount = (float)atoi(Balance);
//			 if (result == 0 && result2 == 0 && Amount <= amount)
//			 {
//				 amount = amount - Amount;
//				 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//				 b = true;
//			 }
//			 if (resutl1 == 0)
//			 {
//				 amount = atof(Balance);
//				 amount = amount + Amount;
//				 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//			 }
//
//			 if (result != 0 && result2 != 0 && resutl1 != 0)
//			 {
//				 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//			 }
//		 }
//		 if (b == true)
//		 {
//			 cout << "You have successfully done!\n";
//			 goto last;
//		 }
//		 else
//		 {
//			 cout << "Sorry! You have insuficient balance to make this transaction." << endl;
//
//		 }
//	 last:
//		 i.close();
//		 out.close();
//		 remove("User_info.txt");
//		 rename("User_info1.txt", "User_info.txt");
//	
//		 return;
//}
//
//void change_password()
//{
//	int j = 0;
//	bool b = false;
//	bool a = false;
//	int result;
//	ifstream i;
//	ofstream out;
//	char YOUR_ACCOUNT_NO[150];
//	char New_password[150];
//	char confirm_New_password[150];
//ACCOUNT1:
//	cout << "Enter  your Account No:";
//	cin.getline(YOUR_ACCOUNT_NO, 150);
//	a = Account_identify(YOUR_ACCOUNT_NO);
//	if (a != true)
//	{
//		cout << "                                        Account Not found!" << endl;
//		cout << "                                        Please ENter a valid account number." << endl;
//		j++;
//		if (j == 2)
//		{
//			goto last;
//		}
//		goto ACCOUNT1;
//	}
//	j = 0;
//	CHANGE:
//	cout << "Enter New Password: ";
//	invisible_password(New_password);
//	cout << "Confirm New Password: ";
//	invisible_password(confirm_New_password);
//	if (strcmp(New_password, confirm_New_password) != 0)
//	{
//		j++;
//		if (j == 2)
//		{
//			goto last;
//		}
//		cout << "Password does not match.Try again..." << endl;
//		goto CHANGE;
//	}
//	i.open("User_info.txt", ios::app);
//	out.open("User_info1.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//		if (result == 0)
//		{
//			strcpy_s(Password, New_password);
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << Balance << left << setw(40) << Account_Type << endl;
//			b = true;
//		}
//		else
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//		}
//	}
//	if (b == true)
//	{
//		cout << "You have successfully change your password!\n";
//	}
//	i.close();
//	out.close();
//	remove("User_info.txt");
//	rename("User_info1.txt", "User_info.txt");
//last:
//	return;
//}
//void DELETE_ACCOUNT()
//{
//	int j = 0;
//	bool b = false;
//	bool a = false;
//	int result;
//	ifstream i;
//	ofstream out;
//	char YOUR_ACCOUNT_NO[150];
//ACCOUNT1:
//	cout << "Enter  your Account No:";
//	cin.getline(YOUR_ACCOUNT_NO, 150);
//	a = Account_identify(YOUR_ACCOUNT_NO);
//	if (a != true)
//	{
//		cout << "                                        Account Not found!" << endl;
//		cout << "                                        Please ENter a valid account number." << endl;
//		j++;
//		if (j == 2)
//		{
//			goto last;
//		}
//		goto ACCOUNT1;
//	}
//	j = 0;
//	i.open("User_info.txt", ios::app);
//	out.open("User_info1.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char Balance[50];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/*"**********************************************************88";*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		trim_spaces(aCCountNO, 40);
//		result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//		if (result != 0)
//		{
//			out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//			out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//			out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//			out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//			out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << Balance << left << setw(40) << Account_Type<< endl;
//			b = true;
//		}
//	}
//	if (b == true)
//	{
//		cout << "You have successfully deleted Your Account!\n";
//	}
//	i.close();
//	out.close();
//	remove("User_info.txt");
//	rename("User_info1.txt", "User_info.txt");
//last:
//	system("pause");
//	return;
//}
//void USER()
//{
//	int choice=0;
//Main1:
//	cout << "                                    (1) Fast Transfer         (2) Cash Withdrawal" << endl;
//	cout << "                                    (3) Balance Inquiry       (4) Change Password" << endl;
//	cout << "                                    (5) Delete Account        (6) Send Money"<<endl;
//	cout << "                                    (7)logout" << endl;
//Main:
//	cout << "Please select an Option:";
//	choice = choice_handler(choice);
//	switch (choice)
//	{
//	case 1:
//		Fast_Transfer();
//		break;
//	case 2:
//		Cash_WIthdrawal();
//		break;
//	case 3:
//		Balance_inquiry();
//		break;
//	case 4:
//		change_password();
//		break;
//	case 5:
//		DELETE_ACCOUNT();
//		goto last;
//		break;
//	case 6:
//		send_money();
//		break;
//	case 7:
//		goto last;
//		break;
//	default:
//		cout << "Please Enter a valid choice." << endl;
//		goto Main;
//	}
//	goto Main1;
//last:
//	return;
//}
//void invisible_password(char Password[])
//{
//	int i = 0;
//	while (true)
//	{
//		Password[i] = _getch();
//		if (Password[i] == '\b'&&i>0)
//		{
//			cout << "\b \b";
//			i--;
//			continue;
//		}
//		if (Password[i] == '\0'&&i == 0)
//		{
//			cout << " \b";
//			i = 0;
//			continue;
//		}
//		if (Password[i] == 13)
//		{
//			break;
//		}
//		if (Password[i] != '\b')
//		{
//			cout << "*";
//			i++;
//		}
//	}
//	Password[i] = '\0';
//	cout << endl;
//	return;
//}
//float amount_chek(float a)
//{
//	float b;
//	char amount[100];
//	cin.getline(amount, 100);
//	if (amount[0] == '\0')
//	{
//		cout << "Please Enter valid amount.(" << ".)" << endl;
//	}
//		 b=(float)atoi(amount);
//		 return b;
//}
//int choice_handler(int a)
//{
//main:
//	char choice[100];
//	cin.getline(choice, 100);
//	if (choice[0] == '\0')
//	{
//		cout << "Please enter a valid option and try again..." << endl;
//		cout << "Your choice:";
//		goto main;
//	}
//	return atoi(choice);
//}
//void view_User_info()
//{
//	int result;
//	char UserCNIC[150];
//	cout << "Enter User\'s CNIC see User\'s info:";
//	cin.getline(UserCNIC, 150);
//	ifstream i;
//	i.open("User_info.txt");
//	char Name[100];
//	char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//	char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//	char Preferred_title[100];
//	char Merital_status[100];
//	char Gender[100];
//	char Profession[100];
//	char Education[100], Mailing_Preference[100];
//	char aCCountNO[150];
//	char  Balance[150];
//	char Account_Type[100];
//	while (i.peek() != EOF)
//	{
//		i.get(Name, 41);
//		i.get(Father_HusbandName, 41);
//		/***********************************************************88*/
//		i.get(CNIC, 26);
//		trim_spaces(CNIC, 25);
//		i.get(Email, 51);
//		i.get(Mobile_Number, 31);
//		i.get(Education, 31);
//		i.get(Preferred_title, 31);
//		i.get(Merital_status, 31);
//		i.get(Gender, 21);
//		i.get(Profession, 21);
//		i.get(Residence_country, 21);
//		i.get(Home_Adress, 101);
//		i.get(Permanent_Adress, 101);
//		i.get(Office_adress1, 101);
//		i.get(Mailing_Preference, 31);
//		i.get(Post_code, 31);
//		/***********************************************************88*/
//		i.get(User_name, 41);
//		i.get(Password, 41);
//		i.get(aCCountNO, 41);
//		i.get(Balance, 41);
//		i.get(Account_Type, 41);
//		i.ignore();
//		result = strcmp(UserCNIC, CNIC);
//		if (result == 0)
//		{
//			cout << "                    Name:                    " << Name << endl;
//			cout << "                    Father//Husband/'s Name: " << Father_HusbandName << endl;
//			cout << "                    CNIC:                    " << CNIC << endl;
//			cout << "                    Emain:                   " << Email << endl;
//			cout << "                    Contact NO:              "<< Mobile_Number<<endl;
//			cout << "                    Education:               " << Education << endl;
//			cout << "                    Preferred Title:         " << Preferred_title << endl;
//			cout << "                    Merital status:          " << Merital_status << endl;
//			cout << "                    Gender:                  " << Gender<<endl;;
//			cout << "                    Profession:              " << Profession << endl;
//			cout << "                    Residnce country:        " << Residence_country<<endl;
//			cout << "                    Home adress:             " << Home_Adress << endl;
//			cout << "                    Permanent Adress:        " << Permanent_Adress << endl;
//			cout << "                    Office adress:           " << Office_adress1<<endl;
//			cout << "                    Mailing Preference:      " << Mailing_Preference << endl;
//			cout << "                    Post code:               " << Post_code << endl;
//			cout << "                    User Name:               " << User_name << endl;
//			cout << "                    Password:                " << Password << endl;
//			cout << "                    Account NO:              " << aCCountNO << endl;
//			cout << "                    Balance:                 " << Balance << endl;
//			cout << "                    Account Type:            " << Account_Type << endl;
//		}
//	}
//	i.close();
//	system("pause");
//}
//void  send_money()
//{
//	int  j = 0, k = 0;
//	ifstream i;
//	ofstream out;
//	bool b = false;
//	bool a = false;
//	float amount;
//	float Amount=0;
//	int result, resutl1,result2;
//	char YOUR_ACCOUNT_NO[150];
//	char Your_pas[100];
//	char RECIEVER_ACCOUNT_NO[150];
//ACCOUNT1:
//ACCOUNT3 :
//	cout << "Enter  your Account No:";
//		 cin.getline(YOUR_ACCOUNT_NO, 150);
//		 a = Account_identify(YOUR_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Account Not found!" << endl;
//			 cout << "                                        Please ENter a valid account number." << endl;
//			 j++;
//			 if (j == 2)
//			 {
//				 goto last;
//			 }
//			 goto ACCOUNT1;
//		 }
//		 j = 0;
//		 cout << "Enter your Password:";
//		 invisible_password(Your_pas);
//	 ACCOUNT2:
//		 cout << "Enter The receiver acount number:";
//		 cin.getline(RECIEVER_ACCOUNT_NO, 150);
//		 a = Account_identify(RECIEVER_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Account Not found!" << endl;
//			 cout << "                                        Please ENter a valid account number." << endl;
//			 j++;
//			 if (j == 2)
//			 {
//				 goto last;
//			 }
//			 goto ACCOUNT2;
//		 }
//		 k = 0;
//		 a = Equal_Account(YOUR_ACCOUNT_NO, RECIEVER_ACCOUNT_NO);
//		 if (a != true)
//		 {
//			 cout << "                                        Same Accounts!" << endl;
//			 cout << "                                        Please ENter a two difrent account numbers." << endl;
//			 k++;
//			 if (k == 2)
//			 {
//				 goto last;
//			 }
//
//			 goto ACCOUNT3;
//		 }
//		 k = 0;
//		 cout << "Enter the Amount to send:";
//		 Amount = amount_chek(Amount);
//		 while (Amount < 500)
//		 {
//			 cout << "                                    Amount should not be less than Rs.500" << endl;
//			 cout << "Enter the Amount to send:";
//			 Amount = amount_chek(Amount);
//		 }
//		 i.open("User_info.txt", ios::app);
//		 out.open("User_info1.txt");
//		 char Name[100];
//		 char Father_HusbandName[100], Email[100], Mobile_Number[100], User_name[100], Password[100];
//		 char CNIC[100], Home_Adress[150], Permanent_Adress[150], Residence_country[100], Post_code[100], Office_adress1[150];
//		 char Preferred_title[100];
//		 char Merital_status[100];
//		 char Gender[100];
//		 char Profession[100];
//		 char Education[100], Mailing_Preference[100];
//		 char aCCountNO[150];
//		 char Balance[50];
//		 char Account_Type[100];
//		 while (i.peek() != EOF)
//		 {
//			 i.get(Name, 41);
//			 i.get(Father_HusbandName, 41);
//			 /***********************************************************88*/
//			 i.get(CNIC, 26);
//			 i.get(Email, 51);
//			 i.get(Mobile_Number, 31);
//			 i.get(Education, 31);
//			 i.get(Preferred_title, 31);
//			 i.get(Merital_status, 31);
//			 i.get(Gender, 21);
//			 i.get(Profession, 21);
//			 i.get(Residence_country, 21);
//			 i.get(Home_Adress, 101);
//			 i.get(Permanent_Adress, 101);
//			 i.get(Office_adress1, 101);
//			 i.get(Mailing_Preference, 31);
//			 i.get(Post_code, 31);
//			 /*"**********************************************************88";*/
//			 i.get(User_name, 41);
//			 i.get(Password, 41);
//			 trim_spaces(Password, 40);
//			 i.get(aCCountNO, 41);
//			 i.get(Balance, 41);
//			 i.get(Account_Type, 41);
//			 i.ignore();
//			 trim_spaces(aCCountNO, 40);
//			 result2 = strcmp(Password, Your_pas);
//			 result = strcmp(aCCountNO, YOUR_ACCOUNT_NO);
//			 resutl1 = strcmp(aCCountNO, RECIEVER_ACCOUNT_NO);
//			 if (result == 0&&result2==0)
//			 {
//				 amount = (float)atoi(Balance);
//				 if (Amount <= amount)
//				 {
//					 amount = amount - Amount;
//					 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//					 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//					 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//					 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//					 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//					 b = true;
//				 }
//
//			 }
//			 else if (resutl1 == 0)
//			 {
//				 amount = (float)atoi(Balance);
//				 amount = amount + Amount;
//				 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << fixed << setprecision(2) << amount << left << setw(40) << Account_Type << endl;
//			 }
//
//	else
//			 {
//				 out << left << setw(40) << Name << left << setw(40) << Father_HusbandName << left << setw(25) << CNIC << left << setw(50) << Email << left << setw(30) << Mobile_Number;
//				 out << left << setw(30) << Education << left << setw(30) << Preferred_title << left << setw(30) << Merital_status << left << setw(20) << Gender;
//				 out << left << setw(20) << Profession << left << setw(20) << Residence_country;
//				 out << left << setw(100) << Home_Adress << left << setw(100) << Permanent_Adress << left << setw(100) << Office_adress1 << left << setw(30) << Mailing_Preference << left << setw(30) << Post_code;
//				 out << left << setw(40) << User_name << left << setw(40) << Password << left << setw(40) << aCCountNO << left << setw(40) << Balance << left << setw(40) << Account_Type << endl;
//			 }
//		 }
//		 i.close();
//		 out.close();
//		 remove("User_info.txt");
//		 rename("User_info1.txt", "User_info.txt");
//		 if (b == true)
//		 {
//			 cout << "You have successfully done!\n";
//			 goto last;
//		 }
//		 else
//		 {
//			 cout << "Sorry! either You have insuficient balance to make this transaction or the receiver account not found." << endl;
//			 goto last;
//		 }
//		 i.close();
//		 out.close();
//		 remove("User_info.txt");
//		 rename("User_info1.txt", "User_info.txt");
//	 last:
//		 return;
//}