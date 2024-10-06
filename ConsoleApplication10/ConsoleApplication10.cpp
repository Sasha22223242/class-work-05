//#include <iostream> 
//#include <string> 
// 
//using namespace std; 
// 
//typedef struct { 
//    string surname; 
//    char gender; 
//    float seredbal; 
//} School; 
// 
//void res(School people[3], int size) { 
//    int men = 0, women = 0; 
//    float seredMen = 0, seredWom = 0; 
// 
//    for (int i = 0; i < size; ++i) { 
//        if (people[i].gender == 'm') { 
//            men++; 
//            seredMen += people[i].seredbal; 
//        } 
//        else { 
//            women++; 
//            seredWom += people[i].seredbal; 
//        } 
//    } 
//    string result; 
//    result = ((seredMen / men) > (seredWom / women)) ? "У юнаків" : ((seredMen / men) < (seredWom / women)) ? "У дівчат" : "всі молодці"; 
//    cout << result << endl; 
//}  
// 
//int main() { 
//    system("chcp 1251>null"); 
//    cout << "чий підсумковий бал студентів вище" << endl; 
//    School people[]{ 
//        {"smith", 'm', 9}, 
//        {"filler", 'f', 10}, 
//        {"bommer", 'm', 11}, 
//        {"pop", 'm', 11} 
//    }; 
//    int size = sizeof(people) / sizeof(people[0]); 
//    res(people, size); 
//} 

//#include <iostream> 
//#include <string> 
//#include <algorithm> 
// 
//using namespace std; 
// 
//struct comp { 
// string name; 
// int termin; 
// float price; 
// 
//}; 
// 
//bool priceN1(comp &p1, comp &p2) { 
// return p1.price > p2.price; 
//} 
// 
//void sortcomp(comp &monitor) { 
// //for (int i = 0; i < size; ++i) { 
//  cout << monitor.name << ' ' << monitor.price << ' ' << monitor.termin << endl; 
// } 
////} 
//int main() { 
// system("chcp 1251>null"); 
// comp monitor[]{ 
//  {"sumsung", 5, 15.99}, 
//  {"apple", 2, 35.99}, 
//  {"xiaomi", 7, 13.99}, 
// }; 
// int size = sizeof(monitor) / sizeof(monitor[0]); 
// sort(monitor, monitor + size, priceN1); 
// for (int i = 0; i < size; ++i) { 
//  sortcomp(monitor[i]); 
// } 
// int num[]{ 1,8,3,6 }; 
// sort(num, num + 4); 
// for (int i = 0; i < 5; i++) cout << num[i] << ' ' << endl; 
// 
//} 


#include <iostream> 
#include <vector> 
#include <string> 
#include<algorithm> 

using namespace std;

struct monitor {
	string name;
	int termin;
	float price;
};

void info(monitor& mon) {
	cout << "введіть назву монітора" << endl;
	getline(cin, mon.name);
	cout << "термін: ";
	cin >> mon.termin;
	cout << "введіть ціну: ";
	cin >> mon.price;
}

bool priceN1(monitor& p1, monitor& p2) {
	return p1.price < p2.price;
}
void sortcomp(monitor& mon) {
	cout << mon.name << ' ' << mon.price << ' ' << mon.termin << endl;
}
int main() {
	system("chcp 1251>null");
	vector<monitor>pc;
	int add = 1;

	while (add == 1) {
		monitor newMonitor;
		info(newMonitor);
		pc.push_back(newMonitor);
		cout << "додати ще один монітор? y=1, n=2";
		cin >> add;
		cin.ignore();
	}
	sort(pc.begin(), pc.end(), priceN1);
	for (auto i : pc) {
		sortcomp(i);
	}
	return 0;
}