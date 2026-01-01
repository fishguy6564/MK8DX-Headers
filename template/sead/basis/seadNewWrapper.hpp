#pragma once

#include <cstddef>
#include <new>

#include <basis/seadNew.h>

namespace sead
{
class Heap;
}  // 

class SeadGameAllocator
{
    public:
        static void* operator new(size_t size);
        static void* operator new[](size_t size);
        static void* operator new(size_t size, const std::nothrow_t&) noexcept;
        static void* operator new[](size_t size, const std::nothrow_t&) noexcept;

        static void* operator new(size_t size, s32 alignment);
        static void* operator new[](size_t size, s32 alignment);
        static void* operator new(size_t size, s32 alignment, const std::nothrow_t&) noexcept;
        static void* operator new[](size_t size, s32 alignment, const std::nothrow_t&) noexcept;

        static void* operator new(size_t size, sead::Heap* heap, const std::nothrow_t&) noexcept;
        static void* operator new[](size_t size, sead::Heap* heap, const std::nothrow_t&) noexcept;

        static void* operator new(size_t size, sead::Heap* heap, int alignment = 4);
        static void* operator new[](size_t size, sead::Heap* heap, int alignment = 4);
        static void* operator new(size_t size, sead::Heap* heap, int alignment, const std::nothrow_t&) noexcept;
        static void* operator new[](size_t size, sead::Heap* heap, int alignment, const std::nothrow_t&) noexcept;
};

class SeadGameDeallocator
{
    public:
        void operator delete(void* ptr) noexcept;
        void operator delete[](void* ptr) noexcept;
        void operator delete(void* ptr, const std::nothrow_t&) noexcept;
        void operator delete[](void* ptr, const std::nothrow_t&) noexcept;

        void operator delete(void* ptr, s32);
        void operator delete[](void* ptr, s32);
        void operator delete(void* ptr, s32, const std::nothrow_t&) noexcept;
        void operator delete[](void* ptr, s32, const std::nothrow_t&) noexcept;

        void operator delete(void* ptr, sead::Heap*, const std::nothrow_t&) noexcept;
        void operator delete[](void* ptr, sead::Heap*, const std::nothrow_t&) noexcept;

        void operator delete(void* ptr, sead::Heap*, s32);
        void operator delete[](void* ptr, sead::Heap*, s32);
        void operator delete(void* ptr, sead::Heap*, s32, const std::nothrow_t&) noexcept;
        void operator delete[](void* ptr, sead::Heap*, s32, const std::nothrow_t&) noexcept;
};

template <typename T>
T* seadNew(size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new(size);
}

template <typename T>
void* seadNewArray(size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new[](size);
}

template <typename T>
void* seadNew(const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new(size, t);
}

template <typename T>
void* seadNewArray(const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new[](size, t);
}

template <typename T>
void* seadNew(s32 alignment, size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new(size, alignment);
}

template <typename T>
void* seadNewArray(s32 alignment, size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new[](size, alignment);
}

template <typename T>
void* seadNew(s32 alignment, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new(size, alignment, t);
}

template <typename T>
void* seadNewArray(s32 alignment, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new[](size, alignment, t);
}

template <typename T>
void* seadNew(sead::Heap* heap, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new(size, heap, t);
}

template <typename T>
void* seadNewArray(sead::Heap* heap, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new[](size, heap, t);
}

template <typename T>
void* seadNew(sead::Heap* heap, int alignment = 4, size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new(size, heap, alignment); //3.0.1 0x66B02C=_ZnwjPN4sead4HeapEi
}

template <typename T>
void* seadNewArray(sead::Heap* heap, int alignment = 4, size_t size = sizeof(T))
{
    return SeadGameAllocator::operator new[](size, heap, alignment);
}

template <typename T>
void* seadNew(sead::Heap* heap, int alignment, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new(size, heap, alignment, t);
}

template <typename T>
void* seadNewArray(sead::Heap* heap, int alignment, const std::nothrow_t& t, size_t size = sizeof(T)) noexcept
{
    return SeadGameAllocator::operator new[](size, heap, alignment, t); //3.0.1 0x66B1D4=_ZnajPN4sead4HeapEiRKSt9nothrow_t
}
