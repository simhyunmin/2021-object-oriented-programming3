//�������̵�(�Լ� ������)
//���� Ŭ������ ������ �ִ� �޼��带 ���� Ŭ������ �������ؼ� ���

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
	virtual void display() const {          //��������� virtual ���ִ� ���� ����. �� �ᵵ ��� ����
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
//final�� �ִ� �ٱ����� �������̵� ��� �� �ؿ� �ٺ��ʹ� ������� �ʰڴٴ� �̹�

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
//void Dr::display() const { cout << "B" << endl; }          //friend, static, virtual ���� Ű����� ����ο��� ���� ���Ǻο��� ���� �ȵȴ�.
//
//class B :public Dr {
//public:
//	virtual void display() const { cout << "c" << endl; } //final�� ������ ��� �Ұ�
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


//�����ε�
//������ �̸��� �Լ��� ���ؼ� ���� �̸��� ������ ������ ���ǰ� 2���� �Լ��� ����� ��
//�Լ� �Ű������� �޶����

//�������̵�
//��ӹ��� �Լ��� ���븸 ���� 
//�Լ� ������Ÿ���� ������ ���ƾ���

//�������̵� Ű����

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
//	virtual void display() const override {         //�������̵��ߴٴ� ���� ��������� ������
//		cout << "derived" << endl;                  //override Ű���带 �ٿ��µ� ������ �������̵��� ���� �ƴ϶�� ������ ���(����� �Ǽ��� ��������)
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

//���� �Ҹ���

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//public:
//	TmpBase() {
//		cout << "���̽� ������" << endl;
//	}
//	virtual ~TmpBase() {
//		cout << "���̽� �Ҹ���" << endl;
//	}
//};
//
//class TmpDr :public TmpBase {
//public:
//	TmpDr() {
//		cout << "�Ļ� ������" << endl;
//
//	}
//	virtual ~TmpDr() {
//		cout << "�Ļ� �Ҹ���" << endl;
//	}
//};
//
//int main() {
//
//	TmpBase* base = new TmpDr;
//	
//	delete base;    //�Ļ� �Ҹ��ڰ� ������ �ȵȴ�. 
//	                //�����Լ� ó���� �ȵǾ� �ֱ� ������ ���̽� �Ҹ��ڸ� ����ȴ�.
//	                //�Ҹ��� �κп� virtual ���̸� �ذᰡ��.
//	return 0;
//}
