#include <map>

#include <iostream>
#include <string>
#include "Human.h"
#include <algorithm>

using namespace std;


typedef multimap<string, string> MyMap;
typedef MyMap::iterator it;

void main() {
	setlocale(LC_ALL, "rus");

	map<Human , string> mp;

	Human h("Vasya", 22, "mele");
	Human h2("Lena", 19, "female");
	Human h3("los'", 29, "male");

	mp.insert(make_pair(h,"+7(747)-473-71-72"));
	mp.insert(make_pair(h2,"+7(747)-451-34-24"));
	mp.insert(make_pair(h3,"+7(747)-555-21-36"));
	

	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		it->first.info();
		cout << it->second << endl;
	}

	MyMap mm;
	

	mm.insert(make_pair("haski", "pushistik"));
	mm.insert(make_pair("haski", "beglec"));
	mm.insert(make_pair("haski", "bobo"));
	mm.insert(make_pair("ov4arka", "lora"));
	mm.insert(make_pair("4ihyahya", "melkaya"));
	
	
	
	int cnt = mm.count("haski");

	pair<it, it> p = mm.equal_range("haski");
	cout << endl << "Haski: " << endl;
	for (auto it = p.first; it != p.second; it++)
	{
		cout << it->second << " ";
	
	}
	cout << endl << "count = " << cnt << endl;


	multimap<int, string>	st;

	st.insert(make_pair(18, "Petya"));
	st.insert(make_pair(18, "Vova"));
	st.insert(make_pair(19, "Lena"));
	st.insert(make_pair(17, "masha"));
	st.insert(make_pair(24, "ina"));
	st.insert(make_pair(22, "kowka"));

	auto s = st.lower_bound(18);
	auto s1 = st.lower_bound(20);

	
	for (auto i = s; i != s1; i++)
	{
		cout << i->first << " " << i->second << endl;
	}




	system("pause");
}