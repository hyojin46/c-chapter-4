//#include <iostream> //����4-10
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	~Circle() {} //�Ҹ���
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }// ������ ���ϴ� �Լ�
//};
//
//Circle::Circle() {
//	radius = 1;
//}
//
//int main() {
//	cout << "�����ϰ��� �ϴ� ���� ����?";
//	int n, radius;
//	cin >> n; 
//
//	Circle* pArray = new Circle[n]; // n���� Circle �迭 ����
//	for (int i = 0; i < n; i++) {
//		cout << "��" << i + 1 << ":";
//		cin >> radius;
//		pArray[i].setRadius(radius); // �� Circle ��ü�� radius�� �ʱ�ȭ 
//	}
//
//	int count = 0; // ī��Ʈ ����
//	Circle* p = pArray; //������ ���� pArray�迭�� �Է�
//	for (int i = 0; i < n; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//
//	cout << endl << "������ 100���� 200������ ���� ������ " << count << endl;
//
//	delete[]pArray;
//}
