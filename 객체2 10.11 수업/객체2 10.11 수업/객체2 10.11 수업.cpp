//���(inheritance)

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//private:
//	int a;
//public:
//
//	/*TmpBase() : a{ 0 } {
//		cout << "���̽� Ŭ���� �⺻ ������ ȣ��" << endl;
//	}*/
//
//	TmpBase(int a){          //���� ���̽� Ŭ������ �ٸ� �����ڰ� ��������� �����Ǿ� �ְ� �⺻ �����ڰ� ���� �� 
//		                     //�Ļ� Ŭ�������� �Ͻ������� ���̽� Ŭ������ �⺻ �����ڸ� ȣ�� ���Ѵ�.           (���� �߻�)                                                                
//		this->a = a;
//
//		cout << a << "���̽� Ŭ���� ������ ȣ��" << endl;
//	}
//
//	~TmpBase() {
//		cout << a << "���̽� Ŭ���� �Ҹ��� ȣ��" << endl;
//	}
//};
//
//class TmpDr:public TmpBase {
//private:
//	int a;
//public:
//	TmpDr(int a) {                   //���̽� Ŭ������ ������, ��� �ʱ�ȭ ����Ʈ���� ȣ��
//								       //���̽� Ŭ������ �⺻ �����ڰ� ���� �� �Ļ�Ŭ���� �κп��� ��������� ȣ�� ���� ��쿡 �⺻ �����ڰ� �Ͻ������� ȣ��ȴ�.
//									   //��, ���̽� Ŭ������ �⺻ �����ڰ� ���� �� �Ļ�Ŭ���� �κп��� ������ �߻� 
//		                               //��� �ʱ�ȭ ����Ʈ�� body �κк��� ���� ����Ǳ� ������ ���̽� Ŭ������ �����ڰ� ȣ��ǰ� ���� 
//		                               //�Ļ� Ŭ������ �����ڰ� ȣ��ȴ�.
//									  
//
//
//		this->a = a;              
//		cout << a << "�Ļ� Ŭ���� ������ ȣ��" << endl;
//
//	}
//	~TmpDr() {
//		cout << a << "�Ļ� Ŭ���� �Ҹ��� ȣ��" << endl;
//	}
//};
//
//int main() {
//	TmpDr a(1);
//
//	return 0;
//}

//��� ���迡�� ���̽� Ŭ������ ������ ����� 
//�Ļ� Ŭ�������� ��� �Ұ��� 
//���� ���̽� Ŭ�������� protected�� ����� �������
//��� ���迡�� public
//main �� �ܺο����� private���� ���̰� �� �� �ִ�. 
// protected �����ؼ� ����ϸ� �� ����(���� �� ��� x)
// 
//#include<iostream>
//using namespace std;
//
//class TmpBase {
//protected:
//	int _a{ 1 };
//public:
//	explicit TmpBase(int a): _a{a}{}
//};
//
//class TmpDr :public TmpBase {
//private:
//	int _b;
//public:
//	explicit TmpDr(int a, int b): TmpBase{a}, _b{b} {}
//	int getA() const { return _a; }                      //_a�� private���� ����� ��쿡�� �Ļ� Ŭ�������� ȣ�� �Ұ��� 
//	int getB() const { return _b; }
//};
//int main() {
//	TmpDr d{ 2, 12 };
//	cout << d.getA() << endl;
//	cout << d.getB() << endl;
//	cout << d._a << endl; //private�̹Ƿ� Ŭ���� �ܺο��� ���� ȣ�� �Ұ���
//
//	return 0;
//}

//protected ����� 
//����
//������ ������ �߱��� �� ���
//���������� ���� ������ �� �ִ�.
//set get �Լ��� overhead�� ���´�.

//����
//������ üũ �Ұ���
//���� �������� ��������.(���̽� Ŭ���� ���̴� �Ļ� Ŭ������ ���������� �۵��� �� ���� ��찡 ���� �� �־


//�Ϲ������� ����ϴ� ���̽� Ŭ������ ������ ��� ���ٹ� 

//#include<iostream>
//
//class TmpBase {
//private:
//	int _a{ 1 };
//public:
//	explicit TmpBase(int a) : _a{a}{}
//	int getA()const { return _a; }
//};
//class TmpDr :public TmpBase {
//private:
//	int _b;
//public:
//	explicit TmpDr(int a, int b):TmpBase(a), _b{b}{}
//	int getB()const { return _b; }
//};
// 
//using namespace std;
//
//int main() {
//	TmpDr d{ 2, 12 };
//	cout << d.getA() << endl;      //���̽� Ŭ������ ��� �Լ��� ȣ���ؼ� ���������� ��� ����
//	cout << d.getB() << endl;    
//
//	return 0;
//}


//���� ������
//ex)
//class Tmp {
//public:
//	Tmp(int a) {
//		a  (���� �ֱٿ� ������ a�� ���δ�. ��, Tmp(int a) �κп� a�� ���δ�. )
//	}
//private:
//	int a;
//};

//���̽� Ŭ����, �Ļ� Ŭ������ ���� �̸��� ��� �Լ��� ���� �� ó����

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//private:
//int _a{ 1 };
//
//public:
//	explicit TmpBase(int a): _a{a} {}
//	void display()const { cout << _a << endl; }
//};
//
//class TmpDr :public TmpBase {
//private:
//int _b;
//
//public:
//	explicit TmpDr(int a, int b): TmpBase{a}, _b{b}{}
//	void display() const { cout << _b << endl; }
//};
//
//
//int main() {
//	TmpDr d{ 2, 12 };
//	d.display();     //�Ļ�Ŭ������ display�� ����ȴ�
//	d.TmpBase::display(); //������ �����ڸ� �̿��ؼ� ���̽� Ŭ������ display ����
//
//	return 0;
//}

//inheritance / composition 
//"is-a" relationship �� ��
//inheritance(���) ����� �� ����
//ex) Car is a vehicle

//"has-a" relationship �� ��
//composition(����) ����� �� ����.
//ex) Car has a steering wheel



