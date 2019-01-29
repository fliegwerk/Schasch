//
// Created by Janus on 28.01.19.
//
#ifndef SCHASCH_OBSERVABLE_HPP
#define SCHASCH_OBSERVABLE_HPP


#include <vector>
#include "Observer.hpp"
/**
 * Observable Implementation of the observer pattern.
 * @tparam T The object containing updated information.
 */

template<class T>
class Observable {
private:
    std::vector<Observer<T>> observers;

public:
    Observable();
    ~Observable();
    void registerObserver(Observer <T> observer);

    void unregisterObserver(Observer <T> observer);

    void notifyAll(T state);
};


#endif //SCHASCH_OBSERVABLE_HPP
