#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <set>
using namespace std;
struct Info {
	string name;
	float score;
	//���� < ���������Զ����������
	bool operator < (const Info &a) const {
		return a.score < score;	//�ɴ�С 
	} 
};

//C++����������ֵת��Ϊstring 
string convertToString(double x) {
	ostringstream o;	//ostringstream д�� string ������
	if (o << x)
		return o.str();
		return "conversion error"; 
}
//ostringstream��ͨ������ִ��c���Ĵ����������
//��ʽ���ַ�����������������Ļ����������sprintf��

//c++��������stringתΪ��ֵ
 double convertFromString(const string &s) {
 	istringstream i(s); //istringstream��string�����ж�ȡ
	double x;
	if (i >> x)
		return  x;
	return 0.0;
 }
int main () {
	//reverse
//	string s;
//	s = "1234567890";
//	reverse(s.begin(), s.end());
//	cout << s << endl;
	
	//vector
//	vector<string> v;
//	v.push_back("Jack");
//	v.push_back("Mike");
//	v.push_back("Tom");
//	cout << v[0] << endl;
//	cout << v[1] << endl;
//	cout << v[2] << endl;
//	cout << v[0][0] << endl;
//	cout << v[1][0] << endl;
//	cout << v[2].length() << endl;
	
	//string
//	string s;
//	s = "123456789";
//	int i, sum = 0;
//	for (i = 0; i < s.length(); i++)
//		sum += s[i] - '0';
//	cout << sum << endl;

//	string s;
//	char ss[100];
//	scanf("%s", ss);
//	s = ss;
//	//s.c_str�� char* ��ʽ����string�ں��ַ��� 
//	printf(s.c_str());
//	cout << endl;
//	printf("%s", ss);
//	cout << endl;
//	cout << s << endl;
//	cout << ss << endl;

	//separate
//	string s1, s2, s3;
//	char sa[100], sb[100], sc[100];
//	//���ַ���������Ӵ����ָ���Ϊ�ո�
//	sscanf("abc 123 pc", "%s %s %s", sa, sb, sc);
//	s1 = sa; s2 = sb; s3 = sc;
//	cout << s1 << " " << s2 << " " << s3 << endl;
//	 
//	int a, b, c;
//	sscanf("1 2 3", "%d %d %d", &a, &b, &c);
//	cout << a << " " << b << " " << c << endl;
//	
//	int x, y, z;
//	sscanf("4,5^6", "%d,%d^%d", &x, &y, &z);
//	cout << x << " " << y << " " << z << endl;
	
//	//��ֵת��Ϊstring��C
//	string a;
//	char b[10];
//	sprintf(b, "%d", 1977);
//	a = b;
//	cout << a << endl;
//	
//	//��ֵת��Ϊstring�� C++
//	string cc = convertToString(1978);
//	cout << cc << endl;
//	
//	//stringת��Ϊ��ֵ�ֵķ���, C++
//	string dd = "2008";
//	int p = convertFromString(dd) + 2;
//	cout << p << endl;
	 
//	set<int> s;
//	s.insert(8);
//	s.insert(1);
//	s.insert(12);
//	s.insert(6);
//	s.insert(8);
//	s.insert(9);
//	set<int>::iterator it;
//	for(it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	} 
//	cout << endl;

//	s.erase(6);
//	//���������reverse_iterator ��rbegin()�������������ʼλ�ã�rend()�����������λ�� 
//	set<int>::reverse_iterator rit;
//	for (rit = s.rbegin(); rit != s.rend(); rit++) {
//		cout << *rit << " ";
//	}
//	cout << endl;
//	s.clear();
//	cout << s.size() << endl;
	
//	set<int>::iterator it;
//	it = s.find(6);
//	if(it != s.end())
//		cout << *it << endl;
//	else
//		cout << "not find" << endl;
//	it = s.find(20);
//	if(it != s.end())
//		cout << *it << endl;
//	else
//		cout << "not find" << endl;
	 
	 //�Զ���set���� 
//	 set<Info> s;
//	 Info info;
//	 info.name = "Jack";
//	 info.score = 80;
//	 s.insert(info);
//	 info.name = "Tom";
//	 info.score = 20;
//	 s.insert(info);
//	 info.name = "Nacy";
//	 info.score = 60;
//	 s.insert(info);
//	 info.name = "Elano";
//	 info.score = 75;
//	 s.insert(info);
//	 info.name = "David";
//	 info.score = 90;
//	 s.insert(info);
//	 
//	 set<Info>::iterator it;
//	 for(it = s.begin(); it != s.end(); it++) {
//	 	cout << (*it).name << ":" << (*it).score << endl; 
//	 }
	
	//multiset
	multiset<string> ms;
	ms.insert("abc"); 
	ms.insert("123"); 
	ms.insert("111"); 
	ms.insert("aaa"); 
	ms.insert("123");  //123 repeat 
	ms.insert("bbb"); 
	multiset<string>::iterator it;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}
	//ɾ��ֵΪ��123���������ظ�Ԫ�أ�����ɾ��Ԫ������2 
	int n = ms.erase("123");
	cout << "Total deleted:" << n << endl;
	cout << "all elements after deleted:" << endl;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}
	it = ms.find("aaa");
	if(it != ms.end()) {
		cout << *it << endl;
	}
	else {
		cout << "not find" << endl;
	}
	it = ms.find("ccc");
	if(it != ms.end()) {
		cout << *it << endl;
	}
	else {
		cout << "not find" << endl;
	}
	return 0;
}
