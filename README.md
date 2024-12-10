# bin2deci_SingleLinkedlist

## Binary to Decimal Converter (Linked List)

This program converts a binary number entered by the user into its decimal equivalent. It uses a linked list to store the binary digits efficiently.

**Features:**

* Supports conversion of binary numbers with only 0s and 1s.
* Validates user input to ensure only valid binary digits are processed.
* Prints the binary number stored in the linked list for verification.

**Dependencies:**

* C++11 standard library (`<iostream>`, `<memory>`, `<cmath>`, `<string>`, `<sstream>`)

**How to Use:**

1. Compile the code using a C++ compiler that supports C++11 features.
2. Run the compiled executable.
3. Enter a binary number when prompted.
4. The program will validate the input, convert it to decimal, and print the result.

**Code Breakdown:**

* **Node Structure:** Defines a node in the linked list to store a single binary digit (0 or 1) and a pointer to the next node.
* **`appendNode` Function:** Appends a new node with the provided value to the end of the linked list.
* **`binaryToDecimal` Function:** Performs the conversion from binary to decimal. It iterates through the linked list, processing each digit, and building the decimal equivalent using bitwise operations.
* **`printList` Function:** Prints the contents of the linked list, representing the binary number.
* **`main` Function:**
    * Reads a binary number as a string from the user.
    * If the input string is empty, an error message is displayed, and the program exits.
    * Validates the input for characters '0' and '1' only.
    * Populates the linked list with the individual binary digits.
    * Prints the binary number stored in the linked list.
    * Converts the linked list representation to decimal value using the `binaryToDecimal` function.
    * Prints the decimal equivalent of the binary number.

**Code Execution:**

1. **User Input:** Enter a binary number: 11011
2. **Program Output:**
   ```
   Binary Linked List: 11011
   Decimal Value: 27
   ```

3. **User Input (Empty Input):** Enter a binary number: 
   ```
   Error: Input is empty. Please provide a valid binary number.
   ```

**Additional Notes:**

* The code uses `shared_ptr` for memory management of the linked list nodes.
* The added error handling for empty input makes the program more robust.
