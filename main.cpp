#include <iostream>
#include <sstream>
#include "BMI.h"
#include <fstream>
#define MAX_LEN 999
using namespace std;
int main(){
	
	BMI bmi;
	fstream OutD;
	ifstream InD("file.in");
	OutD.open("file.out",ios::out);
	int H,M;
	while (InD >> H >> M)
	{
		if(H == 0){break;}
		
		//cout << "I got : "<< H << "  " << M << endl;
		
		bmi.set_height(H);
		bmi.set_mass(M);
		//cout<< "height ="<<bmi.get_height() <<endl;
		//cout<< "mass ="<<bmi.get_mass() <<endl;
		//cout<< "BMI ="<<bmi.get_BMI()<<endl;
		//cout<< "The Category is "<<bmi.get_cat()<<endl;
		OutD<<bmi.get_BMI()<<"	"<<bmi.get_cat()<<endl;

	}

	OutD.close();




	return 0;
	



}
