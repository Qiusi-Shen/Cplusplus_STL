#include <vector>
#include <deque>
#include <list>
#include <set>  // set and multiset
#include <map>  // map and multimap
#include <unordered_set>    // unordered set/multiset
#include <unordered_map>    // unordered map/multimap
#include <iterator>
#include <algorithm>
#include <numeric>      // some numeric algorithm
#include <functional>

/*
    Vector
*/

vector<int> vec; // vec.size()==0;
vec.push_back(4);
vec.push_back(1);
vec.push_back(8);   // vec: {4, 1, 8};  vec.size() == 3

// Vector specific operations:

cout << vec[2];     // 8 (no range check)
cout << vec.at(2);  // 8 (throw range_error exception of out of range)

for (int i = 0; i < vec.size(); i++){
    cout<< vec[i]<< " ";
}

for(vector<int>::iterator itr = vec.begin(); itr!=vec.end(); ++itr)
    cout<< *itr<<" ";

for (it : vec) // c++ 11
    cout << it << " ";

// Vector is a dynamically allocated contiguous array in memory
int* p = &vec[0]; p[2] = 6;

// common member functions of all containers.
// vec {4,1,8}

if(vec.empty()){cout<<"Not possible.\n";}

cout<<vec.size();   //3

vector<int> vec2(vec); //Copy constructor, vec2: {4,1,8}
vec.clear();    //Remove all items in vec; vec.size()==0;
vec2.swap(vec); // vec2 become empty, and vec has 3 items.

// Notes: No penalty of abstraction, very efficient.

// Properties of Vector:
// 1. fast insert/remove at the end: O(1)
// 2. slow insert/remove at the begining or in the middle: O(n)
// 3. slow search: O(n)
 
