#pragma once

#include <cstddef>    // for size_t
#include <stdexcept>  // for std::out_of_range

namespace manabu::handmade {

template <typename T>
class Vector {
   public:
    Vector();
    ~Vector();

    void PushBack(const T& value);

    T& operator[](size_t index);
    const T& operator[](size_t index) const;

    size_t size() const;
    size_t capacity() const;

   private:
    // void reallocate(size_t new_capacity);

    T* data_;
    size_t size_;
    size_t capacity_;
};

}  // namespace manabu::handmade

#include "vector.ipp"
