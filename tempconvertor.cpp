#include<iostream>

int main(){
//temperature convertor

int choose;
float temp;

std::cout<<"============TEMPERATURE CONVERSION PROGRAM============="<<'\n'<<"0 = FARHENHEIT TO CELCIUS"<<'\n'<<"1 = CELCIUS TO FARHENHEIT\n";
std::cin>>choose ;

if(choose==1){
std::cout<<"ENTER THE TEMPERATURE(in celcius): ";
std::cin>>temp;

temp = (temp*9/5)+32 ;
std::cout<<"THE TEMPERATURE(in farhenheit) is: "<<temp<<'\n';

}
else if(choose==0){
std::cout<<"ENTER THE TEMPERATURE(in farhenheit): ";
std::cin>>temp;

temp = (temp-32)*5/9 ;
std::cout<<"THE TEMPERATURE(in celcius) is: "<<temp<<'\n';
}
else{
	std::cout<<"CHOOSE ONLY BETWEEN 0 AND 1"<<'\n';
}
return 0;
}
