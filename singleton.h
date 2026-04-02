#ifndef SINGLETON_H
#define SINGLETON_H

#include <global.h>
template <typename T>//构造单例类
//单例：只能有一个例_instance，共享指针指向一个单例

class Singleton{
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;//不允许拷贝构造
    Singleton& operator = (const Singleton<T>& st) = delete;//不允许拷贝赋值
    static std::shared_ptr<T> _instance;//static变量一定要被初始化，模版类放在.h
public:
    static std::shared_ptr<T> GetInstance(){
        static std::once_flag s_flag;//多次调用只会初始化一次
        std::call_once(s_flag, [&](){
            _instance = std::shared_ptr<T>(new T);
            //为什么不用make shared()
        });

        // static Singleton _instance;
        return _instance;
    }

    void Printaddress(){
        std::cout<< _instance.get()<<std::endl;//打印单例实例的内存地址
    }

    ~Singleton(){
        std::cout<<"this is singleton destruct"<<std::endl;
    }
};

template<typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;

#endif // SINGLETON_H
