#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arithametic
{
private:
    T a;
    T b;

public:
    Arithametic(T a, T b);
    T add();
    T sub();
    ~Arithametic();
};
template<class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this -> a= a;
    this -> b= b;
}

template <class T>
T Arithametic<T>::add(){
    T c;
    c=a+b;
    return c;
}

template <class T>
T Arithametic<T>::sub(){
    T c;
    c=a-b;
    return c;
}
template<class T>
Arithametic<T>::~Arithametic<T>() // For class templates you must write Arithametic<T>::~Arithametic<T>()
{
}


int main(){

    Arithametic <int> ai(10,5);
    cout << ai.add() << endl;
    
    Arithametic <float> af(10.5,2.4);
    cout << af.sub() << endl;
    return 0;
}