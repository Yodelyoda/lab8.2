#include <iostream>
#include <string>

using namespace std;

string Change(string& s)
{
	for (int i = 0; s[i] != ' '; i++) 
	{
		if (!isupper(s[i]))
			s[i] = toupper(s[i]);
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string: ";
	getline(cin, str);
	string dest = Change(str);
	cout << "String after replacing: " << str << endl;
	cin.get();
	return 0;
}
