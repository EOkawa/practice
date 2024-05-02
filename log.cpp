/*
Given a file consisting of lines like this:
2017-02-01T20:00 OperationA Start
2017-02-01T20:01 OperationA End
2017-02-01T20:08 OperationB Start
2017-02-01T20:09 OperationC Start
2017-02-01T20:10 OperationB End
2017-02-01T20:12 OperationC End
Produce an average runtime of all operations.
Example output:
Average: 0 days 0 hours 2 minutes  (0 days 0 hours 6 minutes total for 3 operations)

Solution Log Parsing:
Note: Datetime parsing is not nearly as important here as getting the average by iterating through the data once. 
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <time.h>

using namespace std;

int main() {
	vector<string> log = {	"2017-02-01T20:00 OperationA Start",
							"2017-02-01T20:01 OperationA End",
							"2017-02-01T20:08 OperationB Start",
							"2017-02-01T20:09 OperationC Start",
							"2017-02-01T20:10 OperationB End",
							"2017-02-01T20:12 OperationC End"
                     	};
    unordered_map<string, int> map;
    int total = 0;
    
	for (auto n : log) {
    	if ( n.substr(28,3) == "Sta" ) {
        	map.emplace( n.substr(26,1), stoi(n.substr(14,2)) );
            cout << "Inserting: [" << n.substr(26,1) << ", " << stoi(n.substr(14,2)) << "]" << endl;
        }
    }
    
    for (auto m : log) {
    	if ( m.substr(28,3) == "End" ) {
        	total +=  stoi(m.substr(14,2)) - map[m.substr(26,1)];
            cout << m.substr(26,1) << " - End: " << stoi(m.substr(14,2)) << ", Start: " << map[m.substr(26,1)] << endl;
		}
	}
	cout << endl << "Total: " << total << ", Average: " << total / (log.size()/2) << ", Operations: " << (log.size()/2) << endl;
    
	return 0;
}