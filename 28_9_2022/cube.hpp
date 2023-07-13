// ==============================
// Class Header File cube.hpp
// 
// NOTES:
// 1) Cubes are nice
// =============================

    #pragma once

// =============================
    #include "inclusions.hpp"
// =============================

// =============================
    class Cube {

        public:

            // Constructors
            // ======================
            Cube();
            Cube(string, string, double);
            // ======================

            // Destructor
            // ======================
            ~Cube();
            // ======================
            
            // ==========================
            // Member-Funciton Prototypes
            // ==========================
            string getCubeName();
            double getEdgeLength();
            // ==========================
            
            // ==========================
            // Mutator Member-Funciton Prototypes
            // ==========================
            void setCubeName(string);
            void setEdgeLength(double);
            // ==========================
            
            // ==========================
            // General Member-Funciton Prototypes
            // ==========================
            void print();
            double surfaceArea();
            double volume();
            // ==========================

        private:

            string objectName;
            string cubeName;
            double edgeLength;

    };
// =============================