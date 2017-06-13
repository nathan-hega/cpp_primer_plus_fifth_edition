#include "pair.h"

template <typename T1, typename T2>
Pair<T1, T2>::Pair(const Pair<T1, T2> & p)
{
    a = p.a;
    b = p.b;
}

template <typename T1, typename T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template <typename T1, typename T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}