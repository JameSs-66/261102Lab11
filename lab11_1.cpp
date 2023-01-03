#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {},i = 0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		i++;
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){ break;
		}else if(grade == 'A'){ // if grade is A
			count[0]++;
		}else if(grade == 'B'){ // if grade is B
			count[1]++;
		}else if(grade == 'C'){ // if grade is C
			count[2]++;
		}else if(grade == 'D'){ // if grade is D
			count[3]++;
		}else if(grade == 'F'){ // if grade is D
			count[4]++;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;
			i--;
		} 
	}while(true);
	
	
	cout << "In total " << i-1 <<  " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
