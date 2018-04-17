// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//--------------------------------------------------------------------
// Function Prototypes
void FIND(string sentence, char* searching, int len);
string getSentence();
//--------------------------------------------------------------------

int main()
{

	string sentence = getSentence();
	
	char searching[20];
	cout << "Enter character you want to be located(no space needed): ";
	cin >> searching;
	int len = strlen(searching);
	FIND(sentence, searching, len);

	
	return 0;
}
string getSentence()
{
	string sentence;
	cout << "Enter a sentence: ";
	getline(cin, sentence);
	return sentence;
}

void FIND(string sentence, char * s, int len)
{
	
		int pos;
		for (int i = 0; i < len; i++)
		{
			cout << s[i];
			pos = sentence.find(s[i], 0) + 1;
			if (pos != 0)
			{
				cout << " is in position " << pos << endl;
			}
			else
				cout << " is in position -1" << endl;
		}
}