//
// Created by Janus on 28.01.19.
//
#ifndef SCHASCH_OBSERVABLE_HPP
#define SCHASCH_OBSERVABLE_HPP


#include <vector>
#include "Observer.hpp"

template<class T>
class Observable {
private:
    std::vector<Observer<T>> observers;

public:
    Observable(const std::vector<Observer<T>> &observers);

    void registerObserver(Observer <T> observer);

    void unregisterObserver(Observer <T> observer);

    void notifyAll(T state);
};


#endif //SCHASCH_OBSERVABLE_HPP
