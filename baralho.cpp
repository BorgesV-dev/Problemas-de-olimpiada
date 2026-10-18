#include <bits/stdc++.h> // Biblioteca necessária para usar std::find em vetores

using namespace std;

// BARALHOS IDEAIS

int main()
{ 
    // BARALHOS IDEAIS

    // copas 
    vector<string> C = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};
    // espadas 
    vector<string> E = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};
     // ouros 
    vector<string> U = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};
    // paus 
    vector<string> P = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};

    string baralho_user;

    vector<string> cartas_atuais;

    cin >> baralho_user; 

    int repetida_C = 0;
    int repetida_E = 0;
    int repetida_U = 0;
    int repetida_P = 0;

    for (int i=0; i < baralho_user.length(); i+=3)
    {
        string carta_atual = baralho_user.substr(i, 3);
        
        if (carta_atual[2] == 'C') // é um baralho de copas
        {
            string numero_carta = carta_atual.substr(0, 2);
            auto posicao_carta = find(C.begin(), C.end(), numero_carta);

            if (posicao_carta != C.end()) // achou a carta
            {
                C.erase(find(C.begin(), C.end(), numero_carta));
            } 
            else
            {
                repetida_C = 1;
            }
        }

        else if (carta_atual[2] == 'E') // é um baralho de ESPADAS
        {
            string numero_carta = carta_atual.substr(0, 2);
            auto posicao_carta = find(E.begin(), E.end(), numero_carta);

            if (posicao_carta != E.end()) // achou a carta
            {
                E.erase(find(E.begin(), E.end(), numero_carta));
            } 
            else
            {
                repetida_E = 1;
            }
        }

        else if (carta_atual[2] == 'U') // é um baralho de OUROS
        {
            string numero_carta = carta_atual.substr(0, 2);
            auto posicao_carta = find(U.begin(), U.end(), numero_carta);
            
            if (posicao_carta != U.end()) // achou a carta
            {
                U.erase(find(U.begin(), U.end(), numero_carta));
            } 
            else
            {
                repetida_U = 1;
            }
        }

        else if (carta_atual[2] == 'P') // é um baralho de PAUS
        {
            string numero_carta = carta_atual.substr(0, 2);
            auto posicao_carta = find(P.begin(), P.end(), numero_carta);
            
            if (posicao_carta != P.end()) // achou a carta
            {
                P.erase(find(P.begin(), P.end(), numero_carta));
            } 
            else
            {
                repetida_P = 1;
            }
        }
    }

    if (repetida_C != 1) cout << C.size() << endl;
    else cout << "erro" << endl;
    
    if (repetida_E != 1) cout << E.size() << endl;
    else cout << "erro" << endl;

    if (repetida_U != 1) cout << U.size() << endl;
    else cout << "erro" << endl;

    if (repetida_P != 1) cout << P.size() << endl;
    else cout << "erro" << endl;

    return 0;
}