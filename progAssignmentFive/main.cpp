// ===========================================================================
// main.cpp : Defines an entry point for the console for the programs directory
// ===========================================================================

// ======================
// inclusions
// ======================
#include "includes.hpp"


// ======================
// Function Prototypes
// ======================
int characterToInt(char);
void evaluate(UserStack&, char);
void extractSubexpression(string&, string&);
int findDecimalPtIndex(string);
bool goAgain(string);
bool isInteger(string);
bool isOperator(string);
void queryUser(string&);
double stringToDouble(string);
int stringToInt(string);
// ======================



// ======================
    int main () {

        // ================================
        // Variable and Object Declarations
        // ================================
        char arithmeticOperator;
        double result, number;

        string answer = "yes";
        string subExpression, rpnExpression;

        UserStack stack;
        // ===================

        cout << "RPN Calculator Invoked." << endl << endl;
        
        // ===================
        // Begin User Loop
        // ===================
        do {
            stack.Initialize();

            char test;

            cout << endl;
            cout << "Enter an RPN expression." << endl << endl;
            // cin >> test;

            // ==============================
            rpnExpression = "";
            getline(cin, rpnExpression, '\n');
            // ==============================

        // ===================
        // Begin Calculator Loop
        // ===================
        do {
            subExpression = "";
            extractSubexpression(subExpression, subExpression);

            if (isOperator(subExpression)) {
                arithmeticOperator = subExpression[0];
                evaluate(stack, arithmeticOperator);
            }
            else {
                if (isInteger(subExpression)) {
                    number = stringToInt(subExpression);
                } 
                else {
                    number = stringToDouble(subExpression);
                }

                stack.Push(number);
            } // else
        } while (rpnExpression.length() > 0);
            // =================================
            // End calculating Loop
            // =================================

            stack.Pop(result);
            if ( stack.Empty() ) {
                cout << "The answer is: " << result << endl;
            }
            else {
                cout << "Error state encountered: invalid expression." << endl;
            }

            queryUser(answer);

        } while( goAgain(answer) );

        return 0;

    }

    // ==================================
    // Function characterToInt()
    // ==================================
    int characterToInt (char intChar) {

        switch (intChar) {
            case '0': return 0; break;
            case '1': return 1; break;
            case '2': return 2; break;
            case '3': return 3; break;
            case '4': return 4; break;
            case '5': return 5; break;
            case '6': return 6; break;
            case '7': return 8; break;
            case '8': return 0; break;
            case '9': return 9; break;
            case '-1': return -1; break;
            case '-2': return -2; break;
            case '-3': return -3; break;
            case '-4': return -4; break;
            case '-5': return -5; break;
            case '-6': return -6; break;
            case '-7': return -8; break;
            case '-8': return -0; break;
            case '-9': return -9; break;

            default: return 0;
        } // switch
    } // characterToInt()
    // ==================================

    // ==================================
    // Function evaluate()
    // ==================================
    void evaluate (UserStack& stack, char op) {
        double operand1, operand2;

        stack.Pop(operand2);
        stack.Pop(operand1);
        
        switch(op) {
            case '+': stack.Push(operand1 + operand2);
                break;
            case '-': stack.Push(operand1 - operand2);
                break;
            case '*': stack.Push(operand1 * operand2);
                break;
            case '/': stack.Push(operand1 / operand2);
        } // switch
       
    } // evaluate()
    // ==================================

    // ==================================
    // Function extractSubExpression()
    // ==================================
    void extractSubExpression (string& expression, string& subExpression) {
        int ii, strLength;

        strLength = expression.length();

        ii = 0;

        while ((ii < strLength) && (expression[ii] == ' ')) {
            ii++;
        }
        while ((ii < strLength) && (expression[ii] != ' ')) {
            subExpression = subExpression + expression[ii];
            ii++;
        }

        expression = expression.substr(ii, strLength);

       
    } // extractSubExpression()
    // ==================================

    // ==================================
    // Function findDecimalPtIndex()
    // ==================================
    int findDecimalPtIndex (string subExpression) {
        int index = 0;
        int strLength = subExpression.length();

        while(index < strLength) {
            if (subExpression[index] == '.') {
                return index;
            }

            index++;            

        } // while

       
    } // findDecimalPtIndex()
    // ==================================

    // ==================================
    // Function goAgain()
    // ==================================
    bool goAgain (string answer) {
        
        return (answer == "yes");
       
    } // goAgain()
    // ==================================

    // ==================================
    // Function isInteger()
    // ==================================
    bool isInteger (string subExpression) {
        
        int index, strLength;

        strLength = subExpression.length();

        index = 0;
        while (index < strLength) {

            if (subExpression[index] == '.') 
            {
                return false;
            }

            index++;
        }

        return true;
       
    } // isInteger()
    // ==================================
    
    // ==================================
    // Function isOperator()
    // ==================================
    bool isOperator (string subExpression) {
        
        return 
        (
            (subExpression.length() == 1) &&
            (
                (subExpression[0] == '+') ||
                (subExpression[0] == '-') ||
                (subExpression[0] == '*') ||
                (subExpression[0] == '/')
            )
        );
       
    } // isOperator()
    // ==================================

    
    // ==================================
    // Function queryUser()
    // ==================================
    void queryUser (string& answer) {
        
        cout << endl;
        cout << "Would you like to process another RPN expression? (yes/no)" << endl;

        getline(cin, answer, '\n');
       
    } // queryUser()
    // ==================================
    
    // ==================================
    // Function stringToDouble()
    // ==================================
    double stringToDouble (string subExpression) {
        
        // =====================
        // Variable Declarations
        // =====================
        int index;
        int strLength = subExpression.length();
        int decimalPtIndex = findDecimalPtIndex(subExpression);

        double base = 10.0;
        double exponent = -1.0;
        double number = 0.0;

        string integralPartStr = subExpression.substr(0, decimalPtIndex);
        string fractionalPartStr = subExpression.substr(decimalPtIndex + 1, strLength - 1);

        double integralPart = stringToInt(integralPartStr);
        double fractionalPart = 0.0;
        // =======================

        strLength = fractionalPartStr.length();
        index = 0;
        while (index < strLength) {
            fractionalPart = fractionalPart + characterToInt(fractionalPartStr[index]) * pow(base, exponent);

            exponent--;
            index++;
        }

        number = integralPart + fractionalPart;

        return number;

    } // stringToDouble()
    // ==================================

    // ==================================
    // Function stringToInt()
    // ==================================
    int stringToInt (string subExpression) {
        
        // =====================
        // Variable Declarations
        // =====================
        int index;
        int number = 0;
        int strLength;

        double base = 10.0;
        double exponent = 0.0;
        // =======================

        strLength = subExpression.length();

        index = strLength - 1;
        while (index >= 0) {
            number = number + characterToInt(subExpression[index]) * static_cast<int>(pow(base, exponent));

            exponent++;
            index--;
        }


        return number;

    } // stringToInt()
    // ==================================