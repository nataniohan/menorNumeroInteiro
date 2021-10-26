
#include <iostream>
using namespace std;
int main()
{   
    int quantDivisor, valor = 0;/*declaração de variaveis*/
    
    while(quantDivisor != 20){/*condição de percorrer todos os numeros divisores*/
        quantDivisor = 0;
        valor++;
        for(int i=1; i<=20; i++){
            if(valor % i == 0){/*condição do numero ter resto zero para que seja exato*/
                quantDivisor++;
            }else{break;}/*comando break para que o laço seja quebrado*/
        }
    }
    cout<<valor;
    return 0;
}
