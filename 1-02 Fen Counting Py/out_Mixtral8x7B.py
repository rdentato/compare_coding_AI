def countFEN(fen):
    # Initialize an array with zeros for each type of piece
    piece_counts = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    
    # Iterate over each character in the FEN string
    i = 0
    while i < len(fen):
        if fen[i] == "/":
            i += 1
            continue
        elif fen[i] in "PRNBQK":
            # Count the piece on this square
            piece_counts[8 - ("PRNBQK".index(fen[i]) * 2)] += 1
        elif fen[i] in "123456789":
            # Skip over the empty squares indicated by this number
            i += int(fen[i])
        i += 1
    
    # Return the counts for white pieces followed by black pieces
    return piece_counts[:5], piece_counts[5:]
