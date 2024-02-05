def countFEN(fen):
    # Define a dictionary to keep track of the counts for each piece.
    piece_counts = {
        'K': 0, 'Q': 0, 'R': 0, 'B': 0, 'N': 0, 'P': 0,  # White pieces
        'k': 0, 'q': 0, 'r': 0, 'b': 0, 'n': 0, 'p': 0  # Black pieces
    }
    
    # Iterate through the FEN string to count pieces
    for char in fen:
        if char in piece_counts:
            piece_counts[char] += 1
    
    # Arrange the counts in the specified order: King, Queen, Rook, Bishop, Knight, Pawn
    white_counts = [piece_counts['K'], piece_counts['Q'], piece_counts['R'], piece_counts['B'], piece_counts['N'], piece_counts['P']]
    black_counts = [piece_counts['k'], piece_counts['q'], piece_counts['r'], piece_counts['b'], piece_counts['n'], piece_counts['p']]
    
    # Concatenate white and black counts into one array and return it.
    return white_counts + black_counts

# Example usage:
fen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"  # Starting position
print(countFEN(fen))
