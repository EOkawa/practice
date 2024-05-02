// Vector
sort(g.begin(), g.end());
v.push_back()
v = vector<int>();
v.clear();
v.swap(x)
vector<int>::iterator it;

// String
sort(str.begin(), str.end());
size_t pos = str.find(str2, start) -> if not found, it returns std::string::npos
reverse(str.begin(), str.end());
string sub = str.substr(1, 5);
to_string();
stoi();

// Map
m.at()
m.emplace(i,j);
m.empty()
m.size();
m.count()
m.erase( iterator first, iterator last );
m.erase(key)
m.erase( iterator);
map<key, value>::iterator it;
for (auto it = m.begin(); it != m.end(); it++) {
    std::cout << it->first    // string (key)
              << ':'
              << it->second   // string's value 
              << std::endl;
}

// Set
s.emplace();
s.count{};
s.find(); -> if not found -> s.end()

// Queue
q.push()
q.front()
q.pop()

// Stack
s.push()
s.top()
s.pop()
s.empty()
s.size()

// Mics
#include <utility> swap(nums[p1], nums[p2])
#include <algorithm> max(25, 140), min(55, 50);
#include <cmath> pow(a, b) = a^b
#include <limits.h> INT_MAX, INT_MIN, LONG_MAX, DBL_MAX
