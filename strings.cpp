#include<iostream>
#include<string>

int main(){
//string methods

std::string name;
std::cout<<"enter the name: ";
std::getline(std::cin,name);

//std::getline(std::cin,name) = cin but also to add spaces in between
//name.length() = tells the lenth of string
//name.empty() = tells if the string is empty
//name.clear() = doesn't matter if the string is empty or not, it will clear everything in output
//name.append() = adds a fixed set of characters at the end of the string in output
//name.at(0) = will show the character value at the given point , here it is 0
//name.insert() = to insert a fixed set of characters in the string
//name.find() = will give you the position of what you want to find inside of the string
//name.erase() = will erase a portion of the string


name.append("@gmail.com");

name.insert(0,"#");

std::cout<< name.at(3)<<'\n';
std::cout<< "EMAIL ADDRESS FOR YOU: "<<name<<'\n';
std::cout<< name.find("y")<<'\n';

name.erase(0,5);
std::cout<<name<<'\n' ;

}
