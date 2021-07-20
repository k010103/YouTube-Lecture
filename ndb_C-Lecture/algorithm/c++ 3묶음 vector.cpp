#include <iostream> 
#include <vector>
#include <algorithm>

// �� vector<pair<string, pair<int, int> > > v; �̷� �������� �Ǿ��ִٸ� 
//    ù��°�� first, �ι�°�� second.first ����°�� second.second �������� ����� ����. 
//           pair(string)  pair(int,int)

using namespace std;

bool compare(pair<string, pair<int, int> > a,   
			 pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) { // ���� a�� b�� ������ ���� ���ٸ�
		return a.second.second < b.second.second; // < : ��������� ������, > : ��������� ������  
	} else {
		return a.second.first > b.second.first; // > : ����������, < : ����������   
	}
}

int main(void) {
	vector<pair<string, pair<int, int> > > v; // �̸�, ����, ������� 
	v.push_back(pair<string, pair<int, int> >("��", pair<int, int>(90, 20010103)));
	v.push_back(pair<string, pair<int, int> >("��", pair<int, int>(87, 20011011)));
	v.push_back(pair<string, pair<int, int> >("��", pair<int, int>(97, 20010929)));
	v.push_back(pair<string, pair<int, int> >("��", pair<int, int>(90, 20010830)));
	v.push_back(pair<string, pair<int, int> >("��", pair<int, int>(89, 20010505)));
	
	sort(v.begin(), v.end(), compare); // v.begin v�� ���۹ݺ���
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << " "; // �̸��� ��������  
	}
	return 0;
	
} 
