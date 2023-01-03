#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

int main (){
	ifstream score;
	string text;
	score.open("score.txt");
    string num;
    double sum = 0, vari = 0;
    int N = 0;

    while(getline(score, num)){
		sum += atof(num.c_str());
        vari += pow(atof(num.c_str()), 2);
        N++;
	}
    
    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/N << endl;
    cout << "Standard deviation = " << sqrt(((1.0/N)*vari) - pow((sum/N),2));

    score.close();
	return 0;
}
