#include <iostream>
using namespace std;

int main() {
    int id;
    cout << "Diga a idade: ";
    cin >> id;

    if (id >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade." << endl;
    }

    cout << "Contagem regressiva:" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
    cout << "Fim." << endl;

    int num, soma = 0;
    cout << "diga algum número (use 0 para encerrar):" << endl;
    do {
        cin >> num;
        soma += num;
    } while (num != 0);
    cout << "A soma é: " << soma << endl;

    int n;
    cout << "Diga um número e será retornada sua tabuada: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    int p = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> num;
        if (num > 0) p++;
    }
    cout << "Quantidade de números positivos: " << p << endl;

    float nota, soma_notas = 0;
    int contador = 0;
    while (true) {
        cin >> nota;
        if (nota < 0) break;
        soma_notas += nota;
        contador++;
    }
    if (contador > 0) {
        cout << "A média das notas válidas é: " << somaNotas / contador << endl;
    } else {
        cout << "Nenhuma nota válida foi digitada." << endl;
    }

    cout << "Números pares de 1 - 50:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    cout << endl;

    srand(time(0));
    int num_Secret = rand() % 10 + 1, tentativa;
    cout << "Tente adivinhar o número secreto entre 1 e 10!" << endl;
    while (true) {
        cout << "Digite seu palpite: ";
        cin >> tentativa;
        if (tentativa == num_Secret) {
            cout << "Parabéns!Acertou" << endl;
            break;
        } else if (tentativa < num_Secret) {
            cout << "O número secreto é maior que " << tentativa << "." << endl;
        } else {
            cout << "O número secreto é menor que " << tentativa << "." << endl;
        }
    }

    int somaI= 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) somaI += i;
    }
    cout << "A soma de todos os números ímpares entre 1 e 100 é: " << somaIm<< endl;

    srand(time(0));
    num_Secret = rand() % 10 + 1;
    do {
        cout << "Digite seu palpite: ";
        cin >> tentativa;
        if (tentativa > num_Secret) {
            cout << "O numero secreto eh menor!" << endl;
        } else if (tentativa < num_Secret) {
            cout << "O numero secreto eh maior!" << endl;
        } else {
            cout << "PARABÉNS! Voce acertou!" << endl;
        }
    } while (tentativa != num_Secret);

    return 0;
}
