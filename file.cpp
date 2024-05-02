#include <fstream>
string line;

ifstream file = file.open("log.txt");
if (!file.is_open()){
	while (getline(file, line)) 
		cout << line << endl;
}
else { 
	cout << "boo";
	return false;
}