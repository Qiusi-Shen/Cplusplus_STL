#include<map>
#include<iostream>
#include<iterator>

// assocoative array
// -map and unordered_map

unordered_map<char,string> day = {{'S',"Sunday"}, {'M',"Monday"}};

cout<<day['S'] <<endl;      //No range check
cout<<day.at('S')<<endl;    //Has range check

vector<int> vec = {1,2,3};
vec[5] = 5; // Compile error

day['W'] = "Wednesday"; // Inserting {'W', "Wednesday"}
day.insert(make_pair('F', "Friday")); // inserting the same as above

day.insert(make_pair('M', "MONDAY"));   // Fail
day['M'] = "MONDAY";    // Success

void foo(const unordered_map<char, string> &m){
    m['S'] = "SUNDAY";//fail
    cout<<m['S']<<endl; // also fail;

    auto itr = m.find('S');
    if(itr!=m.end())
    cout<<*itr->second<<endl;
}
foo(day);

// NOtes about Associative array:
// 1 search time: unordered_map O(1); map O(logn);
// 2 Unorded_map may degrade to O(n);
// 3 Can't use multimap and unorded_multimap, they don'thave [] operator   
