#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int tentativas = 6;

    char letra;
    string palavras[5] = {"banana", "computador", "teclado", "programa", "senai"};

    srand(time(0));
    int indice = rand() % 5;
    string secreta = palavras[indice];

    int tam = secreta.length();
    char descoberta[20];

    for (int i = 0; i< tam; i++) {
        descoberta[i] = '_';
    }
    descoberta[tam] = '\0';

    char letraErrada[20];
    int qtdErros = 0;

    int acertos = 0;

    cout << "=== JOGO DA FORCA ===" << endl;

    while (tentativas > 0 && acertos < tam) {
        cout << "\nPalavra: ";
        for (int i = 0; i < tam; i++) {
            if (descoberta[i] == '_') {
                cout << "_ ";
            } else {
                cout << descoberta[i];
            }
        }
        cout << endl;
        
        cout << "Tentativas restantes: " << tentativas << endl;

        cout << "Letras erradas: ";
        for (int i = 0; i < qtdErros; i++) {
            cout << letraErrada[i] << " ";
        }
        cout << endl;

        cout << "\nDigite uma letra: ";
        cin >> letra;

        bool letraAcertada = false;

        for (int i = 0; i < tam; i++) {
            if (secreta[i] == letra) {
                if (descoberta[i] == '_') {
                    descoberta[i] = letra;
                    acertos++;
                }
                letraAcertada = true;
            }
        }

        if (letraAcertada) {
            cout << "Acertou!" << endl;
        } else {
            tentativas--;
            letraErrada[qtdErros] = letra;
            qtdErros++;

            cout << "Letra incorreta!" << endl;
        }
    }
    if (acertos == tam) {
        cout << "PARABENS! VOCE GANHOU!" << endl;
    } else {
        cout << "VOCE PERDEU! A palavra era: " << secreta << endl;
    }

    return 0;
}