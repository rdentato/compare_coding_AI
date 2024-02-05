#include <stdio.h>
#include <string.h>

void countFEN(int *pieces, char *fen) {
    // Reset the pieces array to ensure it starts from zero
    for(int i = 0; i < 12; i++) {
        pieces[i] = 0;
    }
    
    // Iterate over the FEN string to count pieces
    for(int i = 0; fen[i] != ' ' && fen[i] != '\0'; i++) {
        switch(fen[i]) {
            case 'K': pieces[0]++; break;
            case 'Q': pieces[1]++; break;
            case 'R': pieces[2]++; break;
            case 'B': pieces[3]++; break;
            case 'N': pieces[4]++; break;
            case 'P': pieces[5]++; break;
            case 'k': pieces[6]++; break;
            case 'q': pieces[7]++; break;
            case 'r': pieces[8]++; break;
            case 'b': pieces[9]++; break;
            case 'n': pieces[10]++; break;
            case 'p': pieces[11]++; break;
            default:
                // Handle numbers (empty squares) by doing nothing
                break;
        }
    }
}

int main() {
    // Example usage
    int pieces[12];
    char fen[] = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
    
    countFEN(pieces, fen);
    for(int i = 0; i < 12; i++) {
        printf("%d ", pieces[i]);
    }
    
    return 0;
}
