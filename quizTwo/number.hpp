// =================
#pragma once
// =================

// =================
#include "includes.hpp"
// =================

// =================
    class Number {

        public:

            // ===============
            // Constuctors
            // ===============
            Number( void );
            Number( int );
            // ===============
            
            // ===============
            // Destructor
            // ===============
            ~Number(void);
            // ===============
            
            // ===============
            // Member-Functions
            // ===============
            int Get();
            void  Set(int);
            void  Output();
            void  Add(Number, Number);
            void  Subtract(Number, Number);
            void  Multiply(Number, Number);
            void  Divide(Number, Number);
            void  DoubleMultiply(Number, Number);
            // ===============

        private:
            // ===============
            // Member-Variables
            // ===============
            int number;
            // ===============

    }; // Class Number