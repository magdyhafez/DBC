#include <iostream>
#include "dbc.h"
#include <array>
using namespace std;

class Dictionary
{
public:

	static string keys[100];
	static string Values[100];
	void AddElement(string x, string y);
	void RemoveElement(string x);

};
for (int i = 0; i < 100; i++)
{
	keys[i].fill("empty");
	values[i].fill("empty");
}