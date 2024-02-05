#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PIECES 6

int countFEN(int *pieces, char *fen) {
    int white_count[NUM_PIECES] = {0};
    int black_count[NUM_PIECES] = {0};
    int i, j, len, num, count;

    len = strlen(fen);
    i = j = count = 0;

    while (i < len) {
        if (isdigit(fen[i])) {
            num = fen[i] - '0';
            i++;
        } else {
            num = 1;
        }

        switch (fen[i]) {
            case 'P':
                white_count[PAWN] += num;
                break;
            case 'N':
                white_count[KNIGHT] += num;
                break;
            case 'B':
                white_count[BISHOP] += num;
                break;
            case 'R':
                white_count[ROOK] += num;
                break;
            case 'Q':
                white_count[QUEEN] += num;
                break;
            case 'K':
                white_count[KING] += num;
                break;
            case 'p':
                black_count[PAWN] += num;
                break;
            case 'n':
                black_count[KNIGHT] += num;
                break;
            case 'b':
                black_count[BISHOP] += num;
                break;
            case 'r':
                black_count[ROOK] += num;
                break;
            default:
                i++;
                continue; // Skip this iteration and move to the next one
            case '/':
                i++;
                continue; // Skip this iteration and move to the next one
        }

        i++;
    }

    for (i = 0; i < NUM_PIECES; i++) {
        pieces[count++] = white_count[i];
        pieces[count++] = black_count[i];
    }

    return 0;
}
