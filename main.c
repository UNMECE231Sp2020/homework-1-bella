#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*fun_arith[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*fun_other[2])(Complex) = {magnitude, phase};
//loops to run the operators through the function handler
	int i;
	for(i=0; i<4; i++){//first function hadler
		hdlr1(fun_arith[i], a, b);
	}
	
	for(i=0; i<2; i++){//second function handler
		hdlr2(fun_other[i], a);//find magnitude and phase of Complex a
		hdlr2(fun_other[i], b);//find magnitude and phase of Complex b
	}

	return 0;
}
