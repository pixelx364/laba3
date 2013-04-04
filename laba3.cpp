#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
struct spisok
{
	int info;
	spisok *next;
};
class spisok1
{
	spisok *first;
	spisok *end;
public:
	spisok1()
	{
		first = NULL;
	}
    void ydalit(void)
    {
        spisok *A = first;
        while (A->next != end) 
        {
            A = A->next;
        }
        A->next = NULL; 
        delete end;
        end = A;
    }
    void dobavit(int info)
    {
        spisok *lNew = new spisok;
        lNew->next = NULL;
        lNew->info = info;
        if (first == NULL) { first = lNew; end = lNew;}
        else { 
            end->next = lNew;
            end = lNew;
        }
    }
    int polychenie(void)
    {
        return end->info;
    }
	void vivod (void)
    {
        spisok *A = first;
		cout << "\n";
        while (A)
        {
            cout<< A->info << " ";
            A = A->next;
        }
    }
};
int main()
{
	spisok1 Obj;
	Obj.dobavit(2);
	Obj.dobavit(4);
	Obj.dobavit(8);
	Obj.dobavit(3);
	Obj.vivod();
	Obj.ydalit();
	Obj.vivod();
	return 0;
}