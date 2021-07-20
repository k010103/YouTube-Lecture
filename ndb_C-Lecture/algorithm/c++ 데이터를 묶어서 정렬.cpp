#include <iostream>
#include <algorithm>

// class�� ����ϴ� ���� �Ϲ� �繫�뿡 ����  

// <<�� ���, >>�� �Է�

using namespace std;

class student { // class�� �������� ������ �ϳ��� �������ؼ� ��� 
public:  // ��𼭳� �� �� �ִ� �Լ��� ����ڴ�.  
	string name; // string�� ���ڿ��� �ٷ�� ���� �뵵  
	int score; 
	student(string name, int score) { // ������ , Ư���� ��ü�� �ʱ�ȭ�ϱ����� �뵵  
		this ->name = name;
		this ->score = score;
	}
	// ���� ������ '������ ���� ����'
	bool operator <(student &student) { // student �ٸ��л��� ��  
		return this->score > student.score; // < : �� ������ ���ٸ� �켱������ ����  
	} 
}; 

int main(void) {
	student students[] = {
	student("��", 90),
	student("��", 93),
	student("��", 97),
	student("��", 87),
	student("��", 92)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << " ";
	}
}
