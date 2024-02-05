def countFEN(fen):
  piece_count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
  piece_types = 'KQRBNPkqrbnp'
  for char in fen:
    if char in piece_types:
      piece_count[piece_types.index(char)] += 1
  return piece_count
