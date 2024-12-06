#include <iostream> 
#include <locale.h>
#include <time.h>

using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, count = 0, many, wordcount1[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, wordcount2[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	char word1[100], word2[100], abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z' };
	cout << "How many letter is in your words?";
	cin >> many;
	cout << "\n Tell me the first word\n";
	for (i = 0; i < many; i++)
	{
		cin >> word1[i];
	}
	cout << "\nTell me the second word\n";
	for (i = 0; i < many; i++)
	{
		cin >> word2[i];
	}
	//cout the letters in the alphabet
	for (i = 0;i < 26;i++)
	{
		for (int j = 0; j < many; j++)
		{
			if (word1[j] == abc[i])
			{
				wordcount1[i] = wordcount1[i] + 1;
			}
			if (word2[j] == abc[i])
			{
				wordcount2[i] = wordcount2[i] + 1;
			}
		}
	}
	//compare the arrays 
	for (i = 0; i < 26; i++)
	{
		if (wordcount1[i] == wordcount2[i])
		{
			count = count + 1;
		}
	}
	if (count == 26)
	{
		cout << "ANAGRAM";
	}
	else
	{
		cout << "NOT ANAGRAM";
	}
}