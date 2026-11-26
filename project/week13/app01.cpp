#include <iostream>
#include <cassert>
using namespace std;

class Pokemon {
public:
    int hp;
    Pokemon() : hp(0) { // default constructor
        cout << "Create Pokemon\n";
    };
    Pokemon(int hp) : hp(hp) { // parameter constructor
        cout << "Create Pokemon\n";
    };
};

template <typename T>
class Stack
{
private:
    T* ptr;
    int capacity;
    int size;
public:
    Stack(int capacity) : capacity(capacity), size(0)
    {
        ptr = new T[capacity];
    }
    ~Stack() {
        delete[] ptr;
        ptr = nullptr;
    }
    void push(const T& element) {
        if (size < capacity)
        {
            ptr[size] = element;
            size++;
        }
        else
        {
            cout << "Push Error(stack full)" << endl;
            assert(false);
        }
    }
    T pop() {
        if (size > 0)
        {
            T temp = ptr[size - 1];
            size--;
            return temp;
        }
        else
        {
            cout << "Pop Error(stack empty)" << endl;
            assert(false);
        }
    }
};

int main()
{
    //Stack<int> stack(10);
    Pokemon* pikachu = new Pokemon(100);
    Pokemon* mu = new Pokemon(120);
    Stack<Pokemon*> pokemons(5);
    pokemons.push(pikachu);
    pokemons.push(mu);

    delete pikachu;
    pikachu = nullptr;
    delete mu;
    mu = nullptr;

    Stack<int> stack(5);
    stack.push(15);
    stack.push(-7);
    stack.push(7);
    stack.push(8);
    cout << stack.pop() << endl;
    cout << stack.pop();
    return 0;
}