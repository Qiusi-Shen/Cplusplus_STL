#include<set>
#include<iostream>
#include<iterator>

unordered_set<string> myset = {"red", "green", "blue"};
unordered_set<string>::const_iterator itr = myset.find("green"); // O(1)
if(itr!=myset.end())    // Important check
    cout<<*itr<<endl;
myset.insert("yellow"); // O(1)

vector<string> vec = {"purple", "pink"};
myset.insert(vec.begin(), vec.end());

// Hash table specific APIs:
cout<<"load_factor = " << myset.load_factor() <<endl;
string x = "red";
cout << x << " is in bucket #" << myset.bucket(x) << endl;
cout << "Total bucket #" <<myset.bucket_count() <<endl;

// unoreder multiset: unordered set that allows duplicate elements
// unordered map: unordered set of pairs
// unordered multimap: unordered map that allows duplicated keys

// hash collision => performance degrade

/*
Properties of Unordered Containers:
1 Fastest serach/insert at any place: O(1)
  Associative container tankes O(longn)
  vector, deque takes O(n)
  list takes O(1) to insert, O(n) to search

2 unordered set/multiset: element value cannot be chagned.
  unordered map/multimal: element key cannot be chagned
*/