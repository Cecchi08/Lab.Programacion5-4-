#include <bits/stdc++.h>

using namespace std;

void easy(){}
void medium(){}
void hard(){}

int main(){
    int dificultad;
    cout << "Bienvenido a Temple Of the Lost" << endl;
    cout << "Antes de empezar a jugar, elija la dificultad (1: Fácil, 2: Media, 3: Difícil)" << endl;
    cin >> dificultad;

    if (dificultad == 1)  
        easy();
    else if (dificultad == 2) 
        medium();
    else if (dificultad == 3) 
        hard();
    else
        cout << "Opción no válida. Elija entre 1, 2 o 3." << endl;
    
    return 0;
}

