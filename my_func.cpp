#include<iostream>

using namespace std;

int my_func(int);

int main()
{
	int i=10, c=0;
    	
    c = my_func(i);
    
    cout << "value of i =" << c << endl;
    
}

int my_func(int j)
{
	return j;
}
