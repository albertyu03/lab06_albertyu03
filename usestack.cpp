// usestack.cpp - for CS 24 lab practice using stacks
// Albert Yu (3/2/2022)

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
