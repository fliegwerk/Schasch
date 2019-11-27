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

    /**
     * Adds an observer to the list of notified observers when an event happens.
     * @param observer The object that's to be notfied.
     */
    void registerObserver(Observer <T> observer);

    /**
     * Removes an observer from the list of notified observers.
     * @param observer The object that's to be removed.
     */
    void unregisterObserver(Observer <T> observer);

    /**
     * Used to notify every observer on the list of observers about an event.
     * @param state The information about the event that's to be conveyed.
     */
    void notifyAll(T state);
};


#endif //SCHASCH_OBSERVABLE_HPP
