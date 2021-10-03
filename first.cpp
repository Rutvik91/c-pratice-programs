#include<iostream>

using namespace std;

int main()
{
	char grade = 'a';
	string phrase = "rutvik malaviya",phrasesub;
	phrase[0] = 'R';	
	int i = 10;
	float f = 20.55;

	cout << phrase.length() << endl;
	
	cout << phrase << endl;

	cout << phrase.find("mala",0) << endl;
	
	phrasesub= phrase.substr(8,3);

	cout <<"Phrasesub = " << phrasesub << endl;

	cout << "grade = " << grade << endl;

	return 0;

}
