// ===========================
    #include "inclusions.hpp"
// ===========================



// function prototypes
// ===========================
    void welcomeBanner();
// ===========================

// ===========================
    int main() 
    {
        Cube cubeA;
        Cube cubeB("cubeB", "cubeB", 2.0);

        double edgeLength;

        cout << "Enter the edge length for " << cubeB.getCubeName() << endl;
        edgeLength = cubeB.getEdgeLength();
        cubeB.setEdgeLength(edgeLength);

        cout << "cubeB volume = " << cubeB.volume() << "Cubic ft." << endl;

        cubeA.print();
        cubeB.print();

        welcomeBanner();
    }
// ===========================

// ===========================
    void welcomeBanner() 
    {
        cout << "==============================================="
        << endl;
        cout << "AAD-Project-Week2-Thursday execution commencing."
        << endl;
        cout << "==============================================="
        << endl << endl;
    }
// ===========================