/**
 * \file  velha.cpp
 * Copyright 2021 Nícolas
 */


#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha(int velha[3][3]) {
    // Definindo variáveis a cada espaço do jogo da velha, tal que:
    // [a, b, c]
    // [d, e, f]
    // [g, h, i]
    int a = velha[0][0];
    int b = velha[0][1];
    int c = velha[0][2];
    int d = velha[1][0];
    int e = velha[1][1];
    int f = velha[1][2];
    int g = velha[2][0];
    int h = velha[2][1];
    int i = velha[2][2];
    // Contadores para X e O
    int contadorX = 0;
    int contadorY = 0;
    // Verifica se todos os espaços foram preenchidos ou se há valor inválido
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            if (velha[j][k] == 1) {
                contadorX++;
            } else if (velha[j][k] == 2) {
                contadorY++;
            }
        }
    }
    // Verifica se X ganhou
    if ((a == b && b == c && a == 1) ||
        (d == e && e == f && d == 1) ||
        (g == h && h == i && g == 1) ||
        (a == d && d == g && a == 1) ||
        (b == e && e == h && b == 1) ||
        (c == f && f == i && c == 1) ||
        (a == e && e == i && a == 1) ||
        (c == e && e == g && c == 1)) {
        return 1;
    }
    // Verifica se O ganhou
    if ((a == b && b == c && a == 2) ||
        (d == e && e == f && d == 2) ||
        (g == h && h == i && g == 2) ||
        (a == d && d == g && a == 2) ||
        (b == e && e == h && b == 2) ||
        (c == f && f == i && c == 2) ||
        (a == e && e == i && a == 2) ||
        (c == e && e == g && c == 2)) {
        return 2;
    }
    // Verifica se deu velha
    if (contadorX + contadorY == 9) {
        return 0;
    } else if (contadorX + contadorY != 9) {
        return -1
    }
}
