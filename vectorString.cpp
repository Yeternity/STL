#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cmp1(const int &a, const int &b){
	if(a != b) return a > b;
	else return a > b;
}
int main(int argc, char** argv) {
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(7);
//	v.push_back(9);
//	cout << v[0] << " " << v[1] << " " << v[2] << endl;
//	return 0;

//vector<int> v(3);
//	v[0] = 1;
//	v[1] = 2;
//	vector<int>::iterator it;
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;

//	vector<int> v(3);
//	v[0] = 2;
//	v[1] = 1;
//	v[2] = 3;
//	v.insert(v.begin(), 8);
//	v.insert(v.begin()+2, 6);
//	v.insert(v.end(), 7);
//	vector<int>::iterator it;
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
	
//	vector<int> v(10);
//	for(int i = 0; i < 10; i++)
//		v[i] = i;
//	//删除第3个元素，（从1开始编号） 
//	v.erase(v.begin() + 2);
//	vector<int>::iterator it;
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	
//	v.erase(v.begin() + 1, v.begin() + 5);
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	
//	v.clear();
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	cout << v.size() << endl;

//	vector<int> v(10);
//	for(int i = 0; i < 10; i++)
//		v[i] = i;
//	reverse(v.begin(), v.end());
//	sort(v.begin(), v.end());
//	sort(v.begin(), v.end(), cmp1 );
//	vector<int>::iterator it;
//	for(it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;

//	vector<int> v(10);
//	for(int i = 0; i < 10; i++)
//		v[i] = i;
//	cout << v.size() << endl;
//	cout << v.empty() << endl;
//	v.clear();
//	cout << v.empty() << endl;


	string s;
	s = s + 'a';
	s = s + "abc";
	s.append("bcd");
//	cout << s << endl;
//	cout << s.length() << endl;
	s = "123456";
	string::iterator it;
	it = s.begin();
	s.insert(it+1, 'o');  //it can be replaced by s.begin()
//	cout << s << endl;
//	cout << s[0] << endl;
//	s.erase(it+1);
	s.erase(it, it+2);	//delete the 0 and 1
	s = ""; 	//clear
//	cout << s << endl;
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
	s.replace(0, 0, "good");	//从第0个元素开始，连续的0个元素替换为good 
//	cout << s << endl;
	s = "cat dog cat";
	cout << s.find('c') << endl;
	cout << s.find("c") << endl;
	cout << s.find("cat") << endl;
	cout << s.find("dog") << endl;
	cout << s.find("dogc") << endl;
	return 0;
}

