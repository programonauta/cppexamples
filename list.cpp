//
// Example of use list
//
// Week 3, lecture 3.7
//

#include <iostream>
using namespace std;

typedef struct list_element
{
    list_element(int n = 0, list_element* ptr = 0):
	data(n), next(ptr) {};
    int data;
    list_element *next;
} list_element;


class list
{
public:

    list():head(0),cursor(0) { cout << "default constructor\n"; }
//    list(list_element *h = 0, list_element *c = 0):head(h),cursor(c)
//	{ cout << "default constructor\n"; }

    list(const int *arr, int sz); // move elements from an array
    ~list(); // destructor

    void prepend(int n);  // add an element before head
    void add(int n);   // add an element at the end of the list
    int get_element() { return cursor->data;}
    void advance() { cursor = cursor->next; }
    void print();
private:
    list_element *head;
    list_element *cursor;
};

// constructor : move elements from an array
list::list(const int array[], int sz)
{
    head = cursor = 0;

    // populate the list element using add()
    for(int i = 0; i < sz; ++i) {
	add(array[i]);
    }
}

// destructor
list::~list()
{
    for(cursor = head; cursor != 0;) {
	cursor = head->next;
	delete head;
	head = cursor;
    }
}

void list::prepend(int n)
{
    // swap head with current head
    if(head) {
	head = cursor = new list_element(n, head);
    }
    // if empty list, make current element as head
    else
	head = new list_element(n, head);
}

void list::add(int n)
{
    if(head) {
	cursor = head;
	while(cursor) {
	    // end of the list
	    if(cursor->next == NULL) {
		cursor->next = new list_element(n);
		break;
	    }
	    // advance to the next element
	    else
		advance();
	}
    }
    // no head, make head with current element
    else {
	head = new list_element(n);
    }
}

void list::print()
{
    if(head)
	{
	    cursor = head;
	    while(cursor) {
		cout << get_element() << " ";
		advance();
	    }
	}
    else
	cout << "Empty list!";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    list myList(arr,5);
    myList.add(6);
    myList.prepend(0);
    myList.print();

    list a, b;

    cout << "first print\n";
    a.print();
    
    a.prepend(9); a.prepend(8);
    cout << "list a" << endl;
    a.print();

    for (int i = 0; i < 40; i++)
	b.prepend(i*i);

    cout << "lisb b" << endl;
    b.print();
    
    return 0;
}
