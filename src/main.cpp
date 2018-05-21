// test.cpp

#include <iostream>
#include "aaa/aaa.h"
#include "bbb/bbb.h"
#include <foo.h>

using namespace std;

int main(void) {

	int ccc = aaa() + bbb();
	cout << "Hello World: " << ccc << " !" << endl;

	hello_world();

	return(0);
}