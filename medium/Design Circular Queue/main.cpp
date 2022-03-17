#include <vector>

using namespace std;

class MyCircularQueue {
    vector<int> queue;
    int head = -1, tail = -1;
    int size{0};

    int incrementIt(int it) {
        return (it + 1) % size;
    }
public:
    MyCircularQueue(int k) {
        queue.resize(k);
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()) {
            head = 0;
        }

        tail = incrementIt(tail);
        queue[tail] = value;
        
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(head == tail) {
            head = -1, tail = -1;
            return true;
        }
        head = incrementIt(head);
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return queue[head];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return queue[tail];
    }
    
    bool isEmpty() {
        return head == -1;
    }
    
    bool isFull() {
        return incrementIt(tail) == head;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

/*
    MyCircularQueue(3): queue[0, 0, 0]

    enQueue(1) ->
        queue[1, 0, 0]
        tail = 1
    enQueue(2) ->
        queue[1, 2, 0]
        tail = 2
    enqueue(3) ->
        queue[1, 2, 3]
        return false;
*/

/*
int main() {
    MyCircularQueue myCircularQueue = MyCircularQueue(3);
    myCircularQueue.enQueue(1); // return True
    myCircularQueue.enQueue(2); // return True
    myCircularQueue.enQueue(3); // return True
    myCircularQueue.enQueue(4); // return False
    myCircularQueue.Rear();     // return 3
    myCircularQueue.isFull();   // return True
    myCircularQueue.deQueue();  // return True
    myCircularQueue.enQueue(4); // return True
    myCircularQueue.Rear();     // return 4
}*/