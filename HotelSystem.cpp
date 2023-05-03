#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include"HotelMenus.cpp"
#include"Racipees.cpp"
#include"Workers.cpp"
#include"Rooms.cpp"
using namespace std;

RoomsDetails rmobj;
RacipeeDetails robj;
WorkerDetails wobj;

int main(){
///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
	robj.NewRacipee("chai",50,"Zia");
	robj.NewRacipee("Rice",150,"Khizar");
	robj.NewRacipee("baryani",150,"Usama");
	robj.NewRacipee("chicken",200,"AbdulRehman");
	robj.NewRacipee("korma",200,"Ahmad");
	robj.NewRacipee("Beef",250,"Zia");
////////////////////////////////////////////////////////////////////////////////////////////	
///////////////////////////////////////////////////////////////////////////////////////////	
	rmobj.NewGest("1","Zia","19-2-2022","Single","10 Days","lahore");
	rmobj.NewGest("2","Asim","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("3","Ijaz","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("4","Ali","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("5","Khizar","2-2-2019","couple","1 month","lahore");
///////////////////////////////////////////////////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////////////////
	wobj.NewWorker("1","Zia",50000,"0336-5083042");
	wobj.NewWorker("2","Khizar",40000,"03118897764");
	wobj.NewWorker("3","Usama",40000,"03118897764");
	wobj.NewWorker("4","AbdulRehman",40000,"03118897764");
	wobj.NewWorker("5","Ahmad",40000,"03118897764");
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////	
	
	HotelMenu obj;
	system("100");
	obj.wellcom();
	system ("pause");
	system("cls");
	obj.zia();
	system ("pause");
	mode:
	obj.mode();
	int op1;
	cout<<"Select The Option:     ";   
	cin>>op1;  
	if(op1==1){
		yg:
		obj.password();
		string a;
     	cout<<"\n\nDO YOU WANT TO PROCEED!(yes/no)?    ";
		cin>>a;
     	if(a=="yes" || a=="YES")
		{
	    	goto main;	
		}else if(a=="no" || a==" NO")
		{
			exit(1);
	
		}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
		{
		cout<<"TRY AGAIN  "<<endl;
			goto yg;
		}
	system("cls");
	obj.Loading();					
	main:
	system("cls");
	obj.Loading();
	cout<<"\n\n\n\n\n\n\n\n\n";
	system ("pause");
	int op;
	obj.MainMenu();
	cout<<"Select The Option:                       ";
	cin>>op;
	switch(op){
		case 1:
			{
				obj.HotelInformation();
					yr:
				string a;
		     	cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
				cin>>a;
		     	if(a=="yes" || a=="YES")
				{
			    	goto main;	
				}else if(a=="no" || a==" NO")
				{
					return 0;
				}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
				{
				cout<<"TRY AGAIN  "<<endl;
					goto yr;
				}
				break;	
			}
		case 2:
			{
				rmanu:
				int rop;
				obj.RacipeesMenu();
				cout<<"Select the Option:      ";
				cin>>rop;
				switch(rop){
					case 1:
						{
							system("cls");
							{
							New:
							string chief,name;
							int price;
							cout<<"\n\n\t\tEnter DISH Name:                        ";
							cin>>name;
							if(name=="123"||name=="1"||name=="12"||name=="1234"||name=="12345"){
								cout<<"\n\n\t\tInvalid Name:                       ";
								cout<<"\n\n\t\tEnter DISH Name Again:                        ";
								cin>>name;
							}
							cout<<"\n\n\t\tEnter DISH Price:                       ";
							cin>>price;
							if(price<=0){
								cout<<"\n\n\t\tInvalid Price:                       ";
								cout<<"\n\n\t\tEnter DISH Price Again:                       ";
								cin>>price;
							}
							cout<<"\n\n\t\tEnter DISH Chief:                       ";
							cin>>chief;
							robj.NewRacipee(name,price,chief);
							string again;
							cout<<"Continue:   (yes/no) ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto New;
							}else{
								nr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto nr;
								}
							}
							break;
						}
					}
					case 2:
						{
							system("cls");
							robj.ShowAllRacipees();
							system("pause");
							sr:
							string a;
		     				cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
							cin>>a;
					     	if(a=="yes" || a=="YES")
							{
			    				goto rmanu;	
							}else if(a=="no" || a==" NO")
							{
								return 0;
							}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
							{
								cout<<"TRY AGAIN  "<<endl;
								goto sr;
							}
							
							break;
						}
					case 3:
						{
							searchracip:
							system("cls");
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.SearchRacipee(name);
							string again;
							cout<<"Continue:    (yes/no) ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto searchracip;
							}else{
								ser:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ser;
								}
							}
							break;
						}
					case 4:
						{
							
							system("cls");
							Deleteracip:
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.DeleteRacipee(name);	
							string again;
							cout<<"Continue:    (yes/no) ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto Deleteracip;
							}else{
								dr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto dr;
								}
							}
							break;
						}
					case 5:
						{
							system("cls");
							updateracip:
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.UpdateRacipee(name);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto updateracip;
							}else{
								ur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ur;
								}
							}
							break;
						}
						case 6:
						{
							saveracipe:
						    system("cls");
						    robj.SaveRacipees();
								sracipe:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto sracipe;
								}
							break;
						}
					case 7:
						{
							system("cls");
							goto main;
							break;
						}
					case 8:
						{
							return 0;
						}
					default:
						{
						  	goto rmanu;
						}
				}
				break;	
			}
		case 3:
			{
				rmmanu:
				int roop;
				obj.RoomMenu();
				cin>>roop;
				switch(roop){
					case 1:
						{
							
							system("cls");
							ng:
							cout<<"\n\n\n\n"<<endl;
							string room,gest,date,family,stay,city;
							cout<<"\n\t\tEnter Room NO:           ";
							cin>>room;
							cout<<"\n\t\tEnter GUEST:           ";
							cin>>gest;
							if(gest=="123"||gest=="1"||gest=="12"||gest=="1234"||gest=="12345"){
								cout<<"\n\n\t\tInvalid Name:                       ";
								cout<<"\n\n\t\tEnter GUEST Name Again:                        ";
								cin>>gest;
							}
							cout<<"\n\t\tEnter DATE OF Booking:           ";
							cin>>date;
							cout<<"\n\t\tEnter FAMILY_Status:           ";
							cin>>family;
							cout<<"\n\t\tEnter STAY LIMIT:           ";
							cin>>stay;
							cout<<"\n\t\tEnter Your CITY Name:           ";
							cin>>city;
							 string stat = rmobj.NewGest(room,gest,date,family,stay,city);
							 cout<<stat<<endl;
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto ng;
							}else{
								ner:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ner;
								}
							}
							break;
						}
					case 2:
						{
							system("cls");
							rmobj.ShowAllGest();
							system("pause");
								shg:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto shg;
								}
							break;
						}
					case 3:
						{
							system("cls");
							seg:
							string room;
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.SearchGest(room);
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto seg;
							}else{
								sg:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto sg;
								}
							}
							break;
						}
					case 4:
						{
							srg:
							system("cls");
							string room;
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.DeleteGest(room);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto srg;
							}else{
								dg:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto dg;
								}
							}
							break;
						}
					case 5:
						{
							system("cls");
							upg:
							string room;
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.UpdateRoom(room);
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto upg;
							}else{
								ug:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ug;
								}
							
							break;
						}
					}
					case 6:
						{
							saveguest:
						    system("cls");
						    rmobj.SaveGuest();
								sguest:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto sguest;
								}
							break;
						}
					case 7:
						{
							goto main;
							break;
						}
					case 8:
						{
							return 0;
						}
					default:
						{
						  	goto rmanu;
						}
				}
				system ("pause");
				 goto main;
				break;	
			}
		case 4:
			{
				wmanu:
				int wop;
				obj.WorkerMenu();
				cout<<"Select the Option:      ";
				cin>>wop;
				switch(wop){
					case 1:
						{
							worker:
							system("cls");
							string id,name,phone;
							int sallary;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							cout<<"\n\n\t\tEnter Worker Name:                       ";
							cin>>name;
							if(name=="123"||name=="1"||name=="12"||name=="1234"||name=="12345"){
								cout<<"\n\n\t\tInvalid Name:                       ";
								cout<<"\n\n\t\tEnter Worker Name Again:                        ";
								cin>>name;
							}
							cout<<"\n\n\t\tEnter Worker Sallary:                    ";
							cin>>sallary;
							if(sallary<=0){
								cout<<"\n\n\t\tInvalid Sallary:                       ";
								cout<<"\n\n\t\tEnter Sallary Again:                        ";
								cin>>sallary;
							}
							cout<<"\n\n\t\tEnter Worker Phone:                      ";
							cin>>phone;
							string stat = wobj.NewWorker(id,name,sallary,phone);
							cout<<stat<<endl;
							string agan;
							cout<<"Continue:            ";
							cin>>agan;
							if(agan == "yes" || agan == "YES" || agan ==" Yes"){
								goto worker;
							}else{
								ufr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ufr;
								}
							}
							break;
						}
					case 2:
						{
								system("cls");
								wobj.ShowAllWorkers();
								uyr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uyr;
								}							break;
						}
					case 3:
						{
							searchwork:
							system("cls");
							string id;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							wobj.SearchWorker(id);
							string an;
							cout<<"Continue:            ";
							cin>>an;
							if(an == "yes" || an == "YES" || an ==" Yes"){
								goto searchwork;
							}else{
								utr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto utr;
								}
							}
							break;
						}
					case 4:
						{
							deletwork:
							system("cls");
							string id;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							wobj.DeleteWorker(id);
							string gn;
							cout<<"Continue:            ";
							cin>>gn;
							if(gn == "yes" || gn == "YES" || gn ==" Yes"){
								goto deletwork;
							}else{
								uur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uur;
								}
							}
							break;
						}
					case 5:
						{
							updatework:
						    system("cls");
						    string id;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
						    wobj.UpdateWorker(id);
						    string gne;
							cout<<"Continue:            ";
							cin>>gne;
							if(gne == "yes" || gne == "YES" || gne ==" Yes"){
								goto updatework;
							}else{
								uqr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uqr;
								}
							}
							break;
						}
						case 6:
						{
							savework:
						    system("cls");
						    wobj.SaveWorker();
								swr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto swr;
								}
							break;
						}
					case 7:
						{
							goto main;	
							break;
						}
					case 8:
					{
						return 0;
					}
					default:
						{
						  	goto rmanu;
						}
					}
				system ("pause");
				goto main;
				break;
		}
		case 5:
			{
				obj.feedback();
					fb:
				string a;
		     	cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
				cin>>a;
		     	if(a=="yes" || a=="YES")
				{
			    	goto main;	
				}else if(a=="no" || a==" NO")
				{
					return 0;
				}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
				{
				cout<<"TRY AGAIN  "<<endl;
					goto fb;
				}
				break;	
			}
		case 6:
			{
				string a;
				mode1:
				cout<<"\n\nGO BACK TO CHANGE LOGIN MODE (yes/no)?    ";
				cin>>a;
	     		if(a=="yes" || a=="YES")
				{
					goto mode;	
				}else if(a=="no" || a==" NO")
				{
					goto main;
				}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
				{
					cout<<"TRY AGAIN  "<<endl;
					goto mode1;	
				}
		}
			default:
			{
			  goto main;
			}
}
}
else if(op1==2){
				system("cls");
				cout<<"\n\n";
				cout<<"\n\t\t|--------------------------------------------------------------------------------|\t"<<endl;
				cout<<"\n\t\t|----------------------THIS FEATURE IS STILL UNDER CONSTRUCTION -----------------|\t"<<endl;
				cout<<"\n\t\t|--------------------------------------------------------------------------------|\t"<<endl;
				cout<<"\n";
				cout<<"\n\t\t|--------------------------------------------------------------------------------|\t"<<endl;
				cout<<"\n\t\t|--------------------WE WILL BE HIGHLY THANKFUL FOR YOUR PATIENCE----------------|\t"<<endl;
				cout<<"\n\t\t|--------------------------------------------------------------------------------|\t"<<endl;
				cout<<"\n\n";
				system("pause");
				int op2;
				system("cls");
				obj.Loading();
				guestMenu:
				obj.guestMenu();
				cout<<"Select The Option:                       ";
				cin>>op2;
				switch(op2){
				case 1:{
						obj.HotelInformation();
						Iyr:
						string a;
				     	cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
						cin>>a;
				     	if(a=="yes" || a=="YES")
						{
					    	goto guestMenu;	
						}else if(a=="no" || a==" NO")
						{
							return 0;
						}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
						{
						cout<<"TRY AGAIN  "<<endl;
							goto Iyr;
						}
						break;
				}
				case 2:{
						showMenu:
						system("cls");
						robj.MenuList();
						cout<<"\n\t\tHow many Orders do you wanna make: ";
						int order;
						cin>>order;
						int Sum=0;
						for(int i=0;i<order;i++){
						cout<<"\n\t\tEnter the Name of the Dish you want to Select: ";
						string name;
						cin>>name;
						robj.OrderDish(name);
					}
						robj.Total();
						cout<<"\n\t\t Order Placed successfully. THANKS FOR pLACING AN ORDER."<<endl;	
						string cont;
						cout<<"\n\t\tDo you want to Order again: (yes/no) ";
						cin>>cont;
						if(cont == "yes" || cont == "YES" || cont ==" Yes"){
							goto showMenu;
						}else{
							ba:
							string a;
	     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
							cin>>a;
				     		if(a=="yes" || a=="YES")
							{
		    					goto guestMenu;	
							}else if(a=="no" || a==" NO")
							{
								return 0;
							}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
							{
								cout<<"TRY AGAIN  "<<endl;
								goto ba;
							}
						}
					break;
				
				}
				case 3:{
							
							system("cls");
							rmobj.ShowBookedRoom();
							ng1:
							cout<<"\n\n\n\n"<<endl;
							string room,gest,date,family,stay,city;
							cout<<"\n\t\tEnter Room NO:           ";
							cin>>room;
							cout<<"\n\t\tEnter GUEST:           ";
							cin>>gest;
							cout<<"\n\t\tEnter DATE OF Booking:           ";
							cin>>date;
							cout<<"\n\t\tEnter FAMILY_Status:           ";
							cin>>family;
							cout<<"\n\t\tEnter STAY LIMIT:           ";
							cin>>stay;
							cout<<"\n\t\tEnter Your CITY Name:           ";
							cin>>city;
							 string stat = rmobj.NewGest(room,gest,date,family,stay,city);
							 cout<<stat<<endl;
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto ng1;
							}else{
								ner1:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto guestMenu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ner1;
								}
							}
							break;
						}
				case 4:{
								system("cls");
								wobj.ShowAllWorkers();
								wyr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto guestMenu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto wyr;
								}break;
						}
				case 5:{
						system("cls");
						rmobj.SaveGuest1();
						wrbm:
						string a3;
     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
						cin>>a3;
			     		if(a3=="yes" || a3=="YES")
						{
	    					goto guestMenu;	
						}else if(a3=="no" || a3==" NO")
						{
							return 0;
						}else if((a3!="yes" || a3!="YES") || (a3!="no" || a3!=" NO"))
						{
							cout<<"TRY AGAIN  "<<endl;
							goto wrbm;
						}
						break;
				}	
				case 6:{
								system("cls");
								obj.GuestFeedBack();
								wgr:
								string a2;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a2;
					     		if(a2=="yes" || a2=="YES")
								{
			    					goto guestMenu;	
								}else if(a2=="no" || a2==" NO")
								{
									return 0;
								}else if((a2!="yes" || a2!="YES") || (a2!="no" || a2!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto wgr;
								}
								break;
						}	
			    case 7:{
								string a1;
								mode11:
								cout<<"\n\nGO BACK TO CHANGE LOGIN MODE (yes/no)?    ";
								cin>>a1;
					     		if(a1=="yes" || a1=="YES")
								{
									goto mode;	
								}else if(a1=="no" || a1==" NO")
								{
									return 0;
								}else if((a1!="yes" || a1!="YES") || (a1!="no" || a1!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto mode11;	
								}
									break;
						}

}
}
if(op1==3){
	{
		return 0;	
	} 
				
}
}

