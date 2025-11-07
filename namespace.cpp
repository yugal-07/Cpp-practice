#include<iostream>
namespace first{
	int age=14;
	char name[]= "GAURAV";
}
namespace second{
	int age=18;
	char name[]="YUGAL";
}
int main(){

//namespaces : assigning diff values to same variable

int x=0;
char name[90] = "";

std::cout<< first::name<< "is"<<first::age<<"years old !"<<'\n' ;

std::cout<< second::name<< "is"<<second::age<<"years old !"<<'\n' ;

return 0;
}
