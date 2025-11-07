#include<iostream>

//typedef - changing the name of a datatype
typedef std::string s_t ;

//typedef can also be replaced by the using keyword which is more popular
using x_t = int ;

int main(){
//to improve readability of code and type large datatypes faster

s_t name="YUGAL";
x_t age =18;

std::cout<<name<<'\n'<<age<<'\n';



return 0;
}
