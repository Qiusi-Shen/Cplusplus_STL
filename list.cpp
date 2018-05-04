#include<list>
#include<iostream>
#include<iterator>

using namespace std;

// list is double linked list

list<int> mylist = {5, 2, 9};
mylist.push_back(6);    //mylist: {5, 2, 9, 6}
mylist.push_front(4);   //mylist: {4, 5, 2, 9, 6}

list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2); //itr->2
mylist.insert(itr, 8);  // mylist: {4, 5, 8, 2, 9, 6}
                        // O(1) faster than vector/deque;
itr++;                        // itr-> 9
mylist.erase(itr);      // mylist: {4, 8, 5, 2, 6} O(1)

// Properties:
// 1. fast insert/remove at any place: O(1)
// 2. slow search: O(n)
// 3. no random access, no [] operator.                    