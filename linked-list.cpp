#include "linked.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    LinkedList list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);
    list.push(6);
    // list.push(7);
    Node *node = list.find_node(3);
    if (list.detect_cycle())
        cout << "YES\n";
    else
        cout << "NO\n";
        
    list.makeCycle(3);
    if (list.detect_cycle())
        cout << "YES\n";
    else
        cout << "NO\n";

    // delete_cycle
    // list.delete_cycle();
    list.remove_cycle();

    list.print_list();
    printf("length = %d\n", list.length);
    // head->1->2->3->4->5->tail
    return 0;
}