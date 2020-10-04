#include <iostream>

using namespace std;

int main() 
{
	string cadena;
	getline(cin, cadena);
	
	// utilizar tipos de datos 		`char`, `int`, `short`, `float`, `double`, `long`
	
	if (cadena == "int")
	{
		cout<<"sizeof(int): " <<sizeof(int) <<endl;
	}
	
	else if(cadena == "char")
	{
		cout<<"sizeof(char): " <<sizeof(char) <<endl;
	}
	
	else if(cadena == "short")
	{
		cout<<"sizeof(short): " <<sizeof(short) <<endl;
	}
	
	else if(cadena == "float")
	{
		cout<<"sizeof(float): " <<sizeof(float) <<endl;
	}
	
	else if(cadena == "double")
	{
		cout<<"sizeof(double): " <<sizeof(double) <<endl;
	}
	
	else if(cadena == "long")
	{
		cout<<"sizeof(long): " <<sizeof(long) <<endl;
	}
	
	
    return 0;
}
