#include <iostream>
#include "Server.h"
using namespace std;

int main(){
    Server s = Server(1);
    cout << s.getX();
    return 1;
}