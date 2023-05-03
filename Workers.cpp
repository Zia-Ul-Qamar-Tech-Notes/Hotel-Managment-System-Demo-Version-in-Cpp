#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

struct Worker{
	string id;
	string name;
    int sallary;
    string phone;
    Worker *next;
};

class WorkerDetails{
	private:
		Worker *head , *tail;
	public :
		void Transport(){
			head = NULL;
			tail = NULL;
		}
		
		
	string NewWorker(string id,string name,int sallary,string phone){
			/////////////////////
			if(head == NULL){
			Worker *newWorker = new Worker();
			newWorker->id  = id;
			newWorker->name = name;
			newWorker->sallary = sallary;
			newWorker->phone = phone;
			newWorker->next = head;
			head =  newWorker;
			tail = newWorker;
			string stat = "Data is Added Successfully";
			return stat;
		}else{
			Worker *curr = new Worker();
			Worker *priv = new Worker();
			curr = head;
			while(curr != NULL){
				priv = curr;
				if(curr->id == id)
				break; 
			 curr = curr->next;
			}
			
			if(priv->id == id){
				string stat = "Worker of this Id is already Present.";
				return stat;
			
			}else{
				
				Worker *newWorker = new Worker();
				newWorker->id  = id;
				newWorker->name = name;
				newWorker->sallary = sallary;
				newWorker->phone = phone;
				newWorker->next = NULL;
				tail->next = newWorker;
				tail = newWorker;
				string stat = "Data is Added Successfully";
				return stat;
			}
		}
			//////////////////////////
	}
	
	void DeleteWorker(string id){
		Worker *current = new Worker();
		Worker *privous = new Worker();
		current = head;
		while(current != NULL){
			
			if(current->id == id)
			 break;
			 privous = current;
			 current = current->next;
		}
	    if(current != NULL){
	    	
	    	if(id == current->id){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of "<<id<<" Worker Data is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Worker  ID "<<id<<endl;
		}
}
	
	
	void SearchWorker(string id){
		Worker *current = new Worker();
		current = head;
		while(current != NULL){
			if(current->id == id)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(id == current->id){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<current->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tWorker Sallary\t\t\t\t\t"<<current->sallary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<current->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Worker  ID "<<id<<endl;
		}
	}
	
	void UpdateWorker(string id){
		Worker *current = new Worker();
		current = head;
		while(current != NULL){
			
			if(current->id == id)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->id == id){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<current->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tWorker Sallary\t\t\t\t\t"<<current->sallary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<current->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string id,name,phone;
				int sallary;
				cout<<"\n\n\t\tEnter Worker ID:                         ";
				cin>>id;
				cout<<"\n\n\t\tEnter Worker Name:                       ";
				cin>>name;
				cout<<"\n\n\t\tEnter Worker Sallary:                    ";
				cin>>sallary;
				cout<<"\n\n\t\tEnter Worker Phone:                      ";
				cin>>phone;
				current->id  = id;
				current->name = name;
				current->sallary = sallary;
				current->phone = phone;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Worker ID "<<id<<endl;
		}
	}
	
	
	void ShowAllWorkers(){
		Worker *ShowWorker = new Worker;
		ShowWorker = head;
		while(ShowWorker  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<ShowWorker->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<ShowWorker->name<<endl;
			cout<<"\t\tWorker Sallary\t\t\t\t\t"<<ShowWorker->sallary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<ShowWorker->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			ShowWorker = ShowWorker->next;
	}
}
	void SaveWorker(){
//		fstream fout;
		ofstream myfile("Workers.txt");
//		fout.open(".csv", ios::out | ios::app);
		Worker *SaveWorker = new Worker;
		SaveWorker = head;
		while(SaveWorker  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<SaveWorker->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<SaveWorker->name<<endl;
			cout<<"\t\tWorker Sallary\t\t\t\t\t"<<SaveWorker->sallary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<SaveWorker->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		    myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			myfile<<"\t\tWorker ID\t\t\t\t\t"<<SaveWorker->id<<endl;
		    myfile<<"\t\tWorker Name\t\t\t\t\t"<<SaveWorker->name<<endl;
		    myfile<<"\t\tWorker Sallary\t\t\t\t\t"<<SaveWorker->sallary<<endl;
		    myfile<<"\t\tWorker Phone\t\t\t\t\t"<<SaveWorker->phone<<endl;
			myfile<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			SaveWorker = SaveWorker->next;
	}
}
};
