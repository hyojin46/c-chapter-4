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
//	Circle circleArray[2][3]; //Circle ��ü 2���� �迭 ����
//
//	circleArray[0][0].setRadius(1);
//	circleArray[0][1].setRadius(2);
//	circleArray[0][2].setRadius(3);
//	circleArray[1][0].setRadius(4);
//	circleArray[1][1].setRadius(5);
//	circleArray[1][2].setRadius(6);
//	
//	for (int i = 0; i < 2; i++) // �迭�� �� ���� ��ü�� ��� ���� , ���� �ε��� ��
//		for (int j=0; j < 3; j++) { // ���� �ε��� ��
//			cout << "Circle [" << i << "," << j << "]�� ������ ";
//			cout << circleArray[i][j].getArea() << endl;
//		}
//
//}