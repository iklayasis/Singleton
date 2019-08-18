#pragma once

#include "Noncopyable.h"
/**
*Singleton design pattern; 
* only one instance is allowed.
*/
template <class T>
class Singleton : Noncopyable {
public:
    /**
     * Constructor
     */
    Singleton<T>(T* obj)
    {
        instance = obj;
    }

    static T* GetInstance() {
        return instance;
    }
private:

    /** One and only instance. */
    static T* instance;
};

/* Initialize the static member obj. */
template <class T> 
T* Singleton<T>::instance = nullptr;
