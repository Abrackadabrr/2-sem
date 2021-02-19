#include "container.h"
#include "subvector.cpp"
#include "subforwardlist.cpp"

int main()
{
    Container* cont = new subvector;
    cont->push_back(3);
    cont->push_back(9);
    cont->clear();
    delete cont;
    cont = new subforwardlist;
    cont->push_back(3);
    cont->push_back(9);
    cont->clear();
    delete cont;
}
