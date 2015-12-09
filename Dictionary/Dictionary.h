#ifndef DICTIONARY_H
#define DICTIONARY_H
#include"stdafx.h"
#include <iostream>
#include "dbc.h"
#include <array>
#include <string>

using namespace std;
bool keyexist(string y);
int findkey(string y);
int findempty();
class Dictionary
{
public:

	static string keys[100];
	static string values[100];
	void AddElement(string x, string y)
	{
		REQUIRE0(keyexist(x) == 0);
		int j = findempty();
		keys[j] = x;
		values[j] = y;


	}
	
	void RemoveElement(string x)
	{
		REQUIRE0(keyexist(x) == 1);
		int j = 0;
		j = findkey(x);
		keys[j] = ("empty line");
		values[j] = ("empty line");

	}
	string getvalue(string key)
	{
		REQUIRE0(keyexist(key) == 1);
			int j = findkey(key);
		return values[j]; 
	}

};
bool keyexist (string y)  // find the key y in the array keys
{
	for (int i = 0; i < 100; i++)
	{
		if (Dictionary ::keys[i]== y)
		{
			return 1;
			
		}
		

	}
	 return 0;
}
int findempty() // Find the first empty Element in array keys
{
	REQUIRE0(keyexist("empty line") == 1);
	for (int i = 0; i < 100; i++)
	{
		
		if (Dictionary::keys[i] == "empty line")
		{
		   return i;

		}
		
	}
	

}
int findkey(string y)     //find a key string in array keys 
{
	REQUIRE0(keyexist(y)== 1);
		for (int i = 0; i < 100; i++)
		{
			
			if (Dictionary::keys[i] == y)
			{
				return i;
				

			}
			
		}
}



string Dictionary::keys[100] = { "empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line" };
string Dictionary::values[100] = { "empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line" 
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line",
	"empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line","empty line" }
	 
#endif // DICTIONARY_H
