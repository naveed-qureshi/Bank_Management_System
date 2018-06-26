//#include <iostream>
//#include <conio.h>
//using namespace std;
//void invisible_password(char Password[]);
//int main()
//{
//	char pasword[100];
//	invisible_password(pasword);
//	cout << "Your pasword is:" << pasword << endl;
//	system("pause");
//	return 0;
//}
//void invisible_password(char Password[])
//{
//	int i = 0;
//	cout << "Password: ";
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