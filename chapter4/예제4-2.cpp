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
//	Circle circleArray[3]; //Circle ��ü �迭 ����
//
//	circleArray[0].setRadius(10); //��� 1)�迭�� �� ��ü�� ����� ����( �ε��� ������ ���� )
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i; i < 3; i++) //�迭�� �� ��ü�� ��� ����, ����Լ��� ȣ���Ͽ� ���� ����
//		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
//
//	Circle *p; //��� 2)�迭 �����͸� ����Ͽ� ����� ����
//	p = circleArray; //�迭�� &�� ������ �ʴ´� ( �迭�� �ּҰ��� �ǹ�, �迭�ǰ�=�ּҰ�)
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
//		p++; // ������ �� ����������
//	}
//}