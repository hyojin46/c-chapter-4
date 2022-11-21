//#include <iostream> //예제4-10
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	~Circle() {} //소멸자
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }// 면적을 구하는 함수
//};
//
//Circle::Circle() {
//	radius = 1;
//}
//
//int main() {
//	cout << "생성하고자 하는 원의 개수?";
//	int n, radius;
//	cin >> n; 
//
//	Circle* pArray = new Circle[n]; // n개의 Circle 배열 생성
//	for (int i = 0; i < n; i++) {
//		cout << "원" << i + 1 << ":";
//		cin >> radius;
//		pArray[i].setRadius(radius); // 각 Circle 객체를 radius로 초기화 
//	}
//
//	int count = 0; // 카운트 변수
//	Circle* p = pArray; //포인터 값에 pArray배열을 입력
//	for (int i = 0; i < n; i++) {
//		cout << p->getArea() << ' ';
//		if (p->getArea() >= 100 && p->getArea() <= 200)
//			count++;
//		p++;
//	}
//
//	cout << endl << "면적이 100에서 200사이인 원의 개수는 " << count << endl;
//
//	delete[]pArray;
//}
