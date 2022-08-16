#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    LinkedList list;
    LinkedList list2;

    list.push(2);
    list.push(3);
    list.push(1);

    list2.push(5);
    list2.push(4);
    list2.push(6);

    list.print_list();
    list.marge_list(list2.head);
    list.sort_list();
    list.print_list();

    printf("length = %d\n", list.length);

    return 0;
}