//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; } //�Ű����� �ִ�
//	Circle(int r) { radius = r; } //�Ű����� �ִ�
//	void setRadius(int r) { radius = r; } //�Ϲ� ��� �Լ� �߰� ( �Ű����� �ִ� �迭�� ���� )
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() }; //Circle �迭 �ʱ�ȭ
//
//	for (int i; i < 3; i++) //�迭�� �� ��ü�� ��� ����, ����Լ��� ȣ���Ͽ� ���� ����
//		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
//
//}