#include <iostream>
#include "BMI.h"

using namespace std;
int main(){
	
	BMI bmi;
	bmi.set_height(172.0);
	bmi.set_mass(90.0);

	cout<< "height ="<<bmi.get_height() <<endl;
	cout<< "mass ="<<bmi.get_mass() <<endl;
	cout<< "BMI ="<<bmi.get_BMI()<<endl;
	cout<< "The Category is "<<bmi.get_cat()<<endl;

	return 0;
	



}
