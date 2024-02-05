int countFEN(int *pieces, char *fen) {
    // Initialize the pieces array to all zeros
    for (int i = 0; i < 12; i++) {
        pieces[i] = 0;
    }

    // Iterate through the FEN string and count the pieces
    while (*fen != '\0') {
        switch (*fen) {
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
            default :              break;
        }
        fen++;
    }

    return 1;
}
