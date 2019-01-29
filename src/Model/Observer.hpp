//
// Created by Janus on 28.01.19.
//

#ifndef SCHASCH_OBSERVER_HPP
#define SCHASCH_OBSERVER_HPP

/**
 * Observer part of the observer pattern.
 * @tparam T The object containing updated information.
 */
template<class T>
class Observer {
public:
    virtual void notify(T state) = 0;
};


#endif //SCHASCH_OBSERVER_HPP