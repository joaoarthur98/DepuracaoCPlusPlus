/**
 * Altere e complete o programa de maneira que ele seja capaz de
 * calcular a serie de Fibonacci ate 10^19 ou 10000000000000000000.
 */

#include <iostream>

using namespace::std;

void printArray( int _A[], int _sz ){
    // Imprimir o vetor.
    cout << ">>> [ ";
    for (int i = 0;i <= _sz; i++){
    cout << _A[i] << " ";
    cout << "]\n";
  }
}

int fib( int _limit, int  *a ){
    int count = 2;
    int fib0 = 0;
    int fib1 = 1;
    int fib2 = 0;
    
    while (fib2 < _limit){ 
        fib2 = fib0 + fib1;

        if(fib2 >= _limit)
            break;

        count++;
        fib0 = fib1;
        fib1 = fib2;
    }
    cout << endl; // descarregar a lista.

    a = new int[count];
    a[0] = 0;
    a[1] = 1;

    fib0 = 0;
    fib1 = 1;
    fib2 = 0;

    cout << a[0] << endl;
    cout << a[1] << endl;
    for(int i = 2; i < count;i++){
      fib2 = fib1+fib0;
      a[i] = fib2;

      if(fib2 > count)
        break;
      cout << a[i] << endl;
      fib0 = fib1;
      fib1 = fib2; 
    }
    
    return count;
}

int main () {
    int length;
    int *a = NULL; 

    cout << ">>> Indique o limite para a serie de Fibonacci (n > 0): ";
    cin >> length;

    cout << "Série do 0 ao " << length << ":";

    a = new int[length];
    //fib(length,a);
    size_t sz = fib(length,a);

    for(int i =  0; i < sz; i++){
      cout << a[i] << " ";
    } 

    // if ( L >= 0 ) {
    //     size_t sz = fib( L, A ); // Gerar a Fibonacci em vetor.
    //     cout << ">>> The Fibonacci series up to " << L << " is: \n";
    //     // printArray( A, sz ); // Imprimir vetor na saida padrao.
    // }
    // else {
    //   cout << ">>> Sorry, only positive integers accepted. Aborting...\n";
    // }
}

