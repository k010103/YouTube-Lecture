#include <iostream>
#include <vector>
#include <algorithm>

// ���� ������ ����Ҷ����� pair�� ����ϴ� ���� ��������. 
//pair<dataType1,dataType2>p , 2���� ������ ����  

using namespace std; 

int main(void){ 
	vector<pair<int, string> > v; // pair<int 1�� , string 1��  
	v.push_back(pair<int, string>(90, "��")); // push_back ����Ʈ�� �������κп� ������ �ϰڴ�. 
	v.push_back(pair<int, string>(85, "��")); // vector�� ����ؼ� �ѽ����� ������ ������ �Ǿ���  
	v.push_back(pair<int, string>(82, "��"));
	v.push_back(pair<int, string>(98, "��"));
	v.push_back(pair<int, string>(79, "��"));
	
	sort(v.begin(), v.end()); // v.begin v�� ���۹ݺ���  
	
	for(int i = 0; i < v.size(); i++) { // v.size ������ ũ�⸦ �������� �Լ� 
		cout << v[i].second << " "; //cout ���  , first�� int�� 90 85, second�� string�� ���� 
	} 
}
