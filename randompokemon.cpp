#include<iostream>

int main(){
//random pokemon starter selection
//bulbasaur , charmander , squirtle

char a;

do{
std::cout<<"==============RANDOM KANTO POKEMON STARTER SELECTION============"<<'\n';

std::cout<<"TYPE (y) to enter and (n) to exit: ";
std::cin>>a;


if(a=='y'){

	srand(time(NULL));
	int a= (rand()%3)+1 ;
		if(a==1){
			std::cout<<"YOU GOT A BULBASAUR!"<<'\n';
}
		 else if(a==2){
                        std::cout<<"YOU GOT A SQUIRTLE"<<'\n';
}
                 else if(a==3){
                        std::cout<<"YOU GOT A CHARMANDER"<<'\n';
}
}
else if(a=='n'){
	std::cout<<"YOU EXIT THE PROGRAM!"<<'\n';
}
else{
	std::cout<<"PLEASE TYPE EITHER (y) OR (n)"<<'\n';
}
std::cout<<'\n';
}while(a!= 'n');
return 0;
}
