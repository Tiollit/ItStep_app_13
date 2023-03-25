#include "application_library.h"

using namespace std;

void Reservoir::set_Name(string Name)
{
    this->Name = Name;
}
string Reservoir::get_Name()
{
    if (Name.size() != 0)
        return Name;
    else
    {
        return "Empty field";
    }
}

void Reservoir::set_Type(string Type)
{
    this->Type = Type;
}
string Reservoir::get_Type()
{
    if (Type.size() != 0)
        return Type;
    else
    {
        return "Empty field";
    }
}

void Reservoir::set_Square(double Square)
{
    this->Square = Square;
}
double Reservoir::get_Square()
{
    if (Square != 0)
        return Square;
    else
    {
        return 0;
    }
}

void Reservoir::set_Size(double Size)
{
    this->Size = Size;
}
double Reservoir::get_Size()
{
    if (Size != 0)
        return Size;
    else
    {
        return 0;
    }
}

void Reservoir::set_Deep(int Deep)
{
    this->Deep = Deep;
}
int Reservoir::get_Deep()
{
    if (Deep != 0)
        return Deep;
    else
    {
        return 0;
    }
}

class Reservoir
{
public:
	string Name, Type;
    double Square, Size;    

	void set_Name(string Name);
	string get_Name();
	void set_Type(string Type);
	string get_Type();
	void set_Square(double Square);
	double get_Square();
	void set_Size(double Size);
    double get_Size();
	void set_Deep(int Deep);
    int get_Deep();

private:
    int Deep;
};

