#include <iostream>
using namespace std;
class ticket{
	public:
	char name[10];
	   int tno=10;
};
int main()
{

	int ent, a, b, N, x, cardid,cno,trnsid;
	int ans=1;
	char name[10];
	while(1)
    {


		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t Simple Movie Ticket Booking System";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t Welcome Customer!";
		cout<<"\n\n\t\t\t\t <1> Movie Timings";
		cout<<"\n\t\t\t\t <2> Recieving Ticket";
		cout<<"\n\t\t\t\t <3> For Information";
		cout<<"\n\t\t\t\t <4> cancel the ticket";
		cout<<"\n\t\t\t\t <5> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>ent;

	switch(ent)
	{

		case 1:

		cout<<"\n\n\t\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t\t 1. pallavi anupallavi";
			cout<<"\n\n\t\t\t\t 2. milana";
			cout<<"\n\n\t\t\t\t 3. tom and jerry";
			cout<<"\n\n\t\t\t\t 4. premam";
			cout<<"\n\n\t\t\t\t 5. charlie\n";
			cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
			switch(a)
			{
				case 1:
				 cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00 \n";
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name:";
					cin>>name;
					cout<<"\n\n\t\t\t\t Enter your contact number:";
					cin>>cno;
					cout<<"\n\n\t\t\t Enter the number of tickets you want to purchase:";
					int x;
					cin>>x;
					cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(1/0)";
						cin>>ans;
						break;
				case 2:
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 09:00";
					cout<<"\n\t\t\t\t 2. 11:00";
					cout<<"\n\t\t\t\t 3. 12:50";
					cout<<"\n\t\t\t\t 4. 15:00";
					cout<<"\n\t\t\t\t 5. 20:00";
					cout<<"\n\t\t\t\t 6. 22:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(1/0)";
					cin>>ans;
					break;
				case 3:
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>cno;
					cout<<"\n\t\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"09:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(1/0)";
					cin>>ans;
					break;
				case 4:
				cout<<"\n\n\t\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\t\t Enter your name: ";
					cin>>name;
					cout<<"\t\t Enter your contact number: ";
					cin>>cno;
					cout<<"\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					cout<<"\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(1/0)";
						cin>>ans;
						break;
				case 5:
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					cout<<"\n \n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<name;
					cout<<"\n\t\t\t\t Contact No	:"<<cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(1/0)";
					cin>>ans;
					break;
        break;
			break;
			}

		case 2:
{           float rate;
			cout<<"\t\t\t ---thank you for booking ticket in online---"<<endl;
			cout<<"\t\t\t enter your transaction id:";
			cin>>trnsid;
			cout<<"\t\t\t enter your name:";
			cin>>name;
			cout<<"\t\t\t please rate us:";
			cin>>rate;
break;

}
		case 3:
		    {

int number;
				cout<<"\t\t\t For further information about movies you can download our Application or contact us at:\n";
            cin>>number;
				break;
		    }
		case 4:
		    {
		        cout<<"\t\t\t\ do you want to cancel the ticket(1/0)";
		        cin>>ans;
		        cout<<"\t\t\t enter your name:";
		        cin>>name;
		        cout<<"\t\t\t enter the show time:";
		        cin>>b;
		        cout<<"\t\t\t enter your transaction id:";
		        cin>>trnsid;
		        cout<<"\t\t\t your ticket is to be cancelled your amount is proccessed, it will reflect on your account in 2-3 days\n";
		        break;
		    }




		case 5: return (0);
		break;
}
}
}



