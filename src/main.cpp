//
//  main.cpp
//  DeltaPL
//

#include <iostream>
#include <cstdio>
#include "parser.h"

#define INPUT_FILE "test.dt"

using namespace std;


int Parser_parse(delta::parser::Parser_Context* context);

int main (int argc, const char * argv[])
{

	cout << "Hello, World!\n";


	delta::parser::Parser_Context context;

	if(!Parser_parse(&context))
	{
		cout << context.result + 1 << endl;
	}
	
//	FILE * f = fopen(INPUT_FILE, "r");
	
//	lexer(f);
	
    return 0;
}

