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
    /**
     * Called whenever the observable broadcasts an event.
     * @param state The information about the actual event.
     */
    virtual void notify(T state) = 0;
};


#endif //SCHASCH_OBSERVER_HPP
