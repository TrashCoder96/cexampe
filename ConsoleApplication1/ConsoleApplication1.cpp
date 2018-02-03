// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream> 
#include <string>
struct Vector {
	Vector* next;
	std::string value;
};

int main()
{
	Vector* head = NULL;
	Vector* current_vector = NULL;
	for (int i = 0; i < 10; i++) {
		Vector* v = new Vector();
		(*v).value = "v" + std::to_string(i);
		(*v).next = NULL;
		if (current_vector == NULL) {
			current_vector = v;
			head = v;
		}
		else if ((*current_vector).next == NULL) {
			(*current_vector).next = v;
			current_vector = v;
		}
	}
	if (head != NULL) {
		Vector* vec = head;
		while (vec != NULL) {
			std::cout << (*vec).value << std::endl;
			vec = (*vec).next;
		}
	}
	system("pause");
	return 0;
}

