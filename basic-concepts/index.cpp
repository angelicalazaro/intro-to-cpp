#include <iostream>
// The cmath library contains common mathematical functions
#include <cmath>
// The string library allows using the string type and manipulating text strings
#include <string>

/**
 * Declaration of constants.
 * 
 * Any preprocessor directive does NOT use a semicolon (;).
 * These are hardcoded directly into the program and are NOT stored in memory
 * as constants defined with the 'const' modifier are.
 */
#define PI 3.14159

using namespace std;

int main() {
    
    /**
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * ------------------------------------ Variable Types ---------------------------------------------
     * ////////////////////////////////////////////////////////////////////////////////////////////////
     * 
     * Below, the existing data types in C++ will be described along with their
     * memory size. This memory size depends on the compiler and the data model used.
     * In the following examples, the standard GCC compiler and the standard
     * C++ data model will be used as reference, although other data models
     * such as LP32, ILP32, LLP64, and LP64 also exist.
     * These data models are beyond the scope of this practical guide.
     * 
     * - int. Numeric values with up to 4 bytes signed capacity
     * (from −2,147,483,648 to 2,147,483,647).
     */
    int number = -2147483648;
    cout << "int: " << number << endl;
    /**
     * - short int. Like int but with up to 2 bytes signed capacity
     * (from -32,768 to 32,767).
     */
    short int shortNumber = 32767;
    cout << "short int: " << shortNumber << endl;
    /**
     * - long long int. Like int but with up to 8 bytes signed capacity
     * (from −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807).
     */
    long long int longNumber = 9223372036854775807;
    cout << "long long int: " << longNumber << endl;
    /**
     * - char. Any alphanumeric value, i.e., consisting of 1 byte. It can
     * store any Unicode character (letters, numbers, symbols, etc.).
     * 
     * It can be initialized using single quotes to indicate the character
     * directly, or by its equivalent representation in the ASCII table.
     */
    char character = '#';
    char decimalEquivalent = 35; // decimal system equivalent
    char hexEquivalent = 0x23; // hexadecimal system equivalent
    char octalEquivalent = 043; // octal system equivalent
    cout << "char: " << character << ", with ASCII value of " << int(character) << endl;
    cout << "char initialization equivalents: " << decimalEquivalent << ", " << hexEquivalent << ", " << octalEquivalent << endl;
    /**
     * - bool. Logical values; false to indicate negation; and true to
     * indicate assertion. Its memory size is 4 bytes.
     */
    bool boolean = true;
    cout << "bool: " << boolean << endl;
    /**
     * - float. Numeric values with decimal point with up to 4 bytes capacity.
     * Supports up to 7 digits.
     */
    float shortDecimal = 301.782;
    cout << "float: " << shortDecimal << endl;
    /**
     * - double. Numeric values with decimal point with up to 8 bytes capacity.
     * Supports up to 16 digits.
     * 
     * Since it can store very large values, scientific notation can be used.
     * The previous case is useful for example when writing the speed of light
     * or the mass of an electron.
     */
    double longDecimal = -9329130411205.812349329015;
    double decimalScientific = 4.9e3; /*4.9*10^3 (4900)*/
    cout << "double: " << longDecimal << endl;
    cout << "double with scientific notation: " << decimalScientific << endl;

    cout << endl;

    /**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ------------------------------------ sizeof() Operator ------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * To get the size in bytes of the variable in question, the built-in C++ operator
 * sizeof() is invoked. This means that, even though its syntax looks like
 * a function, sizeof() is a built-in operator that cannot be called at runtime,
 * because once the compilation process ends, all traces of what sizeof() meant
 * will disappear; only the results of its operation will be directly written into the code.
 * 
 * More information:
 * + https://stackoverflow.com/questions/3954844/sizeof-operator-or-function
 * 
 * Complete list of built-in operators in C++:
 * + https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160
 */
cout << "longDecimal var size: " << sizeof(longDecimal) << " bytes" << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ----------------------------------- unsigned Modifier -------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * int takes 4 bytes, that is 32 bits (1 byte = 8 bits... 8 x 4 = 32), but computers
 * use 1 bit to represent the sign (+/-) of the numeric value, leaving 31 bits
 * available. Considering 1 bit is a binary value (1 or 0), then 2^31
 * equals 4,292,967,296. This value is split between both signs to represent
 * integer numeric values.
 * 
 * The keyword 'unsigned' modifies the behavior of a numeric data type by indicating the absence
 * of a sign (commonly the negative sign),
 * allowing its maximum value range to double. Since 1 bit is no longer used for the sign,
 * an 'unsigned int' can store up to 4,294,967,295 values.
 */
unsigned int unsignedNumber = 4294967295;
cout << "unsigned int: " << unsignedNumber << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ------------------------------- iostream Library: cin ------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * 'cin' means Console Input, a function provided by <iostream>
 * used to input values from the console.
 */
char consoleCharacter;
cout << "Enter an alphanumeric character: ";
cin >> consoleCharacter;
cout << "Value from console: " << consoleCharacter << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * -------------------------------- Arithmetic Operators -------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * (+) - Addition.
 * (-) - Subtraction.
 * (*) - Multiplication.
 * (/) - Division.
 * (%) - Modulus (remainder). Only applies to integer numbers.
 */
cout << "Sum of (5 + 5): " << (5 + 5) << endl;
cout << "Subtraction of (9 - 40): " << (9 - 40) << endl;
cout << "Multiplication of (6 * 2): " << (6 * 2) << endl;
float a = 8.0 / 3.0; // <-- It is important to use decimal points, otherwise the compiler treats values as ints and the result will be an integer
cout << "Division of (8.0 / 3.0): " << a << endl;
short int b = 15 % 4;
cout << "Remainder of (15 / 4) ... (4 x 3 = 12, remainder 3 for 15): " << b << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * -------------------------------- Compound Assignments -------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * A compact way to assign values to variables by performing an arithmetic
 * operation simultaneously:
 * - (x++). Adds 1 to the variable.
 * - (x--). Subtracts 1 from the variable.
 * - (x +=). Adds the value on the right to the variable.
 * - (x -=). Subtracts the value on the right from the variable.
 * - (x *=). Multiplies the variable by the value on the right.
 * - (x /=). Divides the variable by the value on the right.
 */
short int i = 10;
i++;    // 11
i--;    // 10 (decremented from 11)
i += 3; // 13
i -= 4; // 9
i *= 3; // 27
i /= 5; // 5

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * -------------------------------- Operator Precedence --------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * The following operations define the order in which a mathematical
 * expression containing multiple operations is evaluated:
 * 1. Operations inside parentheses.
 * 2. Multiplication, division, and modulus.
 * 3. Addition and subtraction.
 * 
 * If two or more operations have the same precedence level, they are
 * evaluated from left to right.
 */
cout << "14 - 8 / 2 * 3 + 1: " << 14 - 8 / 2 * 3 + 1 << endl;       // 3
cout << "(14 - 8) / 2 * 3 + 1: " << (14 - 8) / 2 * 3 + 1 << endl;   // 10
cout << "14 - (8 / 2 * 3) + 1: " << 14 - (8 / 2 * 3) + 1 << endl;   // 3
cout << "14 - 8 / 2 * (3 + 1): " << 14 - 8 / 2 * (3 + 1) << endl;   // -2
cout << "(14 - 8) / 2 * (3 + 1): " << (14 - 8) / 2 * (3 + 1) << endl; // 12

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ----------------------------- Logical and Comparison Operators ----------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * Unlike arithmetic operations, logical and comparison operators
 * are evaluated right to left.
 * 
 * - (&&) --> AND
 * - (||) --> OR
 * - (!)  --> NOT
 * - (==) --> equals
 * - (!=) --> not equals
 * - (<)  --> less than
 * - (>)  --> greater than
 * - (<=) --> less than or equal to
 * - (>=) --> greater than or equal to
 * 
 * Complete list of built-in C++ operators:
 * + https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160
 */
cout << "(5 < 9): " << (5 < 9) << endl;
cout << "(-3 == -3): " << (-3 == -3) << endl;
cout << "(9 >= 7 && true == false): " << (9 >= 7 && true == false) << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ---------------------------------- cmath Library -----------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * Contains dozens of mathematical functions. Below are the most important:
 * 
 * - pow(int1, int2): Raises int1 to the power of int2.
 */
double power = pow(5, 3); // 125
cout << "(5^3): " << power << endl;
/**
 * - sqrt(double1): Calculates the square root of double1.
 */
double squareRoot = sqrt(100.0); // 10.0
cout << "(√100.0): " << squareRoot << endl;
/**
 * - sin(double1): Calculates the sine of the angle (in radians) given by double1.
 */
double sine = sin(0.523599); // sin(30° in radians)
cout << "(sine of 30°): " << sine << endl;
/**
 * - cos(double1): Calculates the cosine of the angle (in radians) given by double1.
 */
double cosine = cos(1.0472); // cos(60° in radians)
cout << "(cosine of 60°): " << cosine << endl;
/**
 * - tan(double1): Calculates the tangent of the angle (in radians) given by double1.
 */
double tangent = tan(0.785398); // tan(45° in radians)
cout << "(tangent of 45°): " << tangent << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ---------------------------------------- Constants ----------------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * There are two ways to declare a constant:
 * - #define directive. See the file header for more information.
 * - The reserved keyword 'const'. Prepend 'const' before a normal variable declaration.
 * 
 * Practically speaking, there are no significant differences between the two.
 */
cout << "Constant via directive: " << PI << endl;
const float gravity = 9.8;
cout << "Constant via 'const' keyword: " << gravity << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ------------------------------ Type Definitions (typedef) --------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * This is a C++ mechanism that allows you to create custom variable types
 * to avoid repeatedly typing the same type.
 */
typedef unsigned short int customType;
customType m = 9;
cout << "Value of the custom type definition: " << m << endl;

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * -------------------------------- Conditional Structures -----------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * Simple conditional structure.
 */
if (true) {
    // do something
}
if (1 > 4) {
    // do something
} else {
    // do something else
}

/**
 * Multiple conditional structure (switch).
 * 
 * This structure only accepts integers (int) or characters (char).
 */
unsigned short int randomValue = 8;
switch (randomValue) {
    case 2:
        // do something
        break;
    case 90:
        // do something else
        break;
    default:
        // default action
        break;
}

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * ---------------------------- Repetitive Structures or Loops -----------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * For loop structure.
 * 
 * 'size_t' is a built-in C++ type alias,
 * defined as unsigned long by default.
 */
cout << "Iterating for loop" << endl;
for (size_t i = 0; i < 5; i++) {
    cout << "(for) i :: " << i << endl;
}

cout << endl;

/**
 * While loop structure.
 */
unsigned short int f = 0;
while (f <= 50) {
    cout << "(while) i :: " << f << endl;
    /**
     * In all loops, the 'break' keyword
     * terminates the loop immediately.
     */
    if (f == 6) break;
    f++;
}

cout << endl;

/**
 * Do-while loop structure.
 */
unsigned short int g = 0;
do {
    cout << "(do-while) i :: " << g << endl;
    g++;
    /**
     * In all loops, the 'continue' keyword
     * skips directly to the next iteration without
     * executing the rest of the code after it.
     */
    continue;
    cout << "This text will not be printed..." << endl;
} while (g <= 10);

cout << endl;

/**
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * --------------------------- Arrays + iostream Library: cin --------------------------------------
 * ////////////////////////////////////////////////////////////////////////////////////////////////
 * 
 * Arrays are a collection of variables located contiguously in memory and
 * all belonging to the same type (int, char, bool, etc).
 * 
 * There are two ways to define the number of elements an array will have:
 * 
 * - By declaration:
 * 
 * In this case, if you access an index of the array, e.g. array1[3],
 * it will contain a random garbage value.
 */
int array1[10];
cout << "array1 using declaration: " << array1 << endl;
/**
 * - By assignment:
 * 
 * Defining an array with a certain number of elements doesn't mean you
 * have to use all of them. You can define 5 elements and only use 2.
 * This is possible but not recommended.
 */
float array2[] = { 8.3, -19.9, 2.0, 1.5 };
cout << "array2[0]: " << array2[0] << endl;

/**
 * C++ does not include an operator or utility to get the number of elements
 * of an array directly. That’s why there are several ways to obtain this,
 * and the most conventional is the following:
 */
cout << "Size in bytes of arreglo2[]: " << sizeof(array2) << endl; 
cout << "Size in bytes of arreglo2[0]: " << sizeof(array2[0]) << endl; 
cout << "Number of elements in arreglo2[]: " << sizeof(array2) / sizeof(array2[0]) << " items" << endl;
/**
 * As shown above, the sizeof() operator gets the size in bytes of a variable,
 * which in this case is an array. Assuming the size of the array is 16 bytes
 * because it stores 4 float values (4 bytes each), then the number of elements
 * in the array is 4 (4 bytes times 4 equals 16 bytes).
 * 
 * This is why in the previous operation, the total size of the variable is divided
 * by the size of one element of the same type, usually the first element is used,
 * although it could be any other variable of the same type.
 */

/**
 * If you want to form words using char arrays, it is recommended to use
 * the escape sequence '\0' which signals the end of the character sequence.
 */
char name[] = { 'G', 'u', 'i', 'l', 'l', 'e', 'r', 'm', 'o', '\0' };
cout << "char[] using assignment: " << name << endl;

/**
 * Strings of text are char arrays that have a special initialization method
 * by assignment using double quotes:
 */
char text[] = "Lorem ipsum dolor sit amet.";
cout << "char[] using double quotes: " << text << endl;

/**
 * The <string> library provides a string object that includes methods
 * for easy manipulation of text strings.
 */
string newText = "Hello, from";
newText.append(" string!!");
cout << newText << endl;

/**
 * A useful behavior for console input is that you can assign a value
 * directly to a character array as follows:
 */
char enter1[20];
cout << "Enter a word of no more than 20 characters: ";
cin >> enter1;
cout << "The word is: " << enter1 << endl;
/**
 * By default, cin reads input until it detects a whitespace.
 * Therefore, this assignment only accepts a single word.
 * 
 * To handle multiple words (input with spaces), it is recommended to use
 * the .getline() method to read the input in a specific way.
 * In this example, cin may not work properly if there is leftover newline
 * characters in the input buffer. A common workaround is to ignore
 * some characters in the buffer using cin.ignore(n?:int, delimiter?:char)
 */
char enter2[30];
cout << "Now, enter a text of no more than 30 characters with spaces: ";
cin.ignore(); // Clear 1 character from the buffer
/**
 * ignore() can also take two parameters, one indicating how many characters
 * to discard at most (limit 256) and a delimiter. The following line will
 * discard 256 characters or until a newline '\n' is found, whichever comes first.
 */
cin.ignore(256, '\n');
cin.getline(enter2, 30);
cout << enter2 << endl;

cout << endl;

return 0;
}

void loop() {}
