#ifndef STIVA_H_INCLUDED
#define STIVA_H_INCLUDED
#include <list>

template <class T>
class St {
    std::list<T> s ;
  public:
    bool isEmpty();
    void push(const T&);
    T& top();
    void pop();
};

template<class T>
bool St<T>::isEmpty(){
    if( s.size() == 0)
        return true;
    return false;
}

template<class T>
void St<T>::push(const T &item){
    s.push_back(item);
}

template<class T>
T& St<T>::top(){
    return s.back();
}

template<class T>
void St<T>::pop(){
    if(!isEmpty()){
        s.pop_back();
    }
}

#endif // STIVA_H_INCLUDED
