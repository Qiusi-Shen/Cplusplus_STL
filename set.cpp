#include<set>
#include<iostream>
#include<iterator>

using namespace std;

set<int> myset;
myset.insert(3);    // myset: {3}
myset.insert(1);    // myset: {1, 3}
myset.insert(7);    // myset: {1, 3, 7}     O(logn)

set<int>::iterator it;
it = myset.find(7); // O(logn), it points to 7
                    // Sequence containers don't even have find() member function;

pair<set<int>>::iterator, bool> ret;
ret = myset.insert(3);      // no new element inserted
if(ret.second==false)
    it = ret.first;         // "it" now points to element 3

myset.insert(it, 9);        // myset: {1, 3, 7, 9} O(logn) => O(1)
                            // it points to 3
myset.erase(it);            //myset: {1, 7, 9}

myset.erase(7);             //myset{1, 9}
    // Note: none of the sequence containers provide this kind of erase;

// multiset is a set that allows duplicated items
multiset<int>myset;

// set/multiset: value of the elements cannot be modified
*it = 10;       //*it is read-only

// Properties
// 1.Fast search O(logn)
// 2.Traversing is slow(compared to vector & deque)
// 3. No random access, no [] operator.