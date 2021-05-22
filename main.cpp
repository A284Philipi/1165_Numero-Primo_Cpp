#include <iostream>

using namespace std;

int main()
{
    int cont = 0, casos, numero, i = 2, def = 0;
    cin >> casos;
    while (cont < casos){
        cin >> numero;
        if (numero <= 3){
            cout << numero << " eh primo" <<endl;
        }else{
            while (i < numero){
                if (numero % i == 0){
                    def = 1;
                }else{

                }
                i++;
            }
            if (def == 1){
                cout << numero << " nao eh primo" <<endl;
            }else{
                cout << numero << " eh primo" <<endl;
            }
            def = 0;
            i = 2;
        }
        cont++;
    }
    return 0;
}
