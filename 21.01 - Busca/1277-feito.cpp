#include <iostream>

using namespace std;

int main(){
    int caso, n;
    string temp;

    cin >> caso;

    for(int i = 1; i <= caso; i++){
        cin >> n;

        string alunos[n];
        string freq[n];

        for(int j = 0; j < n; j++){
            cin >> alunos[j];
        }

        for(int j = 0; j < n; j++){
            cin >> freq[j];
        }

        temp = "";

        for(int x = 0; x < n; x++){
            /* tam tem o tamanho da chamada para o 'x' aluno da sequencia */
            double tam = freq[x].size();
            /*
                total é o total de frequencia do aluno 'x'
                cham é a porcentagem de cada dia de aula, supondo que sao 10 dias, cham = 0.1
                tam2 é uma variavel backup do tam, pois nao podemos altera-lo dentro do loop
                porem precisamos em determinado momento
             */
            double total = 0.0, cham = (1.0/tam), tam2 = tam;

            for(int y = 0; y < tam; y++){
                if(freq[x][y] == 'P'){
                    total += cham;
                } else if(freq[x][y] == 'M'){
                    /*
                       no caso 'M' entao o aluno entregou um atestado medico entao temos que descontar o dia
                       do calculo ja feito e reiniciar a contagem, porem isso nao pode ser feito no meio do loop
                       pois metade dos calculos ja podem ter sido feitos, entao as proximas chamadas sao uma tecnica
                       pra recalcular tudo feito até agora com o novo valor pra 'cham'
                    */
                    total /= cham; // variavel total é agora um backup do numero de presenças que o aluno teve
                    tam2--; //diminui o numero de aulas
                    cham = 1.0/tam2; //recalcula a nova porcentagem de cada dia
                    total *= cham; // recalcula o novo 'total' a partir da contagem dos dia * porcentagem nova
                }
            }

            if(total < 0.75){
                temp = temp + alunos[x] + " ";
            }
        }

        /* mostramos toda a string 'temp' até o penultimo caractere, ja que o ultimo é um espaço de sobra */
        cout << temp.substr(0, temp.size()-1) << endl;
    }

    return 0;
}