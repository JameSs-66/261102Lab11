#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	string text;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");

	dest << "-------------------- BOOM ---------------------" << endl; 
	while(getline(source, text)){
		dest << text << endl;
	}
	dest << "-------------------- HA!! ---------------------" << endl; 

    source.close();
    dest.close();
	return 0;
}
