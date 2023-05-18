#include "List.h"

template<typename T>
List<T>::List() : data(nullptr), size(0), capacity(0) {}

template<typename T>
List<T>::~List()
{
    delete[] data;
}

template<typename T>
int List<T>::get_count()
{
    return size;
}

template<typename T>
void List<T>::add(const T& item)
{
    if (size == capacity)
    {
        resize(capacity == 0 ? 1 : capacity * 2);
    }
    data[size] = item;
    size++;
}

template<typename T>
bool List<T>::remove(const T& item)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == item)
        {
            for (int j = i + 1; j < size; j++)
            {
                data[j - 1] = data[j];
            }
            size--;
            return true;
        }
    }
    return false;
}

template<typename T>
bool List<T>::contains(const T& item)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == item)
        {
            return true;
        }
    }
    return false;
}

template<typename T>
std::string List<T>::equals(const T& item1, const T& item2)
{
    bool result = item1 == item2;

    return result ? "True" : "False";
}

template<typename T>
void List<T>::reverse()
{
    for (int i = 0; i < size / 2; i++)
    {
        T temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
    }
}

template<typename T>
T List<T>::index_of(const T& item)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == item)
        {
            return item;
        }
    }
    // Return a default value if the item is not found
    return T();
}

template<typename T>
int List<T>::sum()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return sum;
}

template<typename T>
double List<T>::average()
{
    return sum() / size;
}

template<typename T>
void List<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i];
    }

    std::cout << std::endl;
}

template<typename T>
void List<T>::print_index(int index)
{
    std::cout << data[index] << std::endl;
}

template<typename T>
T* List<T>::print_from(int startIndex, int endIndex)
{
    T* dataIndexed = new T[endIndex - startIndex];
    for (int i = startIndex; i < endIndex; i++)
    {
        dataIndexed[i - startIndex] = data[i];
        std::cout << data[i] << " ";
    }

    std::cout << std::endl;

    return dataIndexed;
}

template<typename T>
void List<T>::clear()
{
    delete[] data;
    data = nullptr;
    size = 0;
    capacity = 0;
}

template<typename T>
void List<T>::resize(int newCapacity)
{
    T* newData = new T[newCapacity];

    for (int i = 0; i < size; i++)
    {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
    capacity = newCapacity;
}