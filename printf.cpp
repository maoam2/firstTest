// my first string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string mystring;
	int cislo = 0x01;
	
	for (int i = 0; i<64; i++) {
		
		mystring = "Iterace(";
		mystring.append(to_string(i));
		mystring.append("): ");
		mystring.append(to_string(cislo));
		mystring.append("\n");
	
		cout << mystring << endl;
		cislo = cislo << 1;

		cislo = cislo << 1;
		
	}

  return 0;
}
