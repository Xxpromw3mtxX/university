#include <iostream>
using namespace std;

struct elem_t
{
    int data;
    elem_t *pun;
};
typedef elem_t *llist;

int head(llist l)
{
    return l->data;
}

llist tail(llist l)
{
    return l->pun;
}

llist insert_elem(llist l, elem_t *e)
{
    e->pun = l;
    return e;
}

llist create_list(int element_number)
{
    llist temp = NULL;
    for (int i = 1; i <= element_number; i++)
    {
        elem_t *e = new elem_t;
        cout << "Value of" << i << " element: ";
        cin >> e->data;
        temp = insert_elem(temp, e);
    }
    return temp;
}

void print_list(llist l)
{
    while (l != NULL)
    {
        cout << head(l) << " ";
        l = tail(l);
    }
    cout << endl;
}

llist delete_elem(llist l, int key)
{
    elem_t *temp = l;
    elem_t *prev = NULL;

    if (l != NULL && head(l) == key)
        l = tail(l);
    else
    {
        while (l != NULL && head(l) != key)
        {
            prev = l;
            l = tail(l);
        }

        prev->pun = tail(l);

        l = temp;
    }

    return l;
}

int main()
{
    llist ls;
    int n;

    cout << "Amount of element in the list: ";
    cin >> n;

    ls = create_list(n);

    print_list(ls);

    cout << "Value to remove: ";
    cin >> n;
    ls = delete_elem(ls, n);

    print_list(ls);

    return 0;
}