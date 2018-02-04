// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream> 
#include <string>

class Elem {

private:
	std::string value;
	Elem* next;

public:

	void setValue(std::string value) {
		this->value = value;
	}

	std::string getValue() {
		return value;
	}

	void setNext(Elem* e) {
		next = e;
	}

	Elem* getNext() {
		return next;
	}


	Elem() {
		this->next = NULL;
		this->value = "";
	}

	~Elem() {
		this->next->~Elem();
	}

};

class MyLinkedList {

private:
	Elem* head = NULL;
public:
	void cycle() {
		Elem* e = this->head;
		while (e != NULL) {
			std::cout << e->getValue() << std::endl;
			e = e->getNext();
		}
	}

	void addElem(std::string value) {
		Elem* e = new Elem();
		e->setNext(head);
		e->setValue(value);
		this->head = e;
	}

};

int main()
{
	MyLinkedList* list = new MyLinkedList();
	for (int i = 0; i < 100; i++) {
		list->addElem("v" + std::to_string(i));
	}
	list->cycle();
	system("pause");
	return 0;
}

