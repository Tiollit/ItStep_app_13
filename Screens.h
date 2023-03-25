#include "Reservoir.h"
#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int n = 100;
	long l, s;
	bool t1 = false, t2 = false;

	Reservoir* obj = new Reservoir[n];
	switch (n)
	{
	case 0:
		obj[n].set_Name("Titikaka");
		obj[n].set_Type("lake");
		obj[n].set_Square(8372);
		obj[n].set_Size(893);
		obj[n].set_Deep(282);
		break;
	case 1:
		obj[n].set_Name("Black sea");
		obj[n].set_Type("sea");
		obj[n].set_Square(422000);
		obj[n].set_Size(547000);
		obj[n].set_Deep(2245);
		break;
	case 2:
		obj[n].set_Name("Jalpug");
		obj[n].set_Type("lake");
		obj[n].set_Square(149);
		obj[n].set_Size(0.3874);
		obj[n].set_Deep(6);
		break;
	case 3:
		obj[n].set_Name("Sea of Azov");
		obj[n].set_Type("sea");
		obj[n].set_Square(39000);
		obj[n].set_Size(290);
		obj[n].set_Deep(14);
		break;
	case 4:
		obj[n].set_Name("Winnipeg");
		obj[n].set_Type("lake");
		obj[n].set_Square(25);
		obj[n].set_Size(284);
		obj[n].set_Deep(36);
		break;
	}

	return 0;
