#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 first, T2 second) : first(first), second(second) {};
    T1 getfirst() const {
        return this->first;
    }
    void setfirst(T1 first){
        this->first = first;
    }

    T2 getsecond() const {
        return this->second;
    }
    void setsecond(T2 second){
        this->second = second;
    }
};