//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; } //�Ű����� �ִ�
//	Circle(int r) { radius = r; } //�Ű����� �ִ�
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	cout << donut.getArea() << endl;
//
//	Circle* p; //����Ʈ ���� ����
//	p = &donut; // ����Ʈ ������ ��ü�� �ּ� �Է�
//	cout << p->getArea() << endl; // �������ٿ����� ��� ->
//	cout << (*p).getArea() << endl; // �������ٿ����� ��� .
//
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}