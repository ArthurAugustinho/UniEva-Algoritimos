#include<stdio.h>
#include<math.h>
#include<locale.h>

/* Crie uma sub-rotina que receba como parâmetro a hora de início e hora de termo de um jogo, 
ambas subdivididas em dois valores distintos: horas e minutos. A sub- rotina deve retornar a 
duração expressa em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas 
e que ele pode começar em um dia e terminar no outro.
Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

int duracao_jogo(int hora_inicio, int minuto_inicio, int hora_termino, int minuto_termino) {
    int duracao;
    
    // Cálculo da duração em minutos
    duracao = ((hora_termino - hora_inicio + 24) % 24) * 60 + (minuto_termino - minuto_inicio);
    
    return duracao;
}

// Função principal
int main() {
    int hora_inicio, minuto_inicio, hora_termino, minuto_termino, duracao;
    
    // Leitura da hora de início e da hora de término do jogo
    printf("Digite a hora de inicio do jogo (formato horas:minutos): ");
    scanf("%d:%d", &hora_inicio, &minuto_inicio);
    printf("Digite a hora de termino do jogo (formato horas:minutos): ");
    scanf("%d:%d", &hora_termino, &minuto_termino);
    
    // Verificação da duração do jogo
    duracao = duracao_jogo(hora_inicio, minuto_inicio, hora_termino, minuto_termino);
    
    // Impressão da duração do jogo em minutos
    printf("A duracao do jogo foi de %d minutos.\n", duracao);
    
    return 0;
}
