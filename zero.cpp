#include <bits/stdc++.h>

using namespace std;

vector<int> numeros_chefe(1, 0);

void leitura_numeros(int N)
{
    for (int i=0; i < N; i++)
    {
        int numero;
        cin >> numero; 

        if (numero != 0) 
        {
            numeros_chefe.push_back(numero);
        }
        else
        {
            numeros_chefe.erase(numeros_chefe.end()-1);
        }
    }
}

int calculo_numeros_chefe()
{
    int soma=0;

    if (numeros_chefe.size()<=1)
    {
        return 0;
    }
    else 
    {
        for (int i=1; i < numeros_chefe.size(); i++)
        {
            soma+=numeros_chefe[i];
        }
        return soma;
    }
}

int main()
{
    int N; 
    cin >> N;
    
    leitura_numeros(N);
    
    int resultado_soma = calculo_numeros_chefe();
    
    cout << resultado_soma << endl;

    return 0;
}