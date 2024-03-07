/*
Say I'm writing a phone app that serves as a DVR remote. I need a function that takes the name of a movie and computes the key presses that will enter that string on the DVR grid. 

The output should be a 
string, with "u", "d", "l", "r", and "!" corresponding to up, 
down, left, right, and select. 

For example, with a grid of width 5, 
  a b c d e 
  f g h i j 
  k l m n o 
  p q r s t 
  u v w x y 
  z 
The movie "cars" would be "rr!ll!dddrr!r!". 
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string keys(string title)
{
	std::string s6 (10, 'x');
	int steps, current, previous;
    steps = current = previous = 0;
	string res;
    int up, down, left, right;
    up = down = left = right = 0;
    
    for (auto n : title) {
		current = (int) n-'a';
        
        steps = (current - previous); 
		cout << "Current: " << current << ", Previous: " << previous << ", Steps: " << steps << endl;
		
        if (steps > 0) {
			right = steps % 5;
        	down = steps / 5;
        }
		if (steps < 0) {
			left = -steps % 5;
        	up = -steps / 5;
		}
		
        cout << "Left: " << left << ", Up: " << up << ", Right: " <<  right << ", Down: " << down << endl;
        
        for (int l = 0; l < left; l++) res += 'l';
        for (int u = 0; u < up; u++) res += 'u';
        for (int r = 0; r < right; r++) res += 'r';
        for (int d = 0; d < down; d++) res += 'd';
        res += '!';
        cout << "res: " << res << endl << endl;
      	previous = current;
      	up = down = left = right = 0;
	}
    
	return res;
}

int main() {

	string title = "cars";

	cout << keys(title);

	return 0;
}
