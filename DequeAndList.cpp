#include <deque>
#include <list>
#include <iostream>
using namespace std;
int main () {
//	//empty
//	deque<int> d;
//	deque<float> f;
//	//n
//	deque<int> d2(10);
//	// 10 elements' value is 8.5
//	deque<float> d3(10, 8.5);
//	
//	
//	d.push_back(1);
//	d.push_back(2);
//	d.push_back(3);
//	
//	d.push_front(10);
//	d.push_front(20);
//	
//	d.insert( d.begin() + 1, 88);
//	
	//cout << d[0] << " " << d[1] << " " << d[2] << endl;
//	int i;
//	for ( int i = 0; i < d.size(); i++ )
//		cout << d[i] << " ";
//	cout << endl;
	
//	d.pop_front();
//	d.pop_back();
//	d.erase(d.begin() + 1);
//	d.clear();

//	deque<int>::iterator it;
//	for ( it = d.begin(); it != d.end(); it++ )
//		cout << *it << " ";
//	cout << endl;
	
//	deque<int>::reverse_iterator rit;
//	for ( rit = d.rbegin(); rit != d.rend(); rit++ )
//		cout << *rit << " ";

	//empty
	list<int> l;
	//n
	list<int> l2(10);
	
	l.push_back(2);
	l.push_back(5);
	l.push_back(5);
	l.push_front(8);
	
	list<int>::iterator it;
	it = l.begin();
	it++; // can't be added by number
	//it = l.begin() + 1;  // compile error
	l.insert(it, 20);
	
	for ( it = l.begin(); it != l.end(); it++ )
		cout << *it << " ";
	cout << endl;
	
//	l.remove(5);
//	l.pop_front();
//	l.pop_back();	

//	it = l.begin();
//	it++;
//	l.erase(it);
	l.clear();
	
	for ( it = l.begin(); it != l.end(); it++ )
		cout << *it << " ";
	cout << endl;
	
//	list<int>::reverse_iterator rit;
//	for ( rit = l.rbegin(); rit != l.rend(); rit++ )
//		cout << *rit << " ";
//	cout << endl;
	return 0;
}
