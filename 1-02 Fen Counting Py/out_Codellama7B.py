# Iterate over the FEN string and count the number of pieces
for i in range(len(fen)):
    # If the character is uppercase, it's a white piece
    if fen[i].isupper():
        # Increment the corresponding index in the piece_count list
        piece_count[0] += 1
    # If the character is lowercase, it's a black piece
    else:
        # Increment the corresponding index in the piece_count list
        piece_count[1] += 1

# Return the final piece count for each side
return piece_count
