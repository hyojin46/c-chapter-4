//#include <iostream> // ����4-14
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
//	getline(cin, s, '\n'); //���ڿ� �Է¹���
//
//	int sum=0;
//	int startIndex = 0;
//
//	while (true) {
//		int fIndex = s.find('+', startIndex); //'+' ���� �˻�
//		if (fIndex = -1) { // '+'�� �˻��� �� ����
//			string part = s.substr(startIndex); //part��� ��Ʈ�� ��ü�� startIndex�� ���� ��Ʈ������ ����
//			if (part == "") break; // ���� part(���� ��Ʈ�� ��ü)�� ����ִٸ� ���������� -???
//			cout << part << endl;
//			sum += stoi(part); // ���� ���� ���ڿ������� ���������� ��ȯ
//			break;
//		}
//
//		int count = fIndex - startIndex;
//		string part = s.substr(startIndex, count);
//
//		cout << part << endl;
//		sum += stoi(part);
//		startIndex = fIndex + 1;
//	}
//	cout << "���ڵ��� ���� " << sum;
//}