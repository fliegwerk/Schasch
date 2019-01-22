//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_STRAIGHTWALKER_HPP
#define SCHASCH_STRAIGHTWALKER_HPP
/**
 * Additional interface of the three chesspieces Queen, Rook and Bishop.
 */
class Straightwalker
{
public:
    virtual ~Straightwalker() {}
    virtual void OverrideMe() = 0;
};
#endif //SCHASCH_STRAIGHTWALKER_HPP
