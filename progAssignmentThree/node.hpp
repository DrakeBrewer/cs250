// ============
#pragma once
// ============

// ============
    class Node
    {

        friend class SinglyLinkedList;

        public:
            // ========================
            // Constriuctor Prototypes
            // ========================
            Node(void);
            Node(int, Node*);
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
                // ================

            // !private
            // =========

    }; // Class Node
    // ===========================





































