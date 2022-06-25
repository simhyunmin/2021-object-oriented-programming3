//다중 상속
//다중 상속을 오버라이딩하게 되면 
//포인터 타입에 따른 함수만 사용할 수 있다.
//일반적으로 인터페이스 상속은 다중상속 가능하지만 
//구현 상속은 하나만 되게끔 설계를 한다.

//인터페이스 상속
//순수 가상 함수로 구성된 클래스 상속


//인터페이스 클래스
//순수 가상 함수로만 구성된 클래스


//#include<iostream>
//using namespace std;
//
//class A {
//public:
//	virtual void tmpA() = 0;
//};
//
//void A::tmpA() {
//	cout << "A의 베이스 클래스" << endl;
//}
//
//class B {
//public:
//	virtual void tmpB() = 0;
//};
//
//void B::tmpB() {
//	cout<< "B의 베이스 클래스" << endl;
//}
//
//class C: public A, public B {
//public:
//	virtual void tmpA() override {
//		cout << "A" << endl;
//	}
//	virtual void tmpB() override {
//		cout << "B" << endl;
//	}
//};
//
//int main() {
//	C c;
//	c.tmpA();
//	c.tmpB();
//
//	A* ap = &c;
//	ap->tmpA();
//	ap->tmpB(); //다중 상속 객체 C를 upcasting 할 때 A 클래스 B 클래스 다 가능하지만 
//	            //함수를 사용할 때는 포인터 형식에 맞는 멤버 함수만 사용 가능하다. 
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class USB {
//public:
//	virtual void readUSB() const = 0;
//};
//
//class Device {
//public:
//	explicit Device(int serial):_serial{serial}{}               //생성자 앞에 explicit 키워드를 명시하면 C기반의 초기화(형변환)을 막는다.
//	void getSerial()const { cout << _serial << endl; }          //C기반의 초기화 예시 class test 를 선언했을 때 test t1 = 10 과 같은 초기화가 불가능
//	virtual void display() const = 0;                           //하지만 C++ 기반의 초기화는 가능하다. ex) test t1{10};
//
//private:
//	int _serial{ 0 };
//};
//
//class TV : public Device, public USB {
//public:
//	explicit TV(int serial) : Device(serial){}
//	virtual void display() const override { cout << "TV" << endl; }
//	virtual void readUSB() const override { cout << "read USB of TV" << endl; }
//	
//};
//
//class Notebook :public Device, public USB {
//public:
//	explicit Notebook(int serial):Device(serial) {}
//	virtual void display() const override { cout << "Notebook" << endl; }
//	virtual void readUSB() const override { cout << "read USB of Notebook" << endl; }
//};
//
//
//
//int main() {
//	TV t{ 100 };
//	t.getSerial();
//	Notebook n{ 200 };
//	n.getSerial();
//	USB* usb = &t;
//	t.readUSB();
//	usb->readUSB();
//	usb = &n;
//	n.readUSB();
//	usb->readUSB();
//
//	return 0;
//}


//inheritance -> composition
//두 클래스가 독립된 개념으로 존재하기 때문에 의존성이 상속보다 상대적으로 낮다.


//인터페이스 상속을 사용하면 좋은 경우

#include<iostream>
using namespace std;

class Phone {
public:
	virtual void use() = 0;

};

class Galaxy : public Phone {
public:
	virtual void use() override {
		cout << "use Galaxy" << endl;
	}
};

class IPhone : public Phone {
public: 
	virtual void use() override {
		cout << "use IPhone" << endl;
	}
};

void usePhone(Phone& ref) { ref.use(); }

int main() {

	Galaxy g;
	usePhone(g);
	IPhone i;
	usePhone(i);


	return 0;
}

