#include <string>
using namespace std;
class BMI
{
private : 

	float height;
	float mass;

public	:

	BMI();

	void set_height(float h);
	void set_mass(float m);
	float get_height(void);
	float get_mass(void);

	float get_BMI(void);
	string get_cat(void);

};
