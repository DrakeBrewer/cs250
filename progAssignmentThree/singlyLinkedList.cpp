// ====================
#include "includes.hpp"
// ====================


// ====================
// Constructors
// ====================

    // ========================================
    // SinglyLinkedList() Constructor

    // ========================================
    SinglyLinkedList::SinglyLinkedList(void) {
        
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
    SinglyLinkedList::~SinglyLinkedList(void) {

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
    void SinglyLinkedList::destroyList() {
        Node* temp;

        while (first != nullptr) {
            temp = first;
            first = first->next;
            delete temp;
        }

        last = nullptr;
        cout << "List Destroyed" << endl << endl;

    }// destroyList()
    // =======================
    
    // =======================
    // getFirst(Accessor Method)
    // =======================
    Node* SinglyLinkedList::getFirst() {

        return first;

    }// public member function getFirst()
    // =======================
    
    // =======================
    // initializeList()
    // =======================
    void SinglyLinkedList::initializeList() {

        destroyList();
        cout << "List initialized." << endl << endl;

    }// initializeList()
    // =======================
    
    // =======================
    // insertFirst()
    // =======================
    void SinglyLinkedList::insertFirst(int value) {

        // ====================================
        // Object Declaration and Instantiation
        // ====================================
        Node* newNode = new Node (value, first);
        // ====================================

        first = newNode;

        if (last == nullptr) {
            last = first;
        }

        cout << value << " inserted at first element of list." << endl;

    }// insertFirst()
    // =======================
    
    // =======================
    // insertLast()
    // =======================
    void SinglyLinkedList::insertLast(int value) {

        if (this->isEmpty()) {
            this->insertFirst(value);
        } else {

        // ====================================
        // Object Pointer Declaration, including instantiation
        //  of an instance of the Node class to which 
        //  newNodePtr points.
        // ====================================
        Node* newNodePtr = new Node (value, nullptr);
        // ====================================

        last->next = newNodePtr;
        last = newNodePtr;

        }

        cout << value << " inserted at last element of list." << endl;

    }// insertLast()
    // =======================
    
    // =======================
    // insert()
    // =======================
    void SinglyLinkedList::insert(int value, int location) {

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
                while (nodeCounter < location - 1) {
                    ptr = ptr->next;
                    nodeCounter++;
                } // while

                // ================================
                // Variable and Object Declarations
                // ================================
                Node* newNode = new Node(value, ptr->next);
                // ========================================

                ptr->next = newNode;

                cout << value << " inserted at element " << location << endl << endl;
            } // else
        } // else

    }// insert()
    // =======================

    // =======================
    // isEmpty()
    // =======================
    bool SinglyLinkedList::isEmpty() {

        return (first == nullptr);

    }// isEmpty()
    // =======================
    
    // =======================
    // length()
    // =======================
    int SinglyLinkedList::length() {

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
    void SinglyLinkedList::print() {

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
    void SinglyLinkedList::reversePrint(Node* currentNode) {

        if (currentNode != nullptr) {
            reversePrint(currentNode->next);
            cout << currentNode->datum << endl;
        }

    }// reversePrint()

    // =======================
    // deleteFirst()
    // =======================
    void SinglyLinkedList::deleteFirst() {

        if (this->length() == 0) {
            cout << "The list is empty." << endl;
            cout << "==================" << endl;
            cout << endl;
        } else {
            Node* ptr = first;
            first = first->next;
            free(ptr);

            cout << "The first node was deleted." << endl;
        }

    }// deleteFirst()

    // =======================
    // deleteLast()
    // =======================
    void SinglyLinkedList::deleteLast() {

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
                
                ptr = first;
                first = nullptr;
                free(ptr);

            }
            else {
                ptr = first;
                while (ptr->next != nullptr) {
                    prev = ptr;
                    ptr = ptr->next;
                }

                prev->next = nullptr;
                free(ptr);

                cout << "The last node was deleted." << endl << endl;
            }
        }

    }// deleteLast()

    // =======================
    // Delete()
    // =======================
    void SinglyLinkedList::Delete(int location) {

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
                this ->deleteFirst();
            } else if (location == this->length() + 1) {
                this->deleteLast();
            } else {
                nodeCounter = 1;
                ptr = this->first;

                while(nodeCounter < location - 1) {
                    ptr = ptr->next;
                    nodeCounter++;
                }

                temp = ptr->next;
                ptr->next = temp->next;
                free(temp);
            }

            cout << "The node at location " << location << " was deleted." << endl << endl;
        
        }

    }// Delete()

// ===========================
// End Public Member-Functions
// ===========================

// ===========================
// Private Member-Functions
// ===========================

    // ===================
    // constructorBanner()
    // ===================
    void SinglyLinkedList::constructorBanner() {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "The singlyLinkedList constructor invoked." << endl;
        cout << "=========================================" << endl;
        cout << endl;
    } // constructorBanner()

    // ===================
    // destructorBanner()
    // ===================
    void SinglyLinkedList::destructorBanner() {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "The ~singlyLinkedList destructor invoked." << endl;
        cout << "=========================================" << endl;
        cout << endl;
    } // destructorBanner()

// ===========================
// End Private Member-Functions
// ===========================