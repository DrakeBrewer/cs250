// ============
#pragma once
// ============

// ============
    class Node
    {

        friend class DoublyLinkedList;

        public:
            // ========================
            // Constriuctor Prototypes
            // ========================
            Node(void);
            Node(int, Node*, Node*);
            // ========================

            // =====================
            // Destructor Prototypes
            // =====================
            ~Node(void);
            // =========
            
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
                // Member-Funcitons
                // ================
                int datum;
                Node* next;
                Node* prev;
                // ================

            // !private
            // =========

    }; // Class Node
    // ===========================





































