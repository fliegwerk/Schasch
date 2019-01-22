//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_CHESSPIECE_HPP
#define SCHASCH_CHESSPIECE_HPP
/**
 * Interface used for every of the six Chesspieces.
 */
class Chesspiece
{
public:
    virtual ~Chesspiece() {}
    virtual void OverrideMe() = 0;
};

class Parent
{
public:
    virtual ~Parent();
};
#endif //SCHASCH_CHESSPIECE_HPP
