/*Write a function that accepts a number encoded as an array of digits, e.g. [1,9,3,8] for the number 1938, and returns the encoded number incremented by 1, e.g. returns [1,9,3,9].
Examples:
[1,9,3,8] -> [1,9,3,9]
[4,4,4] -> [4,4,5]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> encode (vector<int> num)
{
	bool increment = true;
	bool inc = false;

	for(auto n : num)
    	if(n != 9) increment = false;
    
    if (increment) {	
        vector<int> result (num.size() + 1, 0);
        result[0] = 1;
        return result;
    }
    else {
    	num[num.size()-1] += 1;
		for (int i = (num.size() - 1); i >= 0; i--) 
        {
			if (inc) {
            	num[i] += 1;
            	inc = false;
            }
                
			if (num[i] > 9) {
				num[i] = 0;
                inc = true;
            }
        }
    	return num;
	}
}

int main() {
  vector<int> num = {1,9,9,9};
  vector<int> result;

  result = encode(num);

  for(auto r : result)
      cout << r << endl;

return 0;
}
