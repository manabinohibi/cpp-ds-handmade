#pragma once
#include <cstddef>
#include <vector>

template <typename T>
class SampleVector {
   public:
    void push_back(const T& value) {
        data_.push_back(value);
    }
    T& at(size_t index) {
        return data_.at(index);
    }
    size_t size() const {
        return data_.size();
    }

   private:
    std::vector<T> data_;
};
