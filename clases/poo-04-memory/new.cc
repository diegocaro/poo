int *p = new int;	// asigna espacia para variable  int
                    // int* es un puntero a int
int *q = new int[7];	// asigna espacio para 7 ints
                        // un arreglo de 7 ints
double *pd = new double[n];	// asigna n doubles


int *a = new int [4]; 
a[0] = 5; a[1] = 7; a[2] = 42; a[3] = 31;
int *p = a;




int *p = new int;
*p = 3; 
// trabajar con p.... 
delete p; //liberar memoria de variable int

double *pd = new double[n];
pd[0] = 31; 
//... trabajar con pd
delete [] pd; //liberar memoria de arreglo double