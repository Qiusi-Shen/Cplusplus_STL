#include <deque>
#include<iostream>

using namespace std;
deque<int> deq = {4, 6, 7};
deq.push_front(2); //deq: {2, 4, 6, 7}
deq.push_back(3);  //deq: {2, 4, 6, 7, 3}

// Deque has similar interface with vector
cout << deq[1]; // 4

//Properties of Deque:
// 1. fast insert/remove at the begining and the end: O(1)
// 2. slow insert/remove in the middle: O(n)
// 3. slow search: O(n)