/**
 * \file testa_velha.cpp
 * Copyright 2021 Nícolas
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"



TEST_CASE("Testa quando X ganha", "[single-file]") {
    SECTION("Horizontal") {
        int teste1[3][3]= {    { 1, 1, 1 },
                               { 2, 0, 0 },
                               { 0, 2, 0 }
                          };
        REQUIRE(VerificaVelha(teste1) == 1);
        int teste2[3][3]= {    { 0, 2, 0 },
                               { 1, 1, 1 },
                               { 0, 2, 0 }
                          };
        REQUIRE(VerificaVelha(teste2) == 1);
        int teste3[3][3]= {    { 0, 2, 0 },
                               { 2, 0, 0 },
                               { 1, 1, 1 }
                          };
        REQUIRE(VerificaVelha(teste3) == 1);
    }
    SECTION("Vertical") {
        int teste4[3][3]= {    { 1, 0, 2 },
                               { 1, 0, 0 },
                               { 1, 2, 0 }
                          };
        REQUIRE(VerificaVelha(teste4) == 1);
        int teste5[3][3]= {    { 0, 1, 0 },
                               { 2, 1, 2 },
                               { 0, 1, 0 }
                          };
        REQUIRE(VerificaVelha(teste5) == 1);
        int teste6[3][3]= {    { 0, 2, 1 },
                               { 2, 0, 1 },
                               { 0, 0, 1 }
                          };
        REQUIRE(VerificaVelha(teste6) == 1);
    }
    SECTION("Diagonal") {
        int teste7[3][3]= {    { 1, 0, 0 },
                               { 2, 1, 0 },
                               { 2, 0, 1 }
                          };
        REQUIRE(VerificaVelha(teste7) == 1);
        int teste8[3][3]= {    { 0, 2, 1 },
                               { 0, 1, 2 },
                               { 1, 0, 0 }
                          };
        REQUIRE(VerificaVelha(teste8) == 1);
    }
}

TEST_CASE("Testa quando O ganha", "[single-file]") {
    SECTION("Horizontal") {
        int teste9[3][3]= {    { 2, 2, 2 },
                               { 1, 0, 0 },
                               { 0, 1, 0 }
                          };
        REQUIRE(VerificaVelha(teste9) == 2);
        int teste10[3][3]= {    { 0, 1, 0 },
                                { 2, 2, 2 },
                                { 0, 1, 0 }
                           };
        REQUIRE(VerificaVelha(teste10) == 2);
        int teste11[3][3]= {    { 0, 1, 0 },
                                { 1, 0, 0 },
                                { 2, 2, 2 }
                           };
        REQUIRE(VerificaVelha(teste11) == 2);
    }
    SECTION("Vertical") {
        int teste12[3][3]= {    { 2, 0, 1 },
                                { 2, 0, 0 },
                                { 2, 1, 0 }
                           };
        REQUIRE(VerificaVelha(teste12) == 2);
        int teste13[3][3]= {    { 0, 2, 0 },
                                { 1, 2, 1 },
                                { 0, 2, 0 }
                           };
        REQUIRE(VerificaVelha(teste13) == 2);
        int teste14[3][3]= {    { 0, 1, 2 },
                                { 1, 0, 2 },
                                { 0, 0, 2 }
                           };
        REQUIRE(VerificaVelha(teste14) == 2);
    }
    SECTION("Diagonal") {
        int teste15[3][3]= {    { 2, 0, 0 },
                                { 1, 2, 0 },
                                { 1, 0, 2 }
                           };
        REQUIRE(VerificaVelha(teste15) == 2);
        int teste16[3][3]= {    { 0, 1, 2 },
                                { 0, 2, 1 },
                                { 2, 0, 0 }
                           };
        REQUIRE(VerificaVelha(teste16) == 2);
    }
}

TEST_CASE("Testa quando o jogo dá velha", "[single-file]") {
    int teste17[3][3]= {    { 2, 1, 2 },
                            { 1, 1, 2 },
                            { 2, 2, 1 }
                        };
    REQUIRE(VerificaVelha(teste17) == 0);
    int teste18[3][3]= {    { 2, 1, 2 },
                            { 1, 2, 1 },
                            { 1, 2, 1 }
                        };
    REQUIRE(VerificaVelha(teste18) == 0);
    int teste19[3][3]= {    { 2, 2, 1 },
                            { 1, 1, 2 },
                            { 2, 2, 1 }
                        };
    REQUIRE(VerificaVelha(teste19) == 0);
}
