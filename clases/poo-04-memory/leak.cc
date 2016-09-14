double *calc(int result_size, int max) {
	double *p = new double[max];	   // pedir memoria para "max" doubles
	double *result = new double[result_size];	
	// usar p para calcular, y guardarlo en result
	return result;
}

double *r = calc(6, 8);	// woops! Olvidamos devolver la memoria 
                            // al sistema operativo!




double* calc(int result_size, int max) {
	int* p = new double[max]; 	    // pedir memoria para "max" doubles
	double* result = new double[result_size];	
	// usar p para calcular, y guardarlo en result
	delete[ ] p;			// devolver memoria arreglo p
	return result;
}

double *r = calc(6, 8);	
// usar arreglo r
delete[ ] r;			// facil de olvidar...




void f() {
	double *p = new double[27];
	// ...
	p = new double[42];
	// ...
	delete[] p;
}
