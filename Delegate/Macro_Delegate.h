#pragma once

#define DECLARE_PARAMS(...) __VA_ARGS__
#define DECLARE_ARGS(...) __VA_ARGS__

//0个参数的委托
#define DELEGATE0(retType, name) \
    DECLARE_DELEGATE(retType, name, DECLARE_PARAMS(void), )

//1个参数的委托
#define DELEGATE1(retType, name, p1) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a), \
        DECLARE_ARGS(a))

//2个参数的委托
#define DELEGATE2(retType, name, p1, p2) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b), \
        DECLARE_ARGS(a, b))

//3个参数的委托
#define DELEGATE3(retType, name, p1, p2, p3) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c), \
        DECLARE_ARGS(a, b, c))

//4个参数的委托
#define DELEGATE4(retType, name, p1, p2, p3, p4) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c, p4 d), \
        DECLARE_ARGS(a, b, c, d))

//5个参数的委托
#define DELEGATE5(retType, name, p1, p2, p3, p4, p5) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c, p4 d, p5 e), \
        DECLARE_ARGS(a, b, c, d, e))

//6个参数的委托
#define DELEGATE6(retType, name, p1, p2, p3, p4, p5, p6) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c, p4 d, p5 e, p6 f), \
        DECLARE_ARGS(a, b, c, d, e, f))

//7个参数的委托
#define DELEGATE7(retType, name, p1, p2, p3, p4, p5, p6, p7) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c, p4 d, p5 e, p6 f, p7 g), \
        DECLARE_ARGS(a, b, c, d, e, f, g))

//8个参数的委托
#define DELEGATE8(retType, name, p1, p2, p3, p4, p5, p6, p7, p8) \
    DECLARE_DELEGATE( \
        retType, \
        name, \
        DECLARE_PARAMS(p1 a, p2 b, p3 c, p4 d, p5 e, p6 f, p7 g, p8 h), \
        DECLARE_ARGS(a, b, c, d, e, f, g, h))

#define DECLARE_DELEGATE(retType, name, params, args)                         \
class I##name {                                                               \
public:                                                                       \
    virtual ~I##name() { }                                                    \
    virtual retType Invoke(params) = 0;                                       \
};                                                                            \
template<typename T>                                                          \
class name : public I##name {                                                 \
public:                                                                       \
    name(T* pType, retType (T::*pFunc)(params))                               \
        : m_pType(pType), m_pFunc(pFunc) { }                                  \
    retType Invoke(params) {                                                  \
        return (m_pType->*m_pFunc)(args);                                     \
    }                                                                         \
private:                                                                      \
    T* m_pType; retType (T::*m_pFunc)(params);                                \
};                                                                            \
template<>                                                                    \
class name<void> : public I##name {                                           \
public:                                                                       \
    name(retType (*pFunc)(params))                                            \
        : m_pFunc(pFunc) { }                                                  \
    retType Invoke(params) {                                                  \
        return (*m_pFunc)(args);                                              \
    }                                                                         \
private:                                                                      \
    retType (*m_pFunc)(params);                                               \
}
