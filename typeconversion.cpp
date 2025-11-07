
#include<iostream>

int main(){
//typeconversion - implicit : done by system
//                 explicit : done by user

//explicit :-
int x=10;
int y=6;
float z= x/(float)y;  //int to float

std::cout<<z<<'\n';

//implicit :-
char a =100;

std::cout<<a <<'\n';  //int to char

return 0;
}
