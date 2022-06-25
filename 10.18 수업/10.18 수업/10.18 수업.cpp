//오버라이딩(함수 재정의)
//상위 클래스가 가지고 있는 메서드를 하위 클래스가 재정의해서 사용

#include<iostream>
using namespace std;

class Base {
public:
	void fun() const {
		display();
	}
	virtual void display() const {
		cout << "base" << endl;
	}
};

class Dr :public Base {
public:
	virtual void display() const {          //명시적으로 virtual 써주는 것이 좋다. 안 써도 상관 없음
		cout << "derived" << endl;
	}
};

int main() {
	Base* base = new Dr;
	base->display();
	base->fun();

	return 0;
}

//virtual function(final)
//final이 있는 줄까지만 오버라이딩 허용 그 밑에 줄부터는 허용하지 않겠다는 이미

//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	void fun() const {
//		display();
//	}
//	virtual void display() const {
//		cout << "base" << endl;
//	}
//};
//
//class Dr :public Base {
//public:
//	virtual void display() const; /* final;*/
//};
//
//void Dr::display() const { cout << "B" << endl; }          //friend, static, virtual 같은 키워드는 선언부에만 쓰고 정의부에서 쓰면 안된다.
//
//class B :public Dr {
//public:
//	virtual void display() const { cout << "c" << endl; } //final이 있으면 사용 불가
//};
//
//
//
//int main() {
//	Base* base = new Dr;
//	base->display();
//
//	Dr* b = new B;
//
//	b->display();
//
//	base = new B;
//
//	base->display();
//
//
//
//
//
//
//	return 0;
//}


//오버로딩
//동일한 이름의 함수에 대해서 같은 이름을 가지고 있지만 정의가 2개인 함수를 만드는 것
//함수 매개변수가 달라야함

//오버라이딩
//상속받은 함수의 내용만 변경 
//함수 프로토타입이 완전히 같아야함

//오버라이드 키워드

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//public:
//	virtual void display() const {
//		cout << "base" << endl;
//	}
//};
//
//class TmpDr :public TmpBase {
//public:
//	virtual void display() const override {         //오버라이딩했다는 것을 명시적으로 보여줌
//		cout << "derived" << endl;                  //override 키워드를 붙였는데 실제로 오버라이딩한 것이 아니라면 에러가 뜬다(사용자 실수를 지적해줌)
//	}         
//};
//
//int main() {
//
//	TmpBase* base = new TmpDr;
//	base->display();
//
//	return 0;
//}

//가상 소멸자

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//public:
//	TmpBase() {
//		cout << "베이스 생성자" << endl;
//	}
//	virtual ~TmpBase() {
//		cout << "베이스 소멸자" << endl;
//	}
//};
//
//class TmpDr :public TmpBase {
//public:
//	TmpDr() {
//		cout << "파생 생성자" << endl;
//
//	}
//	virtual ~TmpDr() {
//		cout << "파생 소멸자" << endl;
//	}
//};
//
//int main() {
//
//	TmpBase* base = new TmpDr;
//	
//	delete base;    //파생 소멸자가 생성이 안된다. 
//	                //가상함수 처리가 안되어 있기 때문에 베이스 소멸자만 실행된다.
//	                //소멸자 부분에 virtual 붙이면 해결가능.
//	return 0;
//}
