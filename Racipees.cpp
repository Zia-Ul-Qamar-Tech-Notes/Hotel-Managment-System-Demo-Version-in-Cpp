#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

struct Racipees{
	string name;
    int price;
    string chief;
    Racipees *next;
};

class RacipeeDetails{
	private:
		Racipees *head , *tail;
	public :
		void Transport(){
			head = NULL;
			tail = NULL;
		}
		
		
	void NewRacipee(string name,int price,string chief){
			
			Racipees *newRacip = new Racipees();
			newRacip->name  = name;
			newRacip->price = price;
			newRacip->chief = chief;
				if(head == NULL){
					newRacip->next = head;
					head =  newRacip;
					tail = newRacip;
				}else{
					tail->next = newRacip;
					tail = newRacip;
				}
		
		
	}
	
		void DeleteRacipee(string name){
		Racipees *current = new Racipees();
		Racipees *privous = new Racipees();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 privous = current;
			 current = current->next;
		}
		if(current != NULL){
			if(name == current->name){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of "<<name<<" DISH RACIPEE is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}	
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about "<<name<<" Racipee"<<endl;
		}
	}
	
	
	void SearchRacipee(string name){
		Racipees *current = new Racipees();
		Racipees *privous = new Racipees();
		current = head;
		while(current != NULL){
			privous = current;
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		
		if(name == privous->name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tNAME OF DISH:\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tPRICE OF DISH:\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tCHEF OF DISH\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}else{
			cout<<"Soory..!!!\nNo Record is availble about "<<name<<" Racipee"<<endl;
			string op;
			cout<<"Are you want to Search Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}
		}
}
	
void UpdateRacipee(string name){
		Racipees *current = new Racipees();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->name == name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRACIPEE NAME\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tRACIPEE PRICE\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tCHEF OF RACIPEE\t\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string chief,name;
				int price;
				cout<<"\n\n\t\tEnter RACIPEE NAME:                        ";
				cin>>name;
				cout<<"\n\n\t\tEnter RACIPEE PRICE:                       ";
				cin>>price;
				cout<<"\n\n\t\tEnter RACIPEE CHIEF:                       ";
				cin>>chief;
				current->name  = name;
				current->price = price;
				current->chief = chief;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Racipee "<<name<<endl;
		}
	}
	
	void ShowAllRacipees(){
		check1:
		Racipees *showRacip = new Racipees;
		showRacip = head;
		while(showRacip  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<showRacip->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<showRacip->price<<endl;
			cout<<"\t\tChief OF Racipee\t\t\t\t"<<showRacip->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showRacip = showRacip->next;
		}
	}
	void SaveRacipees(){
		ofstream myfile("Racipee.txt");
		Racipees *saveRacip = new Racipees;
		saveRacip = head;
		while(saveRacip  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<saveRacip->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<saveRacip->price<<endl;
			cout<<"\t\tChef OF Racipee\t\t\t\t\t"<<saveRacip->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			myfile<<"\t\tRacipee Name\t\t\t\t\t"<<saveRacip->name<<endl;
		    myfile<<"\t\tRacipee Price\t\t\t\t\t"<<saveRacip->price<<endl;
		    myfile<<"\t\tChef of Racipee\t\t\t\t\t"<<saveRacip->chief<<endl;
			myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			saveRacip = saveRacip->next;
		}
	}
	void MenuList(){
		Racipees *saveRacip = new Racipees;
		saveRacip = head;
			cout<<"\n\t   |----------------- LIST OF FOOD DISHES PRESENT IN HOTEL---------------------------|"<<endl;
		while(saveRacip  != NULL){
			int j=1;
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"";
			cout<<"\n\t   |Dish Name: \t"<<saveRacip->name<<"\t\tDish Price: \t"<<saveRacip->price<<"\t\tDish Chef: \t"<<saveRacip->chief<<"|"<<endl;
			j=j+1;
			saveRacip = saveRacip->next;
		}
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
	}
	int Sum=0;
	void OrderDish(string name){
		Racipees *current = new Racipees();
		Racipees *privous = new Racipees();
		current = head;
		
		while(current != NULL){
			privous = current;
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		if(name == privous->name){
			Sum=Sum+current->price;
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\tAmount to be Paid:\t\t\t\t\t"<<current->price<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			
		}
		else{
			cout<<"\n\t\tSoory..!!!\tThis dish "<<name<<"DISH is not is availble in our Hotel at the moment."<<endl;
			string op;
			cout<<"Are you want to Order Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}
		}		
}	
			void Total(){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\n\tTotal Amount to be Paid:\t"<<Sum<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}
		
};

