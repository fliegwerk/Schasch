//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_KNIGHT_HPP
#define SCHASCH_KNIGHT_HPP


/**
  Handling Knights in the game of chess.
 */
class Knight : public AbstractChesspiece {
public:
    Knight() =default;

    ~Knight() = default;

    std::vector<Tile*> updatePossibleMoves(Tile* position, bool forKing) override;

    std::vector<Tile*> updateCoveredPieces(Tile* position) override;

    std::optional<Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;
};


#endif //SCHASCH_KNIGHT_HPP
