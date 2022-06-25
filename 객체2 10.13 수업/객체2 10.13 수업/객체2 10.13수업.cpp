//다형성
//동일하게 함수를 호출했는데 결과가 다르게 나오는 것


#include<iostream>
using namespace std;

class People {
private:
public:
	void sleep() { cout << "기본 7시간" << endl; }
	virtual void work() { cout << "일" << endl; }    //가상 함수 사용 부분
};

class Student: public People {
private:
public:
	void play() { cout << "게임" << endl; }
	void work() { cout << "공부" << endl; }
	void sleep() { cout << "새벽 2시" << endl; }
};

class Singer: public People {
private:
public:
	void work() { cout << "노래" << endl; }
};

class Artist : public People {
private:
public:
	void work() { cout << "미술" << endl; }
};

int main() {
	Artist a;
	People* art{&a};
	art->work();
	People* inha = new Student;        
	//upcasting: 베이스 포인터에 파생 객체를 연결하는 것, 상속 관계일 떄 사용

	/*inha->play();*/
	//함수 호출 할 때 베이스 클래스와 다른 이름으로 선언된 파생 클래스 멤버는 사용 불가능

	inha->sleep();
	//베이스 클래스의 멤버 함수는 자유롭게 사용 가능
	//inha가 베이스 포인터 타입의 변수(handle이라고 한다.)이기 때문에

	People* sing = new Singer;

	//Singer* iu = new People;     파생 포인터에 베이스 객체를 연결하는 경우 오류 발생

	inha->work();      //베이스 클래스에 동일한 이름으로 선언된 함수가 가상함수일 때 파생 클래스의 함수 사용 가능 

	//반복으로 사용하는 경우
	
	People* arr[2];
	arr[0] = new Student;
	arr[1] = new Singer;
	
	for (People* ptr : arr) {      //range 기반 for문                                                 
		                           //arr 인자의 값이 반복문이 실행됨에 따라 ptr에 순서대로 부여됨
		                           //arr이 People* 타입이므로 ptr도 똑같은 타입으로 선언
		ptr->work();              
	}                              
	

	delete inha;
	delete sing;
	delete[] arr;
	return 0;
}