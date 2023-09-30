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

//user1 Сенько Юрий Степанович;
Card user1;
user1={"1234123412341234","02-15","312","8432", 864};

//user2 Исмаилов Антон Альбертович
Card user2;
user2={"1234567890123456","01-19","854","3242", -164};

//user3 Веселова Анна Викторовна
Card user3;
user3={"4321432143214321","11-21","968","1201", -618};



do{//Вход
	cout<<"Ведите: номер карты"<<endl;
	do{//card_namber
	cin>>user.card_namber;
		check=user.card_namber.length();
		if(check!=16)cout<<"Ошибка: номер карты должен состоять из 16 символов, повторите попытку ещё раз"<<endl;
		}while(check!=16);



		cout<<"Ведите: дату оканчания действия карты"<<endl;
	do{//card_data
	cin>>user.month_year;
		check=user.month_year.length();
		if(check!=5)cout<<"Ошибка: Неверный формат даты"<<endl;
		}while(check!=5);


	cout<<"Ведите: задний номер карты"<<endl;
	do{//card_back_namber
	cin>>user.back_card_number;
		check=user.back_card_number.length();
		if(check!=3)cout<<"Ошибка: задний номер карты должен сотоять из 3 цифр, повторите попытку ещё раз"<<endl;
		}while(check!=3);

	cout<<"Ведите: pin-код карты"<<endl;
	do{//card pin
	cin>>user.card_pin;
		check=user.card_pin.length();
		if(check!=4)cout<<"Ошибка: вы ввели не верный код, повторите попытку ещё раз"<<endl;
		}while(check!=4);

 	while(nam!=100)//загрузка
	{
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                ";
			cout<<"Загрузка:";
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
						cout<<"Вы вошли как: Сенько Юрий Степанович"<<endl;
					}
				}


		else if(user.card_namber==user2.card_namber && user.month_year==user2.month_year )//user2
				{
					if(user.back_card_number==user2.back_card_number && user.card_pin==user2.card_pin)
					{
						general_check=true;
						user2_check=true;
						cout<<"Вы вошли как: Исмаилов Антон Альбертович"<<endl;
					}
				}


		else if(user.card_namber==user3.card_namber && user.month_year==user3.month_year )//user3
				{
					if(user.back_card_number==user3.back_card_number && user.card_pin==user3.card_pin)
					{
						general_check=true;
						user3_check=true;
						cout<<"Вы вошли как: Веселова Анна Викторовна"<<endl;
					}
				}

		else {
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"               ";
		cout<<"Ошибка: данные указаны не верно. Повторите попытку"<<endl;}
		for(int w=0; w<1500000000; w++){}
		system("cls");
}while(general_check==false);

