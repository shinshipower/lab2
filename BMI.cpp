#include "BMI.h"

BMI::BMI(){ mass = 0; height = 0; }

void BMI::set_height(float h){ height = h; }
void BMI::set_mass(float m){ mass = m; }
float BMI::get_height(void){ return height;}
float BMI::get_mass(void){ return mass; }

float BMI::get_BMI(void)
{
	if(height == 0)
		return 0 ;

	else
		return mass/(height*height/100/100);

}

string BMI::get_cat(void)
{
	float bmi = 0.0;
	bmi = get_BMI();

	if(bmi >= 40 )
	{return "Obese Class III";}
	else if(bmi >=35)
	{return "Obese Class II";}
	else if(bmi >=30)
	{return "Obese Class I";}
	else if(bmi >=25)
	{return "Overweight";}
	else if(bmi >=18.5)
	{return "Normal";}
	else if(bmi >=16.0)
	{return "Underweight";}
	else if(bmi >=15.0)
	{return "Severely underweight";}
	else {return "Very severely underweight";}

}
