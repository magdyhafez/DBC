#include"stdafx.h"
#include <iostream>
#include "dbc.h"
#include <array>
#include <string>

using namespace std;

class Dictionary
{
private:

	string keys[100];
	string values[100];
	bool keyexist(string y);
	int findkey(string y);
	int findempty();

public:
	Dictionary();

	void Add(string x, string y);
	void Remove(string x);

	string getvalue(string key);

};
bool Dictionary::keyexist(string y)  // find the key y in the array keys
{
	for (int i = 0; i < 100; i++)
	{
		if (keys[i] == y)
		{
			return 1;

		}


	}
	return 0;
}
int Dictionary::findempty() // Find the first empty Element in array keys
{
	REQUIRE0(keyexist(" ") == 1);
	for (int i = 0; i < 100; i++)
	{

		if (keys[i] == " ")
		{
			return i;

		}

	}


}
int Dictionary::findkey(string y)     //find a key string in array keys 
{
	REQUIRE0(keyexist(y) == 1);
	for (int i = 0; i < 100; i++)
	{

		if (keys[i] == y)
		{
			return i;


		}

	}
}

Dictionary::Dictionary()
{
	for (int i = 0; i < 100; i++)
	{
		this->keys[i] = " ";
		this->values[i] = " ";

	}
}
void Dictionary::Add(string x, string y)
{
	REQUIRE0(keyexist(x) == 0);
	int j = findempty();
	keys[j] = x;
	values[j] = y;
	ENSURE0(keyexist(x) == 1);


}
void Dictionary::Remove(string x)
{
	REQUIRE0(keyexist(x) == 1);
	int j = 0;
	j = findkey(x);
	keys[j] = (" ");
	values[j] = (" ");
	ENSURE0(keyexist(x) == 0);

}
string Dictionary::getvalue(string key)
{
	REQUIRE0(keyexist(key) == 1);
	int j = findkey(key);
	return values[j];
}


