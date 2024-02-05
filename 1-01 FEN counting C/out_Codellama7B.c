#include <string.h>

int countFEN(int *pieces, char *fen) {
    int i, j, k, l, m, n;
    char c;

    // Initialize the pieces array to 0
    for (i = 0; i < 16; i++) {
        pieces[i] = 0;
    }

    // Iterate over the FEN string
    for (i = 0; i < strlen(fen); i++) {
        c = fen[i];

        // Check if the current character is a piece
        if (c == 'K' || c == 'Q' || c == 'R' || c == 'B' || c == 'N' || c == 'P') {
            // Get the piece type and color
            if (c == 'K') {
                k = 0;
            } else if (c == 'Q') {
                k = 1;
            } else if (c == 'R') {
                k = 2;
            } else if (c == 'B') {
                k = 3;
            } else if (c == 'N') {
                k = 4;
            } else if (c == 'P') {
                k = 5;
            }

            if (c == 'w') {
                l = 0;
            } else if (c == 'b') {
                l = 1;
            }

            // Increment the corresponding piece count
            pieces[k + l * 6]++;
        }
    }

    return 0;
}
