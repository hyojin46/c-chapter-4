//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle(); //�Ҹ���
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }// ������ ���ϴ� �Լ�
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "������ ���� radius= " << radius << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������ ���� radius= " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "�Ҹ��� ���� radius= " << radius << endl;
//}
//
//int main() {
//	int radius;
//	while (true) {
//		cout << "���� ������ �Է�(�����̸� ����)>> ";
//		cin >> radius; //������ �Է� ����
//
//		if (radius < 0) break; //������ �ԷµǸ� �����
//
//		Circle* p = new Circle(radius);
//		cout << "���� ������ " << p->getArea() << endl;
//		delete p; //delete���� ���ٸ� �޸� ���� �߻�
//	}
//}
