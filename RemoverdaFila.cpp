/**
 * @file RemoverdaFila.cpp
 * @author Yuri Oliveira (you@domain.com)
 * @brief Questão de ED
 * @version 0.1
 * @date 2023-03-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    vector<int> FilaIngresso;

    for (int i = 0; i < N; i++)
    {
        int id = 0;
        cin >> id;
        FilaIngresso.push_back(id);
    }

    int M = 0;
    cin >> M;

    for (int q = 0; q < M; q++)
    {
        int id = 0;
        cin >> id;
        for (int i = 0; i < N; i++)
        {
            if (id == FilaIngresso[i])
            {
                FilaIngresso.erase(FilaIngresso.begin()+i);                 //FilaIngresso.erase(i); pq não aceita???
            }
        }
    }
        //.erase(inicio, fim)
    for (int i = 0; i < N-M; i++)
    {
        cout << FilaIngresso[i] << " - ";
    }
}

    /**
     * Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de ingressos aumentou consideravelmente. Como as filas estão cada vez maiores, pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando assim vaga para outras pessoas. Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente, sendo assim nunca existe um espaço vago entre duas pessoas. A fila inicialmente contém N pessoas, cada uma com um identificador diferente.

    Joãozinho sabe o estado inicial dela e os identificadores em ordem das pessoas que deixaram a fila. Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila, Joãozinho deseja saber o estado final da fila.

    Entrada

    -A primeira linha contém um inteiro N representando a quantidade de pessoas inicialmente na fila.
    -A segunda linha contém N inteiros representando os identificadores das pessoas na fila. O primeiro identificador corresponde ao identificador da primeira pessoa na fila. É garantido que duas pessoas diferentes não possuem o mesmo identificador.
    -A terceira linha contém um inteiro M representando a quantidade de pessoas que deixaram a fila.
    -A quarta linha contém M inteiros representando os identificadores das pessoas que deixaram a fila, na ordem em que elas saíram. É garantido que um mesmo identificador não aparece duas vezes nessa lista.
    Saída

    Seu programa deve imprimir uma linos identificadores das pessoas que permaneceram na fila, em ordem de chegada.ha contedo N-M inteiros com

    Entrada de amostra
    >>>>>>>> 01
    4
    10 9 6 3
    1
    3
    ========
    10 9 6
     *
     */