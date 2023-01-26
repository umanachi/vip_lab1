#include <iostream>
#include <fstream>
#include <string>
#include "/home/anubis/viplab1/include/name.hpp"
using namespace std;

string get_name() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    return name;
}