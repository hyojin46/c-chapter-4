//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	p = new int; //int�� ���� �޸� �Ҵ�
//	if (!p) { //���� p�� null�̶�� �Ҵ� x
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//
//	*p = 5; //�Ҵ� ���� ���� ������ 5 ����
//	int n = *p; //�Ҵ� ���� ���� ������ �� �б� n=5
//	cout << "*p= " << *p << '\n';
//	cout << "n= " << n << '\n';
//
//	delete p; //�Ҵ� ���� �޸� ��ȯ
//}