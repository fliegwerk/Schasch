//
// Created by Janus on 28.01.19.
//

#include "Observable.hpp"

template <class T>

void Observable<T>::notifyAll(T state) {
    for (Observer<T> observer : this->observers) {
        observer.notify(state);
    }
}

template <class T>

void Observable<T>::registerObserver(Observer<T> observer) {
    this->observers.insert(observer);
}

template <class T>

void Observable<T>::unregisterObserver(Observer<T> observer){
    this->observers.remove(observer);
}