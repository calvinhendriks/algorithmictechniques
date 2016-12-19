#include <iostream>

using namespace std;

class lklist {
        struct box {
            int key;
            struct box *next,*prev;
            box(int k, struct box *n, struct box *p) {
                key = k; next = n; prev = p;
            };
			~box() { if (next) delete next; cout << key <<"gone\n"; }
			void swapwithnext();
        };
	struct box *head, *tail;
	int size;
	void swapwithnext(struct box **bptr);

public:
	lklist() { head = tail = NULL; size = 0; }
	~lklist() { if (head) delete head; }

	void pushback(int);
	void pushfront(int);

    friend ostream &operator<<(ostream &o,const class lklist &l);
	friend void bubblesort(class lklist &list);

};

void lklist::pushback(int k) {
	tail = new box(k, NULL, tail);
	if(head == NULL)
	    head = tail;
	else
		tail->prev->next = tail;
   	size++;
}

void lklist::pushfront(int k) {
	head = new box(k, head, NULL);
	if(tail == NULL)
	    tail = head;
	else
		head->next->prev = head;
   	size++;
}

void lklist::swapwithnext(struct lklist::box **ptr) {
	//by physically rearranging pointers (insane)
	struct box *bptr = *ptr;	
	struct box *t = bptr->next;

	if (head != bptr)
		bptr->prev->next = t;
	else
		head = t;
	t->prev = bptr->prev;

	if (tail != t)
		t->next->prev = bptr;
	else
		tail = bptr;
	bptr->next = t-> next;

	t->next = bptr;
	*ptr = bptr->prev = t;
}

void lklist::box::swapwithnext() {
	//by swapping keys
	int t = key;
	key = next->key;
	next->key = t;
}

ostream &operator<<(ostream &o,const lklist &l) {
    for(struct lklist::box *ptr = l.head; ptr != NULL; ptr = ptr->next)
        o << ptr->key << '('<< (ptr->prev?ptr->prev->key:-1) <<')'<< "->";
	cout << '(' << (l.tail?l.tail->key:-1) << ')';
    return o;
}            

void bubblesort(class lklist &list) {
    bool ready;
    for(int k=0; k<list.size; k++) {
       	ready = true;
       	for(struct lklist::box *ptr = list.head; ptr->next != NULL; ptr=ptr->next)
            if(ptr->key > ptr->next->key){
                ready = false;
				//ptr->swapwithnext();
				list.swapwithnext(&ptr);
            }
	if (ready) break;
    }
}

int main () {
	cout << "hello\n";

	lklist l;
	l.pushback(4);
	l.pushback(3);
	l.pushback(21);
	l.pushback(10);

	cout << l <<endl;
	bubblesort(l);
	cout << l <<endl;

	return 0;
}
