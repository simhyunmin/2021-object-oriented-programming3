//���� ���
//���� ����� �������̵��ϰ� �Ǹ� 
//������ Ÿ�Կ� ���� �Լ��� ����� �� �ִ�.
//�Ϲ������� �������̽� ����� ���߻�� ���������� 
//���� ����� �ϳ��� �ǰԲ� ���踦 �Ѵ�.

//�������̽� ���
//���� ���� �Լ��� ������ Ŭ���� ���


//�������̽� Ŭ����
//���� ���� �Լ��θ� ������ Ŭ����


//#include<iostream>
//using namespace std;
//
//class A {
//public:
//	virtual void tmpA() = 0;
//};
//
//void A::tmpA() {
//	cout << "A�� ���̽� Ŭ����" << endl;
//}
//
//class B {
//public:
//	virtual void tmpB() = 0;
//};
//
//void B::tmpB() {
//	cout<< "B�� ���̽� Ŭ����" << endl;
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
//	ap->tmpB(); //���� ��� ��ü C�� upcasting �� �� A Ŭ���� B Ŭ���� �� ���������� 
//	            //�Լ��� ����� ���� ������ ���Ŀ� �´� ��� �Լ��� ��� �����ϴ�. 
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
//	explicit Device(int serial):_serial{serial}{}               //������ �տ� explicit Ű���带 ����ϸ� C����� �ʱ�ȭ(����ȯ)�� ���´�.
//	void getSerial()const { cout << _serial << endl; }          //C����� �ʱ�ȭ ���� class test �� �������� �� test t1 = 10 �� ���� �ʱ�ȭ�� �Ұ���
//	virtual void display() const = 0;                           //������ C++ ����� �ʱ�ȭ�� �����ϴ�. ex) test t1{10};
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
//�� Ŭ������ ������ �������� �����ϱ� ������ �������� ��Ӻ��� ��������� ����.


//�������̽� ����� ����ϸ� ���� ���

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

