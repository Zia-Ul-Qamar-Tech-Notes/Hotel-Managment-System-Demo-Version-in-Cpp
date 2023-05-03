#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
//#include<string>
using namespace std;
//#define MAX_FEEDBACK_LENGTH 200
//***********************************
//Zia DSA project: 
//***********************************

void gotoxy(int x, int y)
{
	COORD coord;
    	coord.X =x;
	coord.Y =y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class HotelMenu{
	
	public:
		
	void zia()
{
	system("mode 100");
	ifstream file;
	file.open("zia.txt");
	if(!file.is_open())
	{
		cout<<"unable to open file:";
	}
	else
	{
		string c;
		getline(file,c);
		while(!file.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(file,c);
		}
	}
}
void feedback()
{
	system("mode 100");
	ifstream file;
	file.open("FeedBack.txt");
	if(!file.is_open())
	{
		cout<<"unable to open file:";
	}
	else
	{
		string c;
		getline(file,c);
		while(!file.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(file,c);
		}
	}
}
//**********************************************
//  WELLCOME 
//**********************************************
void wellcom()
{
	system("mode 100");
	ifstream file;
	file.open("start.txt");
	if(!file.is_open())
	{
		cout<<"file unable to open successfully:  ";
	}
	else
	{
	string a;
	getline(file,a);
	
		while(!file.eof())
		{
			system("color a");
			cout<<a<<endl;
		getline(file,a);
		}
		file.close();	
}
}

void mode()
{
	system("mode 100");
	ifstream file;
	file.open("mode.txt");
	if(!file.is_open())
	{
		cout<<"file unable to open successfully:  ";
	}
	else
	{
	string a;
	getline(file,a);
	
		while(!file.eof())
		{
			system("color a");
			cout<<a<<endl;
		getline(file,a);
		}
		file.close();	
}
}

//**********************************************
//  PASSWORD
//**********************************************
void password(){
	first:
	system("cls");
	system("color a");
	string a,b,c,d,e,f,g; 
	cout<<"\n\nNOTE:\n\tTHIS PROGRAM CAN ONLY EXICUTTED BY AN AUTHORIZE PERSON/Manager OF HOTTEL\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\n\n\n\n\n\t\tENTER THE PASWARD:         [      ]\b\b\b\b\b\b\b";
	
		a=getch();
		cout<<"*";
		b=getch();
		cout<<"*";
		c=getch();
		cout<<"*";
		d=getch();
		cout<<"*";
		e=getch();
		cout<<"*";
		f=getch();
		cout<<"*";

	if((a=="5" && b=="1") && (c=="2"&& d=="1") && (e=="4"))
	{
		//   pasward excuted	
	}
	else 
	{
		system("color 1c");
		cout<<"\a"<<endl;
		cout<<"\n\n\n\n\n\t\t\t|***********************|"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|    WRONG PASWARD      |"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|***********************|"<<endl;
		l:
		string h;
		cout<<"\n\n\n\n\t\t\tARE YOU WANT TO TRY AGAIN (yes/no):       ";
		cin>>h;
		if(h=="yes" || h=="YES")
		{
					goto first;
		}else if(h=="no" || h=="NO")
		{
			 exit(1);
		}else if((h!="yes" || h!="YES") && (h!="no" || h!="NO") )
		{
			goto l;
		}

	}	
	
}

void Loading(){
	
	system("cls");
	int r,q,i=0,j;
	char s=178;
	gotoxy(46,24);
	cout<<"loading..."<<endl;
	for(r=1,i=0,j=40; r<20,i<=100,j<=60; r++,i=i+5,j++)
	{
		for(q=0; q<5; q++)
		system("color a");
		gotoxy(j,25);
		cout<<s;
		gotoxy(47,27);
		cout<<i<<"%";
	}
}

void MainMenu(){
	system("cls");
	ifstream menu;
	menu.open("menu.txt");
	if(!menu.is_open())
	{
		cout<<"unable to open file: ";
	}else
	{
		string c;
		getline(menu,c);
		while(!menu.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(menu,c);
		}
	}
}

void guestMenu(){
	system("cls");
	ifstream menu;
	menu.open("gmenu.txt");
	if(!menu.is_open())
	{
		cout<<"unable to open file: ";
	}else
	{
		string c;
		getline(menu,c);
		while(!menu.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(menu,c);
		}
	}
}

void HotelInformation(){
	system("cls");
	ifstream HIF;
	HIF.open("hotel.txt");
	if(!HIF.is_open())
	{
	cout<<"unable to open a file:  ";
	}else
	{
		string c;
		getline(HIF,c);
		while(!HIF.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(HIF,c);
		}
	}
}

void GuestFeedBack(){
	ofstream myfile("FeedBack.txt", ios::out|ios::app);
	string name;
	char feedBack[200];
	cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
	cout<<"\t\tGuest NAME\t\t\t\t\t";
	cin>>name;
	cout<<"\t\tGuest FeedBack\t\t\t\t\t";
	cin.ignore();
	gets(feedBack);
	cout<<"\t\tGuest NAME\t\t\t\t\t"<<name<<endl;
	cout<<"\t\tGuest FeedBack\t\t\t\t\t"<<feedBack<<endl;
	cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
	
	myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
	myfile<<"\t\tGuest NAME\t\t\t\t\t"<<name<<endl;
	myfile<<"\t\tGuest FeedBack\t\t\t\t\t"<<feedBack<<"\t\t"<<endl;
	myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
	myfile.close();
}

void RacipeesMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 -------------------------------- ADD NEW RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 2 ----------------------------------- RACIPEE LIST |"<<endl;
	cout<<"\n\t\t\t| 3 --------------------------------- SEARCH RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 4 --------------------------------- DELETE RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 5 --------------------------------- UPDATE RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 6 ----------------------------------- SAVE CHANGES |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 8 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	
}

void RoomMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 ----------------------------------- ADD NEW GUEST |"<<endl;
	cout<<"\n\t\t\t| 2 -------------------------------------- GUEST LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ------------------------------------ SEARCH GUEST |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------------ DELETE GUEST |"<<endl;
	cout<<"\n\t\t\t| 5 ------------------------------------ UPDATE GUEST |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------ SAVE CHANGES |"<<endl;
	cout<<"\n\t\t\t| 7 -------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 8 -------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-***************************************************-|"<<endl;
}



void WorkerMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW WORKER |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------------------ WORKER LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ---------------------------------- SEARCH WORKER |"<<endl;
	cout<<"\n\t\t\t| 4 ---------------------------------- DELETE WORKER |"<<endl;
	cout<<"\n\t\t\t| 5 ---------------------------------- UPDATE WORKER |"<<endl;
	cout<<"\n\t\t\t| 6 ----------------------------------- SAVE CHANGES |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 8 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

int jmp()
{
	cout<<"Exit"<<endl;
	return 0;
}
//class end
};
