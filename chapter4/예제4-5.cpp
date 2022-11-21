//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	p = new int; //int형 동적 메모리 할당
//	if (!p) { //만약 p가 null이라면 할당 x
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//
//	*p = 5; //할당 받은 정수 공간에 5 삽입
//	int n = *p; //할당 받은 정수 공강에 값 읽기 n=5
//	cout << "*p= " << *p << '\n';
//	cout << "n= " << n << '\n';
//
//	delete p; //할당 받은 메모리 반환
//}