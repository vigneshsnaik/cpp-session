#include <iostream>
#include <queue>

int main() {
    // Create an empty queue
    std::queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Print the front and back elements of the queue
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;

    // Remove the front element from the queue
    q.pop();

    // Print the front and back elements of the queue again
    std::cout << "Front element after pop: " << q.front() << std::endl;
    std::cout << "Back element after pop: " << q.back() << std::endl;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    // Print the size of the queue
    std::cout << "Size of queue: " << q.size() << std::endl;

    return 0;
}
