//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_BISHOP_HPP
#define SCHASCH_BISHOP_HPP


/**
 *Handling Bishops in the game of chess.
 */
class Bishop : public AbstractChesspiece, public Straightwalker {

public:
    Bishop() = default;

    ~Bishop() = default;

    std::vector<Tile*> updatePossibleMoves(Tile* position, bool forKing) override;

    std::vector<Tile*> updateCoveredPieces(Tile* position) override;

    std::optional <Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;

private:
    __int8_t directionSwitchXMod(__int8_t direction);

    __int8_t directionSwitchYMod(__int8_t direction);
};


#endif //SCHASCH_BISHOP_HPP
