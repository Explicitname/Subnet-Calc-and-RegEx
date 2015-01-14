/*
 * main.cpp
 *
 *  Created on: Jan 14, 2015
 *      Author: Explicitness
 */



//Example 1
#include <stdio.h>
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string input;
	regex ip("([0-9]{1,3})\.([0-9]{1,3})\.([0-9]{1,3})\.([0-9]{1,3})\/([0-9]{1,2})");
	//As long as the input is correct ask for another number
	while(true)
	{
		cout<<"Give me an ip!"<<endl;
		cin>>input;
		if(!cin) break;
		//Exit when the user inputs q
		if(input=="q")
			break;
		if(regex_match(input,ip))
		{
			cout<<"Valid IP!"<<endl;
		}
		else if(regex_match(input,ip[0]) > 255)
		{
			break;
		}
		else
		{
			cout<<"Invalid input"<<endl;
		}
	}
}
