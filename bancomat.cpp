#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
using namespace std;
struct Card{
	string card_namber;
	string month_year;
	string back_card_number;
	string card_pin;
	int	balance;
};
int main(){
setlocale(LC_ALL, "rus");

//str
string answer_menu;
int nam=1, answer;
int check=0;
bool general_check=false, user1_check=false, user2_check=false, user3_check=false, exit=false;
int bancomat=10000, sum;



//user
Card user;

//user1 ������ ���� ����������;
Card user1;
user1={"1234123412341234","02-15","312","8432", 864};

//user2 �������� ����� �����������
Card user2;
user2={"1234567890123456","01-19","854","3242", -164};

//user3 �������� ���� ����������
Card user3;
user3={"4321432143214321","11-21","968","1201", -618};



do{//����
	cout<<"������: ����� �����"<<endl;
	do{//card_namber
	cin>>user.card_namber;
		check=user.card_namber.length();
		if(check!=16)cout<<"������: ����� ����� ������ �������� �� 16 ��������, ��������� ������� ��� ���"<<endl;
		}while(check!=16);



		cout<<"������: ���� ��������� �������� �����"<<endl;
	do{//card_data
	cin>>user.month_year;
		check=user.month_year.length();
		if(check!=5)cout<<"������: �������� ������ ����"<<endl;
		}while(check!=5);


	cout<<"������: ������ ����� �����"<<endl;
	do{//card_back_namber
	cin>>user.back_card_number;
		check=user.back_card_number.length();
		if(check!=3)cout<<"������: ������ ����� ����� ������ ������� �� 3 ����, ��������� ������� ��� ���"<<endl;
		}while(check!=3);

	cout<<"������: pin-��� �����"<<endl;
	do{//card pin
	cin>>user.card_pin;
		check=user.card_pin.length();
		if(check!=4)cout<<"������: �� ����� �� ������ ���, ��������� ������� ��� ���"<<endl;
		}while(check!=4);

 	while(nam!=100)//��������
	{
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                ";
			cout<<"��������:";
			cout<<nam<<"%";
			nam++;
			Sleep((BYTE)20);
				system("cls");
		 }
		if(user.card_namber==user1.card_namber && user.month_year==user1.month_year )//user1
				{
					if(user.back_card_number==user1.back_card_number && user.card_pin==user1.card_pin)
					{
						general_check=true;
						user1_check=true;
						cout<<"�� ����� ���: ������ ���� ����������"<<endl;
					}
				}


		else if(user.card_namber==user2.card_namber && user.month_year==user2.month_year )//user2
				{
					if(user.back_card_number==user2.back_card_number && user.card_pin==user2.card_pin)
					{
						general_check=true;
						user2_check=true;
						cout<<"�� ����� ���: �������� ����� �����������"<<endl;
					}
				}


		else if(user.card_namber==user3.card_namber && user.month_year==user3.month_year )//user3
				{
					if(user.back_card_number==user3.back_card_number && user.card_pin==user3.card_pin)
					{
						general_check=true;
						user3_check=true;
						cout<<"�� ����� ���: �������� ���� ����������"<<endl;
					}
				}

		else {
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"               ";
		cout<<"������: ������ ������� �� �����. ��������� �������"<<endl;}
		for(int w=0; w<1500000000; w++){}
		system("cls");
}while(general_check==false);

do{//����
	cout<<endl<<endl<<endl<<endl<<endl<<"                                  ";
										cout<<"����"<<endl<<endl<<endl;
	cout<<"       ������ ������ �����(1)"<<"                "<<"����� ������(2)"<<endl<<endl;
	cout<<"       ��������� ���������(3)"<<"                "<<"������ ������(4)"<<endl<<endl;
	cout<<"       ���������� ����� � ���������(5)"<<"       "<<"�����(6)"<<endl<<endl;
	cout<<"                  �������� ������� � ������� � �����"<<endl<<endl;
	cout<<"       ";
	cin>>answer;
	cout<<endl<<endl;
	switch(answer){

		case 1: do{//������
				if(user1_check==true)cout<<"     ������ ���� ���������� ��� ������ ����������: "<<user1.balance<<"���";
				if(user2_check==true)cout<<"     �������� ����� ����������� ��� ������ ����������: "<<user2.balance<<"���";
		 		if(user3_check==true)cout<<"     �������� ���� ���������� ��� ������ ����������: "<<user3.balance<<"���";
		 		cout<<endl<<endl;
		 		cout<<"     ��� ���������� � ���� ������� 1"<<endl;
				 cout<<endl<<endl<<"     ";
		 		cin>>answer_menu;
		 		cout<<endl<<endl;
		 		if(answer_menu=="1")system("cls");
		 		}while(answer_menu!="1");break;


		case 2: do{ //����� ������
				if(user1_check==true)cout<<"     ������ ���� ���������� ��� ������ ����������: "<<user1.balance<<"���";
				if(user2_check==true)cout<<"     �������� ����� ����������� ��� ������ ����������: "<<user2.balance<<"���";
		 		if(user3_check==true)cout<<"     �������� ���� ���������� ��� ������ ����������: "<<user3.balance<<"���";
		 		cout<<endl<<endl;


					 		cout<<"�������� ����� ��� ������"<<endl<<endl<<endl;
				cout<<"       10(1)"<<"                "<<"50(2)"<<endl<<endl;
				cout<<"       100(3)"<<"               "<<"500(4)"<<endl<<endl;
				cout<<"       1000(5)"<<"              "<<"5000(6)"<<endl<<endl;
				cout<<"                  �������� � ������� �����"<<endl<<endl;
				cout<<"       ";
				cin>>sum;
				switch(sum){

					case 1:
						 	if(user1_check==true){user1.balance=user1.balance-10;}
							if(user2_check==true){user2.balance=user2.balance-10;}
							if(user3_check==true){user3.balance=user3.balance-10;}
							cout<<"� ������ ����� �������� 10��"<<endl; break;


		 			case 2:
						 	if(user1_check==true){user1.balance=user1.balance-50;}
							if(user2_check==true){user2.balance=user2.balance-50;}
							if(user3_check==true){user3.balance=user3.balance-50;}
							cout<<"� ������ ����� �������� 50��"<<endl; break;


		 			case 3:
						 	if(user1_check==true){user1.balance=user1.balance-100;}
							if(user2_check==true){user2.balance=user2.balance-100;}
							if(user3_check==true){user3.balance=user3.balance-100;}
							cout<<"� ������ ����� �������� 100��"<<endl; break;


		 			case 4:
						 	if(user1_check==true){user1.balance=user1.balance-500;}
							if(user2_check==true){user2.balance=user2.balance-500;}
							if(user3_check==true){user3.balance=user3.balance-500;}
							cout<<"� ������ ����� �������� 500��"<<endl; break;


		 			case 5:
						 	if(user1_check==true){user1.balance=user1.balance-1000;}
							if(user2_check==true){user2.balance=user2.balance-1000;}
							if(user3_check==true){user3.balance=user3.balance-1000;}
							cout<<"� ������ ����� �������� 1000��"<<endl; break;


		 			case 6:
						 	if(user1_check==true){user1.balance=user1.balance-5000;}
							if(user2_check==true){user2.balance=user2.balance-5000;}
							if(user3_check==true){user3.balance=user3.balance-5000;}
							cout<<"� ������ ����� �������� 5000��"<<endl; break;
		 			}
		 		if(user1_check==true)cout<<"     ������ ���� ���������� ��� ������ ����������: "<<user1.balance<<"���";
				if(user2_check==true)cout<<"     �������� ����� ����������� ��� ������ ����������: "<<user2.balance<<"���";
		 		if(user3_check==true)cout<<"     �������� ���� ���������� ��� ������ ����������: "<<user3.balance<<"���";
		 		cout<<endl<<endl;

		 		cout<<"     ��� ���������� � ���� ������� 1"<<endl;
				 cout<<endl<<endl<<"     ";
		 		cin>>answer_menu;
		 		cout<<endl<<endl;
		 		if(answer_menu=="1")system("cls");
		 		}while(answer_menu!="1");break;
	}
}while(exit==false);

return 0;}

