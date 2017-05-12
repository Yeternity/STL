#include <map>
#include <string>
#include <iostream>
using namespace std;
struct myComp {
	// ? ? ? 
	bool operator () ( const int &a, const int &b ) {
		if ( a != b )
			return a > b;
		else
			return a > b;	
	}
};
struct Info {
	string name;
	float score;
	bool operator < ( const Info &a ) const {
		return a.score < score;
	}
};
int main () {
//	map<string, string> m;
//	m["jiandao"] = "bu";
//	m["bu"] = "shitou";
//	m["shitou"] = "jiandao";
	//cout << m["bu"] << endl;
//	map<string, string>::iterator it;
//	for ( it = m.begin(); it != m.end(); it++ )
//		cout << (*it).first << " : " << (*it).second << endl;
//	m.erase("jiandao");
//	for ( it = m.begin(); it != m.end(); it++ )
//		cout << (*it).first << " : " << (*it).second << endl;
//	m.clear();
//	cout << m.size() << endl;
	
//	map<string, string>::reverse_iterator rit;
//	for ( rit = m.rbegin(); rit != m.rend(); rit++ )
//		cout << (*rit).first << " : " << (*rit).second << endl;

//	map<string, string>::iterator it;
//	it = m.find("jiandao");
//	if ( it != m.end() )
//		cout << (*it).first << " : " << (*it).second << endl;
	
//	map<int , char, myComp> m;
//	m[25] = 'm';
//	m[28] = 'k';
//	m[10] = 'x';
//	m[30] = 'a';
//	map<int, char, myComp>::iterator it;
//	for ( it = m.begin(); it != m.end(); it++)
//		cout << (*it).first << " : " << (*it).second << endl;

//	map<Info, int> m;
//	Info info;
//	info.name = "jack";
//	info.score = 60;
//	m[info] = 25;
//	
//	info.name = "Bomi";
//	info.score = 80;
//	m[info] = 10;
//	
//	info.name = "Peti";
//	info.score = 66.5;
//	m[info] = 30;
//	
//	map<Info, int>::iterator it;
//	for ( it = m.begin(); it != m.end(); it++ ) {
//		cout << (*it).second << " : ";
//		cout << ((*it).first).name << " " << ((*it).first).score << endl;
//	}
	
	multimap<string, double> m;
	m.insert( pair<string, double>("Jack", 300.5) );
	m.insert( pair<string, double>("Kitty", 200) );
	m.insert( pair<string, double>("Memi", 500) );
	m.insert( pair<string, double>("Jack", 306) );
	multimap<string, double>::iterator it;
	for ( it = m.begin(); it != m.end(); it++ ) 
		cout << (*it).first << " : " << (*it).second << endl;
//	m.erase("Jack");
//	cout << "the elements after deleted: " << endl;
//	for ( it = m.begin(); it != m.end(); it++ ) 
//		cout << (*it).first << " : " << (*it).second << endl;
//	cout << endl << " the searching result: " << endl;
//	it = m.find("Jack");
//	if ( it != m.end() )
//		cout << (*it).first << " " << (*it).second << endl;
//	m.insert( pair<string, double>("Jack", 306) );
	cout << endl << " the searching result: " << endl;
	it = m.find("Jack");
	if ( it != m.end() )
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
