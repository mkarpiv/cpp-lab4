#include <iostream>

class Shape {
public:
    // Function to draw the shape
    void draw() {
        std::cout << "Draw" << std::endl;
    }

    // Function to erase the shape 
    void erase() {
        std::cout << "Erase" << std::endl;
    }
};

class Rectangle : public Shape {
private:
    int topLeftX; // X-coordinate of the top-left corner of the rectangle.
    int topLeftY; // Y-coordinate of the top-left corner of the rectangle.
    int bottomRightX; // X-coordinate of the bottom-right corner of the rectangle.
    int bottomRightY; // Y-coordinate of the bottom-right corner of the rectangle.
    int number; // Sequential number of the rectangle.

public:
    // Constructor for the Rectangle class.
    Rectangle(int topX, int topY, int bottomX, int bottomY, int num) {
        topLeftX = topX;
        topLeftY = topY;
        bottomRightX = bottomX;
        bottomRightY = bottomY;
        number = num;
    }

    // Method to draw the rectangle.
    void draw() {
        std::cout << "Draw a rectangle with the upper left corner of (" << topLeftX << ", " << topLeftY
            << ") and the lower right corner in (" << bottomRightX << ", " << bottomRightY << ")." << std::endl;
    }

    // Method to erase the rectangle.
    void erase() {
        std::cout << "Clear the rectangle with the sequence number " << number << std::endl;
    }
};

int main() {

    Rectangle rect(1, 0, 9, 2, 1);

    // Drawing and erasing the rectangle.
    rect.draw();
    rect.erase();

    return 0;
}
