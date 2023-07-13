// ============
#pragma once
// ============

// ============
    class DoublyLinkedList
    {

        public:
            // ========================
            // Constriuctor Prototypes
            // ========================
            DoublyLinkedList(void);
            // ========================

            // =====================
            // Destructor Prototypes
            // =====================
            ~DoublyLinkedList(void);
            // =====================

            // ==========================
            // Member Function Prototypes
            // ==========================
            void destroyList();
            Node* getFirst();
            void initializeList();
            void insertFirst(int);
            void insertLast(int);
            void insert(int, int);
            bool isEmpty();
            int length();
            void print();
            void reversePrint(Node*);
            void deleteFirst();
            void deleteLast();
            void Delete(int);
            void sum();
            void min();
            void max();
            
        // !public
        // =======

        // =======
            private:

                // ================
                // Member-Funcitons
                // ================
                void constructorBanner();
                void destructorBanner();
                
                // ================
                // Member-Variables
                // ================
                Node* first;
                Node* last;
                // ================

            // !private
            // =========

    }; // Class Node
    // ===========================