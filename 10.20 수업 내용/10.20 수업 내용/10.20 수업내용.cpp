//���� ���� �Լ�, �߻� Ŭ����

//���� ���� �Լ�
//�Լ� ���Ǹ� �������� �ʴ´�.
//�Ļ� Ŭ������ ���� �����Ѵ�.
//�Ļ� Ŭ������ �������̵� �Ǿ��� �� ���� ���� �Լ��� �������� �ʴ´ٸ� ���� �߻�

//virtual void display() const = 0; �̷������� ����

//�߻� Ŭ����(abstract class)
//���� ���� �Լ��� 1�� �̻� �����ϰ��ִ� Ŭ����
//��ü�� ���� �� ����
//�������� ���� �����ڴ� �������ش�.
//�������� ���� Ŭ�����̴�.

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//
//public:
//	virtual void work()= 0;  //�����Լ� ������Ÿ�� �ڿ� =0�� ���̸� ���� ���� �Լ��� �ȴ�.
//	virtual void display() const = 0;
//};
//
//class TmpDr:public TmpBase {
//public:
//	virtual void work() {
//		cout << "�Ƴ� ����" << endl;
//	}
//	virtual void display() const {
//		cout << "�Ļ� Ŭ����" << endl;
//	}
//	
//};
//
//int main() {
//
//	//TmpBase* base = new TmpBase;      �߻�Ŭ������ ��ü�� ���� �� ����.
//
//	TmpBase* base = new TmpDr;
//
//	base->display();
//	base->work();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//
//public:
//	virtual void display() const = 0;
//	
//};
//
//void TmpBase::display() const {          //���� ���� �Լ� �⺻ ���Ǹ� ������ �� �ִ�.
//	cout << "base" << endl;              //��������� �����ϴ� ������� �׷��ٰ��ؼ� �߻� ��ü�� ������ ��ü�� �Ǵ� ���� �ƴϴ�.
//	                                     //�� ��ü�� ������ ���� �� ���� �����̴�. 
//}
//
//class TmpDr:public TmpBase {
//public:
//	virtual void display() const {
//		cout << "�Ļ� Ŭ����" << endl;
//	}
//	
//	
//};
//
//
//int main() {
//
//	//TmpBase* base = new TmpBase;     
//	//���� ���� �Լ� ���Ǻΰ� �ִ� �� ó�� ������ ��������θ� ������ �� ������
//	//�߻�Ŭ������ ��ü�� ���� �� ����.
//
//	TmpBase* base = new TmpDr;
//
//	base->display();
//	base->TmpBase::display();   //���� ���� �Լ��� �⺻ ���Ǹ� ����ϰ� ���� ��
//	
//
//	return 0;
//}

//downcasting
//���̽� Ŭ���� Ÿ���� �����͸� �Ļ� Ŭ���� Ÿ���� �����ͷ� ���ߴ� �� 
//upcasting�� �ؼ� ����� �� �Ļ� Ŭ������ ��� �Լ��� ����� ���� ���� �� downcasting�� ���� �Ļ� Ŭ������ ���缭 ���
//������ ���α׷��� ���� �ܰ迡�� �� ��ȯ �õ��� �Ѵ�.
//upcasting �� ���¿����� downcasting �� �� �ִ�. 

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//public:
//	
//	void display() { cout << "base" << endl; }
//	virtual ~TmpBase() {};
//};
//
//class TmpDr : public TmpBase {
//public:
//	void work() { cout << "����" << endl; }
//	void display() { cout << "derived" << endl; }
//};
//
//int main() {
//
//	TmpBase* base = new TmpDr;   //upcasting
//	base->display();
//	/*base->work();*/   //������ ����
//	dynamic_cast<TmpDr*>(base)->display();  //downcasting  
//	//upcasting �� ��쿡�� downcasting ��� �����ϴ�. 
//
//	dynamic_cast<TmpDr*>(base)->work();
//
//	return 0;
//}



