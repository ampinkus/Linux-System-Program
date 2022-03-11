/*
this program prints a string using the function imprimir. The string is passed first using a char pointer and then by value
*/
#include<stdio.h>
int imprimir_p(char *frase); // prototype: imprimir takes a pointer as argument, prototype ends with ; after the )
int imprimir(char frase[50]); // prototype: imprimir takes an array as argument, prototype ends with ; after the )


int main(void) {
    char micasa[] = "Esta es mi casa"; // string to print 
    imprimir_p(micasa); // pass the array micasa to the function as a pointer. Note it is not nessesary to use [].
    imprimir(micasa); // pass the array micasa to the function. Note it is not nessesary to use [].

return 0;
}

int imprimir_p(char *frase) {// function imprimir_p argument passed as pointer, note that no ; is used here after the )
    printf("%s \n", frase);
return 0;
}

int imprimir(char frase[50]) {// function imprimir argument passed as array, note that no ; is used here after the )
    printf("%s \n", frase);
return 0;
}
