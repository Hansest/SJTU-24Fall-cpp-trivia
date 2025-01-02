#include <iostream>
using namespace std;

/* ÍêÉÆÄãµÄ´úÂë */
class FIFOQueue {
    int *front, *end, len;
public:
    FIFOQueue(int l = 100): len(l) {
        end = front = new int [l];
    }
    void enqueue(int elem) {
        if (end - front == len) cout << "Queue is full. Cannot enqueue." << endl;
        else *(end++) = elem;
    }
    void dequeue() {
        if (end == front) cout << "Queue is empty. Cannot dequeue." << endl;
        else front++;
    }
    bool isEmpty() const { return (end - front) == 0; }
    int frontValue() const {
        if (end == front) { cout << "Queue is empty. No front value." << endl; return -1; }
        return *front;
    }
    void display() const {
        int *tmp = front;
        while (tmp < end) {
            cout << *(tmp++) << ' ';
        }
        cout << endl;
    }
    ~FIFOQueue() {delete [] front; end = nullptr;}
};

int main()
{
    FIFOQueue queue(5);

    // Enqueue elements
    for (int i = 0; i < 6; ++i)
    {
        queue.enqueue(i);
    }

    // Display queue
    cout << "Queue after enqueue: ";
    queue.display();

    // Dequeue element
    queue.dequeue();

    // Display queue after dequeue
    cout << "Queue after dequeue: ";
    queue.display();

    // Front value
    cout << "Front value: " << queue.frontValue() << "\n";

    // Dequeue element
    for (int i = 0; i < 5; ++i)
    {
        queue.dequeue();
    }

    return 0;
}