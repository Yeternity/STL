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
	//重载 < 操作符，自定义排序规则
	bool operator < (const Info &a) const {
		return a.score < score;	//由大到小 
	} 
};

//C++方法：将数值转化为string 
string convertToString(double x) {
	ostringstream o;	//ostringstream 写到 string 对象中
	if (o << x)
		return o.str();
		return "conversion error"; 
}
//ostringstream类通常用于执行c风格的串流输出操作
//格式化字符串，避免申请大量的缓冲区，替代sprintf。

//c++方法：将string转为数值
 double convertFromString(const string &s) {
 	istringstream i(s); //istringstream从string对象中读取
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
//	//s.c_str以 char* 形式传回string内含字符串 
//	printf(s.c_str());
//	cout << endl;
//	printf("%s", ss);
//	cout << endl;
//	cout << s << endl;
//	cout << ss << endl;

	//separate
//	string s1, s2, s3;
//	char sa[100], sb[100], sc[100];
//	//将字符串分离成子串，分隔符为空格
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
	
//	//数值转化为string，C
//	string a;
//	char b[10];
//	sprintf(b, "%d", 1977);
//	a = b;
//	cout << a << endl;
//	
//	//数值转化为string， C++
//	string cc = convertToString(1978);
//	cout << cc << endl;
//	
//	//string转化为数值字的方法, C++
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
//	//反向迭代器reverse_iterator ，rbegin()给出反向遍历开始位置，rend()反向遍历结束位置 
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
	 
	 //自定义set排序 
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
	//删除值为“123”的所有重复元素，返回删除元素总数2 
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