do{//меню
	cout<<endl<<endl<<endl<<endl<<endl<<"                                  ";
										cout<<"Меню"<<endl<<endl<<endl;
	cout<<"       Узнать баланс карты(1)"<<"                "<<"Снять деньги(2)"<<endl<<endl;
	cout<<"       Пополнить мобильный(3)"<<"                "<<"Внести деньги(4)"<<endl<<endl;
	cout<<"       Количество денег в банкомате(5)"<<"       "<<"Выйти(6)"<<endl<<endl;
	cout<<"                  Выберите функцию и введите её цифру"<<endl<<endl;
	cout<<"       ";
	cin>>answer;
	cout<<endl<<endl;
	switch(answer){

		case 1: do{//баланс
				if(user1_check==true)cout<<"     Сенько Юрий Степанович ваш баланс состовляет: "<<user1.balance<<"грн";
				if(user2_check==true)cout<<"     Исмаилов Антон Альбертович ваш баланс состовляет: "<<user2.balance<<"грн";
		 		if(user3_check==true)cout<<"     Веселова Анна Викторовна ваш баланс состовляет: "<<user3.balance<<"грн";
		 		cout<<endl<<endl;
		 		cout<<"     Для возращения в меню нажмите 1"<<endl;
				 cout<<endl<<endl<<"     ";
		 		cin>>answer_menu;
		 		cout<<endl<<endl;
		 		if(answer_menu=="1")system("cls");
		 		}while(answer_menu!="1");break;


		case 2: do{ //снять деньги
				if(user1_check==true)cout<<"     Сенько Юрий Степанович ваш баланс состовляет: "<<user1.balance<<"грн";
				if(user2_check==true)cout<<"     Исмаилов Антон Альбертович ваш баланс состовляет: "<<user2.balance<<"грн";
		 		if(user3_check==true)cout<<"     Веселова Анна Викторовна ваш баланс состовляет: "<<user3.balance<<"грн";
		 		cout<<endl<<endl;


					 		cout<<"Выберите сумму для снятия"<<endl<<endl<<endl;
				cout<<"       10(1)"<<"                "<<"50(2)"<<endl<<endl;
				cout<<"       100(3)"<<"               "<<"500(4)"<<endl<<endl;
				cout<<"       1000(5)"<<"              "<<"5000(6)"<<endl<<endl;
				cout<<"                  Выберите и введите цифру"<<endl<<endl;
				cout<<"       ";
				cin>>sum;
				switch(sum){

					case 1:
						 	if(user1_check==true){user1.balance=user1.balance-10;}
							if(user2_check==true){user2.balance=user2.balance-10;}
							if(user3_check==true){user3.balance=user3.balance-10;}
							cout<<"С вашего счёта списанно 10гр"<<endl; break;


		 			case 2:
						 	if(user1_check==true){user1.balance=user1.balance-50;}
							if(user2_check==true){user2.balance=user2.balance-50;}
							if(user3_check==true){user3.balance=user3.balance-50;}
							cout<<"С вашего счёта списанно 50гр"<<endl; break;


		 			case 3:
						 	if(user1_check==true){user1.balance=user1.balance-100;}
							if(user2_check==true){user2.balance=user2.balance-100;}
							if(user3_check==true){user3.balance=user3.balance-100;}
							cout<<"С вашего счёта списанно 100гр"<<endl; break;


		 			case 4:
						 	if(user1_check==true){user1.balance=user1.balance-500;}
							if(user2_check==true){user2.balance=user2.balance-500;}
							if(user3_check==true){user3.balance=user3.balance-500;}
							cout<<"С вашего счёта списанно 500гр"<<endl; break;


		 			case 5:
						 	if(user1_check==true){user1.balance=user1.balance-1000;}
							if(user2_check==true){user2.balance=user2.balance-1000;}
							if(user3_check==true){user3.balance=user3.balance-1000;}
							cout<<"С вашего счёта списанно 1000гр"<<endl; break;


		 			case 6:
						 	if(user1_check==true){user1.balance=user1.balance-5000;}
							if(user2_check==true){user2.balance=user2.balance-5000;}
							if(user3_check==true){user3.balance=user3.balance-5000;}
							cout<<"С вашего счёта списанно 5000гр"<<endl; break;
		 			}
		 		if(user1_check==true)cout<<"     Сенько Юрий Степанович ваш баланс состовляет: "<<user1.balance<<"грн";
				if(user2_check==true)cout<<"     Исмаилов Антон Альбертович ваш баланс состовляет: "<<user2.balance<<"грн";
		 		if(user3_check==true)cout<<"     Веселова Анна Викторовна ваш баланс состовляет: "<<user3.balance<<"грн";
		 		cout<<endl<<endl;

		 		cout<<"     Для возращения в меню нажмите 1"<<endl;
				 cout<<endl<<endl<<"     ";
		 		cin>>answer_menu;
		 		cout<<endl<<endl;
		 		if(answer_menu=="1")system("cls");
		 		}while(answer_menu!="1");break;
	}
}while(exit==false);

return 0;}

