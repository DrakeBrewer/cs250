// ====================
#include "includes.hpp"
// ====================


// ====================
// Constructors
// ====================

    // ========================================
    // DoublyLinkedList() Constructor

    // ========================================
    DoublyLinkedList::DoublyLinkedList(void) {
        
        constructorBanner();
        // first = head //// last = tail //// next = link
        first = last = nullptr;

    } // Constructor
    // ===================

// ===================
// End Constructors
// ===================

// ===================
// Destructors
// ===================
    
    // ===================
    // 
    // 
    // 
    // 
    // ======================================
    DoublyLinkedList::~DoublyLinkedList(void) {

        destructorBanner();
        destroyList();

    } // Destructor
    // ===================

// ===================
// End Destructors
// ===================

// =======================
// Public Member-Functions
// =======================

    // =======================
    // destroyList()
    // =======================
    void DoublyLinkedList::destroyList() {
        Node* temp;

        while (first != nullptr) {
            temp = first;
            first = first->next;
            delete temp;
        }

        last = nullptr;


    }// destroyList()
    // =======================
    
    // =======================
    // getFirst(Accessor Method)
    // =======================
    Node* DoublyLinkedList::getFirst() {

        return first;

    }// public member function getFirst()
    // =======================
    
    // =======================
    // initializeList()
    // =======================
    void DoublyLinkedList::initializeList() {

        destroyList();

        cout << "List initialized" << endl;
    }// initializeList()
    // =======================
    
    // =======================
    // insertFirst()
    // =======================
    void DoublyLinkedList::insertFirst(int value) {

        // ====================================
        // Object Declaration and Instantiation
        // ====================================
        Node* newNode = new Node (value, nullptr, first);
        // ====================================

        if (first == nullptr) {
            first = newNode;
            last = newNode;
        } else {
            first->prev = newNode;
            first = newNode;
        }

        cout << value << " inserted at first element of list." << endl;


    }// insertFirst()
    // =======================
    
    // =======================
    // insertLast()
    // =======================
    void DoublyLinkedList::insertLast(int value) {

        if (this->isEmpty()) {
            this->insertFirst(value);
        } else {

        // ====================================
        // Object Pointer Declaration, including instantiation
        //  of an instance of the Node class to which 
        //  newNodePtr points.
        // ====================================
        Node* newNode = new Node (value, last, nullptr);
        // ====================================
        last->next = newNode;
        last = newNode;

        }
        cout << value << " inserted at last element of list." << endl;


    }// insertLast()
    // =======================
    
    // =======================
    // insert()
    // =======================
    void DoublyLinkedList::insert(int value, int location) {

        // ================================
        // Variable and Object Declarations
        // ================================
        int nodeCounter;
        Node* ptr;
        // ==============

        if ( (location > this->length() + 1) || (location < 1) ) {
            cout << endl;
            cout << "=================================" << endl;
            cout << "Member-function insert() invoked." << endl;
            cout << "Insertion location is invalid.   " << endl;
            cout << "insert() terminating execution.  " << endl;
            cout << "=================================" << endl;
            cout << endl;

        } else {

            if (location == 1) {
                this ->insertFirst(value);
            } else if (location == this->length() + 1) {
                this->insertLast(value);
            } else {
                nodeCounter = 1;
                ptr = this->first;
                while (nodeCounter < location-1) {
                    ptr = ptr->next;
                    nodeCounter++;
                } // while

                // ================================
                // Variable and Object Declarations
                // ================================
                Node* newNode = new Node(value, ptr, ptr->next);
                // ========================================
                ptr->next->prev = newNode;
                ptr->next = newNode;
                
            } // else
        } // else

    }// insert()
    // =======================

    // =======================
    // isEmpty()
    // =======================
    bool DoublyLinkedList::isEmpty() {

        return (first == nullptr);

    }// isEmpty()
    // =======================
    
    // =======================
    // length()
    // =======================
    int DoublyLinkedList::length() {

        // ================================
        // Variable and Object Declarations
        // ================================
        int nbNodes = 0;
        Node* ptr;
        // =======

        ptr = this->first;
        while (ptr != nullptr) {
            ptr = ptr->next;
            nbNodes++;
        }

        return nbNodes;

    }// length()
    // =======================
    
    // =======================
    // print()
    // =======================
    void DoublyLinkedList::print() {

        Node* current;

        cout << endl;
        cout << "====================================" << endl;
        cout << "The list contains the folowing data." << endl;
        cout << "====================================" << endl;
        cout << endl;

        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {

            cout << "  Beginning" << endl;

            current = first;
            while (current != nullptr) {
                cout << "     " << current->datum << endl;
                current = current->next;
            } // while

            cout << "  Ending" << endl;
            cout << "========" << endl;
            cout << endl;

        } // else

    }// print()
    // =======================

    // =======================
    // reversePrint()
    // =======================
    void DoublyLinkedList::reversePrint(Node* currentNode) {

        if (currentNode != nullptr) {
            reversePrint(currentNode->next);
            cout << currentNode->datum << endl;
        }

    }// reversePrint()

    // =======================
    // deleteFirst()
    // =======================
    void DoublyLinkedList::deleteFirst() {

        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {
            Node* ptr = first;
            first = first->next;
            free(ptr);
            cout << "First element deleted." << endl;
        }

    }// deleteFirst()

    // =======================
    // deleteLast()
    // =======================
    void DoublyLinkedList::deleteLast() {

        // ================================
        // Variable and Object Declarations
        // ================================
        Node* ptr;
        Node* prev;
        // ==============

        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } 
        else {
            if (first->next == nullptr) {
                
                deleteFirst();

            }
            else {
                ptr = first;
                while (ptr->next != nullptr) {
                    prev = ptr;
                    ptr = ptr->next;
                }

                prev->next = nullptr;
                free(ptr);

                cout << "Last element deleted." << endl;
            }
        }

    }// deleteLast()

    // =======================
    // Delete()
    // =======================
    void DoublyLinkedList::Delete(int location) {

        // ================================
        // Variable and Object Declarations
        // ================================
        int nodeCounter;
        Node* ptr;
        Node* temp;
        // ==========

        if ( (location > this->length() + 1) || (location < 1) ) {
            cout << endl;
            cout << "=================================" << endl;
            cout << "Member-function Delete() invoked." << endl;
            cout << "Deletion location is invalid.    " << endl;
            cout << "Delete() terminating execution.  " << endl;
            cout << "=================================" << endl;
            cout << endl;

        } else {

            if (location == 1) {
                this->deleteFirst();
            } else if (location == this->length()) {
                this->deleteLast();
            } else {
                nodeCounter = 1;
                ptr = this->first;

                while(nodeCounter < location - 1 ) {
                    ptr = ptr->next;
                    nodeCounter++;
                }

                temp = ptr->next;
                ptr->next = temp->next;
                temp->next->prev = ptr;
                free(temp);
            }
        
        }

    }// Delete()

    // ======
    // min()
    // ======
    void DoublyLinkedList::min() {

        // ================================
        // Variable and Object Declarations
        // ================================
        int counter = 1;
        Node* ptr = this->first;
        int min = ptr->datum;
        // ==========
        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {
            // while loop to find max value
            while (ptr != nullptr) {

                if (ptr->datum < min) {
                    min = ptr->datum;
                }
                ptr = ptr->next;

            }
            cout << "The minimum value in the linked list is: " << min << endl;

            ptr = this->first;

            cout << "The The linked list's minima appear at nodes: " << endl;
            // while loop to find each index of the min value
            while (ptr != nullptr) {

                if (ptr->datum == min) {
                    cout << counter << endl;
                }

                ptr = ptr->next;
                counter++;
            }
        }

        
    }// min()

    // ======
    // max()
    // ======
    void DoublyLinkedList::max() {

        // ================================
        // Variable and Object Declarations
        // ================================
        int counter = 1;
        Node* ptr = this->first;
        int max = ptr->datum;
        // ==========
        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {
            // while loop to find max value
            while (ptr != nullptr) {

                if (ptr->datum > max) {
                    max = ptr->datum;
                }
                ptr = ptr->next;

            }

            cout << "The maximum value in the linked list is: " << max << endl;
            
            ptr = this->first;

            cout << "The The linked list's maxima appear at nodes: " << endl;
            // while loop to find each index of the max value
            while (ptr != nullptr) {

                if (ptr->datum == max) {
                    cout << counter << endl;
                }

                ptr = ptr->next;
                counter++;
            }
        }

        
    }// max()

    // ======
    // sum()
    // ======
    void DoublyLinkedList::sum() {

        // ================================
        // Variable and Object Declarations
        // ================================
        Node* ptr = this->first;
        int sum = 0;
        // ==========
        if (this->length() == 0) {
            cout << "The list is empty so the sum is" << sum << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {
            // while loop to find max value
            while (ptr != nullptr) {

                sum = sum + ptr->datum;

                ptr = ptr->next;
            }

            cout << "The sum of all values in the linked list is: " << sum << endl;

        }
    }// sum()

// ===========================
// End Public Member-Functions
// ===========================

// ===========================
// Private Member-Functions
// ==========================

    // ===================
    // constructorBanner()
    // ===================
    void DoublyLinkedList::constructorBanner() {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "The DoublyLinkedList constructor invoked." << endl;
        cout << "=========================================" << endl;
        cout << endl;
    } // constructorBanner()

    // ===================
    // destructorBanner()
    // ===================
    void DoublyLinkedList::destructorBanner() {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "The ~DoublyLinkedList destructor invoked." << endl;
        cout << "=========================================" << endl;
        cout << endl;
    } // destructorBanner()

// ===========================
// End Private Member-Functions
// ===========================