#include<iostream>

int main(){
//calculator

float a;
float b;
float r;
char op;
std::cout<<"CHOOSE THE OPERATOR(+ , - , * , /) : ";
std::cin>>op;

std::cout<<"ENTER THE VALUE OF A: ";
std::cin>>a;

std::cout<<"ENTER THE VALUE OF B:";
std::cin>>b;

switch(op){
	case '+':
		r=a+b;
	break;
	case '-':
                r=a-b;
        break;
	case '*':
                r=a*b;
        break;
	case '/':
                r=a/b;
        break;

default:
	std::cout<<"CHOOSE BETWEEN THE GIVEN OPERATORS"<<'\n';
}

std::cout<<r<<'\n';


return 0;
}
