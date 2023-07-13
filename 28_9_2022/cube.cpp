// ==============================
// Class Header File cube.cpp
// 
// NOTES:
// 1) The Cube{} class allows fot the instantiation 
// of instances of this Cube{} class. That is, 
// Cube{} objects(aka class instantiations/instances) 
// can be declared using Cube{}.
// =============================


// =============================
// inclusions
// =============================
    #include "inclusions.hpp"
// =============================


// =============================
// Constructor Cube()
// 
// 1) No-parameter constructor.
// =============================
    Cube::Cube()
    {

        objectName = "";
        cubeName = "";
        edgeLength = 0.0;

    } // constructor Cube()
    
// =============================
// Constructor Cube()

// NOTES:
// 1) Parameter-based constructor
// 2) use shadowing for object names and constructor parameter
//      names
// ==========================================================
    Cube::Cube(string objectName, string cubeName, double edgeLength)
    {

        this->objectName = objectName;
        this->cubeName = cubeName;
        this->edgeLength = edgeLength;

    } // Constructor Cube()
// ========================

// =============================
// Destructor ~Cube()

// NOTES:
// 1) The "new" operator is not being used by the constructor.
//      This destructor has nothing to deallocate.
// ===============================================
    Cube::~Cube()
    {

        cout << "Destructor ~Cube() invoked";

    } // Constructor Cube()
// ========================

// ======================================
// Accessor Member-Function getCubeName()
// ======================================
    string Cube::getCubeName() 
    {

        return cubeName;
        
    } // Accessor Member-Functions getCubeName()
// =============================================

// ======================================
// Accessor Member-Function getEdgeLength()
// ======================================
    double Cube::getEdgeLength() 
    {

        return edgeLength;
        
    } // Accessor Member-Functions getEdgeLength()
// =============================================

// ======================================
// Mutator Member-Function setCubeName()
// ======================================
    void Cube::setCubeName(string cubeName) 
    {

        this->cubeName = cubeName;
        
    } // Mutator Member-Functions setCubeName()
// =============================================

// ======================================
// Mutator Member-Function setEdgeLength()
// ======================================
    void Cube::setEdgeLength(double edgeLength) 
    {

        this->edgeLength = edgeLength;
        
    } // Accessor Member-Functions setEdgeLength()
// =============================================

// ======================================
// General Member-Function print()
// ======================================
    void Cube::print() 
    {

        cout << "=======================" << endl;
        cout << "print function invoked" << endl;
        cout << "Object Name: " << objectName << endl;
        cout << "Cube Name: " << cubeName << endl;
        cout << "Cube EdgeLength: " << edgeLength << "ft." << endl;
        cout << "print function terminating" << endl;
        cout << "=======================" << endl << endl;
        
    } // General Member-Functions print()
// =============================================

// ======================================
// General Member-Function surfaceArea()
// ======================================
    double Cube::surfaceArea() 
    {

        return 6 * pow(edgeLength, 2.0);
        
    } // Gneral Member-Functions surfaceArea()
// =============================================

// ======================================
// General Member-Function volume()
// ======================================
    double Cube::volume() 
    {

        return pow(edgeLength, 3.0);
        
    } // General Member-Functions volume()
// =============================================