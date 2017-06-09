#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define DARK_SQUARES  0xAA55AA55AA55AA55ULL
#define LIGHT_SQUARES (~DARK_SQUARES)
#define FILE_H 0x0101010101010101ULL
#define FILE_G (FILE_H << 1)
#define FILE_F (FILE_H << 2)
#define FILE_E (FILE_H << 3)
#define FILE_D (FILE_H << 4)
#define FILE_C (FILE_H << 5)
#define FILE_B (FILE_H << 6)
#define FILE_A (FILE_H << 7)
#define RANK_8 0xFFULL
#define RANK_7 (RANK_8 << 8)
#define RANK_6 (RANK_8 << (8 * 2))
#define RANK_5 (RANK_8 << (8 * 3))
#define RANK_4 (RANK_8 << (8 * 4))
#define RANK_3 (RANK_8 << (8 * 5))
#define RANK_2 (RANK_8 << (8 * 6))
#define RANK_1 (RANK_8 << (8 * 7))


uint64_t bbPawnsW = RANK_2;
uint64_t bbPawnsB = RANK_7;

uint64_t bbKingW = 0x800000000000000ULL;
uint64_t bbKingB = 0x8ULL;

char* int_to_binary_str(uint64_t number) {

    char buffer[65] = "000000000000000000000000000000000000000000000000000000000000000\0";
    for (int i = 63; i >= 0; i--) {
        buffer[i] = (number & 1ull) + '0';
        number = number >> 1ull;
    }
    buffer[64] = '\0';
    //return strdup(number);
    return strdup(buffer);
}

void print_board() {
     /*
     |r|k|b|q|k|b|k|r|
     |p|p|p|p|p|p|p|p|
     | | | | | | | | |
     | | | | | | | | |
     | | | | | | | | |
     | | | | | | | | |
     |P|P|P|P|P|P|P|P|
     |R|K|B|Q|K|B|K|R|
     */
}


int main(int argc, char** argv) {

    //uintmax_t x = UINT64_MAX;
    //printf("INT_MAX: %" PRIu64 "\n", x);

    printf("rank1: %s\n", int_to_binary_str(RANK_1));
    printf("rank8: %s\n", int_to_binary_str(RANK_8));

    printf("filea: %s\n", int_to_binary_str(FILE_A));
    printf("fileh: %s\n", int_to_binary_str(FILE_H));

    printf("black pawns: %s\n", int_to_binary_str(bbPawnsB));
    printf("white pawns: %s\n", int_to_binary_str(bbPawnsW));
    printf("white king: %s\n", int_to_binary_str(bbKingW));
    printf("black king: %s\n", int_to_binary_str(bbKingB));
    /*    
    printf("Black: %" PRIu64 "\n", bbPawnsBlack);
    printf("asbin: %s\n", int_to_binary_str(bbPawnsBlack));
    printf("White: %" PRIu64 "\n", bbPawnsWhite);
    printf("asbin: %s\n", int_to_binary_str(bbPawnsWhite));
    printf("\n");  */
    return 0;
}


