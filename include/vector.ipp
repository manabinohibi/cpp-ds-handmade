#pragma once

#include <algorithm>

namespace manabu::handmade {

template <typename T>
Vector<T>::Vector() : data_(nullptr), size_(0), capacity_(0) {}

template <typename T>
Vector<T>::~Vector() {
    delete[] data_;
}

template <typename T>
void Vector<T>::PushBack(const T& value) {
    if (size_ < capacity_) {
        data_[size_] = value;
    } else {
        const size_t new_capacity = std::max(size_t{2}, capacity_ * 2);
        T* new_data = new T[new_capacity];
        for (size_t i = 0; i < size_; ++i) {
            new_data[i] = std::move(data_[i]);
        }
        delete[] data_;
        data_ = new_data;
        capacity_ = new_capacity;
    }
    ++size_;
}

template <typename T>
size_t Vector<T>::size() const {
    return size_;
}

template <typename T>
size_t Vector<T>::capacity() const {
    return capacity_;
}

}  // namespace manabu::handmade
