#include <iostream>
using namespace std;

int main(){
    int fib0 = 0;
    int fib1 = 1;
    int fib2 = 0;
    int tamanhoVetor = 2;
    
    int limite;

    cout << "Digite até onde será escrita a série Fibonacci: " 
    << endl;
    cin >> limite;

    cout << fib0 << endl;
    cout << fib1 << endl;
    while(fib2 <= limite){
        fib2 = fib1+fib0;

        if(fib2 > limite){
          break;
        }
        cout << fib2 << endl;
        fib0 = fib1;
        fib1 = fib2;

        tamanhoVetor++;
    }

    int *a;
    a = new int[tamanhoVetor];
    a[0] = 0;
    a[1] = 1;


    fib0 = 0;
    fib1 = 1;
    fib2 = 0;

    for(int i = 2; i <= tamanhoVetor;i++){
      fib2 = fib1+fib0;
      a[i] = fib2;

      if(fib2 > tamanhoVetor)
        break;

      fib0 = fib1;
      fib1 = fib2; 
    }

    for(int i = 0; i < tamanhoVetor; i++){
      cout << a[i] << endl;
    }
    cout << "Tamanho do vetor: " << tamanhoVetor << endl;
}
