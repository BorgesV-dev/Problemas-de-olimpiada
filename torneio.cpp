#include <bits/stdc++.h>

using namespace std;

void loop(int i, int n, int vitorias)
{
    if (i>=n) 
    {
        if ((vitorias>=5)) cout << "1" << endl;
        else if ((vitorias>=3) && (vitorias<=4)) cout << "2" << endl; 
        else if ((vitorias>=1) && (vitorias<=2)) cout << "3" << endl; 
        else cout << "-1" << endl;
        return; 
    }
    char resultado_jogos; // variavel irá armanezar se o aluno ganhou ou perdeu
    
    cin >> resultado_jogos;

    if (resultado_jogos=='V') vitorias++;
    loop(i+1, n, vitorias);
}

int main()
{
    loop(0, 6, 0);
    return 0;
}