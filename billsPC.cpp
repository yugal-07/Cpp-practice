#include<iostream>

int main(){
//BILL'S PC using switch

int option;
using std::string;
                string a="NIDOKING";
                string b="NIDOQUEEN";
                string c="STEELIX";
                string d="BIDOOF";
                string e="ZIGZAGOON";
                string f="HAUNTER";

do{
std::cout<<"=================WELCOME TO BILL'S PC=================="<<'\n';
std::cout<<"WHAT DO YOU WANT TO DO?"<<'\n';
std::cout<<"1.WITHDRAW POKEMON\n2.DEPOSIT POKEMON\n3.SEE YA! "<<'\n';

std::cin>>option;

switch(option){
	case 1:
	std::cout<<"WHICH POKEMON WOULD YOU LIKE TO WITHDRAW ? "<<'\n';
	std::cout<<"1."<<d<<'\n';
	std::cout<<"2."<<e<<'\n';
	std::cout<<"3."<<f<<'\n';
	int choice;
	std::cin>>choice;
	switch(choice){
		case 1:
		std::cout<< d<<" IS NOW IN YOUR PARTY!"<<'\n';
		break;
		case 2:
                std::cout<< e<<" IS NOW IN YOUR PARTY!"<<'\n';
                break;
		case 3:
                std::cout<< f<<" IS NOW IN YOUR PARTY!"<<'\n';
                break;
	default:
		std::cout<<"PLEASE CHOOSE BETWEEN 1,2 OR 3"<<'\n';
}
break;

	case 2:
	 std::cout<<"WHICH POKEMON WOULD YOU LIKE TO DEPOSIT ? "<<'\n';
        std::cout<<"1."<<a<<'\n';
        std::cout<<"2."<<b<<'\n';
        std::cout<<"3."<<c<<'\n';
	int choose;
        std::cin>>choose;
        switch(choose){
                case 1:
                std::cout<< a<<" HAS BEEN DEPOSITED TO BILL'S PC!"<<'\n';
                break;
		case 2:
                std::cout<< b<<" HAS BEEN DEPOSITED TO BILL'S PC!"<<'\n';
                break;
		case 3:
                std::cout<< c<<" HAS BEEN DEPOSITED TO BILL'S PC!"<<'\n';
                break;
       default:
                std::cout<<"PLEASE CHOOSE BETWEEN 1,2 OR 3"<<'\n';
}break;
	case 3:
		std::cout<<"YOU LOGGED OUT OF BILL'S PC !"<<'\n';
break;
default:
	std::cout<<"PLEASE CHOOSE BETWEEN 1,2 OR 3"<<'\n';

}
std::cout<<'\n';

}while(option!=3);


return 0;
}
