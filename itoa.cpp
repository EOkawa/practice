#include <iostream>
#include <vector>
using namespace std;

char* itoa(int a)
{
	char* s = new char[10];
    
	int neg = 0;
    int size = 0;
    int b = a;

	if (a < 0) {
    	neg = 1;
        a = -a;
        b = -b;
    }
    
 	while (b != 0) {
    	b /= 10;
    	size++;
    }
    
    cout << "Size: " << size << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    for (int i = 0; i < size; i++) {
		s[size - i - 1 + neg] = '0' + (a % 10);
    	a /= 10;
    }
    if (neg)
    	s[0] = '-';

	for(int j = 0; j < size + neg; j++) {
    	cout << s[j];
    }
    return s;
}

int main()
{
	char* s = new char[10];
    s = itoa(323464);
    
    for (int i = 0; i < 6; i++)
    	cout << endl << s[i];
   
}
