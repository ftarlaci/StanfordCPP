/*******************************************************
 * File: SinglyLinkedListPQueue.h
 *
 * A priority queue class backed by a sorted, singly-linked
 * list.
 *
 * TODO: Answer the following questions:
 * What is the best-case runtime, in big-O notation, of inserting an
 * element into this priority queue? What is the worst-case runtime?
 *
 * What is the best-case runtime, in big-O notation, of removing an element
 * from this priority queue?  What is the worst-case runtime?
 *
 * You can sort a sequence of elements by inserting them all into a priority
 * queue, then removing them one at a time. If you use this priority queue,
 * you will end up with a well-known sorting algorithm. What sorting
 * algorithm is it?
 */
#ifndef PQueue_LinkedList_Included
#define PQueue_LinkedList_Included

#include <string>

/* A class representing a priority queue backed by a sorted,
 * singly-linked list.
 * The best-case runtime, in big-O notation, of inserting an element
 * into the priority queue is 0(1) because we are using pointers to
 * do it rather than using the value. The worst-case efficiency would be O(n).
 * The best-case runtime, in big-O notation, of removing an element
 * from the priority queue is also O(1) and the worst-case is O(1) as well.
 * The algorithm for deletemin algorithm.
 */
class SinglyLinkedListPriorityQueue {
public:
    /**
     * Constructs a new, empty priority queue.
     */
    SinglyLinkedListPriorityQueue();

    /**
     * Deallocates all memory allocated by this priority queue.
     */
    ~SinglyLinkedListPriorityQueue();

    /**
     * Returns the number of elements stored in the priority queue.
     *
     * @return The number of elements stored in the priority queue.
     */
    int size() const;

    /**
     * Returns whether the queue is empty.
     *
     * @return Whether the queue is empty.
     */
    bool isEmpty() const;

    /**
     * Adds a new element to the priority queue.
     *
     * @param value The element to add
     */
    void enqueue(const std::string& value);

    /**
     * Returns, but does not remove, the lexicographically first string in
     * the priority queue. Equivalently, returns the next string that would
     * be removed by a call to dequeue.
     * <p>
     * If the priority queue is empty, this function will raise an error.
     *
     * @return The next string that would be dequeued.
     * @throws ErrorException If the queue is empty.
     */
    std::string peek() const;

    /**
     * Returns and removes the lexicographically first string in the
     * priority queue.
     * <p>
     * If the priority queue is empty, this function will raise an error.
     *
     * @return The lexicographically first string in the queue.
     * @throws ErrorException If the queue is empty.
     */
    std::string dequeueMin();

private:
    // TODO: Fill this in with your implementation of this class. Feel
    // free to add as many member functions, data members, structs,
    // and classes as you feel are necessary. Then, delete this comment.
    struct Cell {
        std::string value;
        Cell * next;
    };

    Cell * head;
    Cell * tail;
    int numElems = 0;
};

#endif
