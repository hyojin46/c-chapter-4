//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "�Է��� ������ ������?";
//	int n;
//	cin >> n; //n(������ ����)�� �Է¹��� 
//	if (n <= 0) return 0;
//	int* p = new int[n]; // n���� ���� �迭 ���� �Ҵ� ����
//	if (!p) { //p�� null�̶�� �Ҵ� x
//		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
//		return 0;
//	}
//
//	for (int i = 0; i < n; i++) { 
//		cout << i + 1 << "��° ����: "; //"ù��° ����"���� ����ؾ� �Ǳ⶧���� i+1
//		cin >> p[i]; //���� �Է�
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += p[i];
//	cout << "���= " << sum / n << endl;
//
//	delete[]p; //�迭 �޸� ��ȯ
//}