// Dictionary.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include <iostream>
#include "dbc.h"
#include <array>
#include "Dictionary.h" 
; using namespace std;


int main()

{
	try
	{
		Dictionary Magdy;
		Magdy.AddElement("magdy", "magdyhafez_93@hotmail.com");
		Magdy.AddElement("rami", "ramihafez@yahoo.com");
		cout << Magdy.getvalue("magdy") << endl<< Magdy.getvalue("rami")<<endl;
	}
	catch (DesignByContractException & e)
	{
		cout << (string)e;
	}
	int y;
	cin>> y;

}
