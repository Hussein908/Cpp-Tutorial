#include <iostream>
using namespace std;

class Line
{
public:
    int getLength(void);
    Line(int len);         // Simple constructor.
    Line(const Line &obj); // Copy constructor.
    ~Line();               // Destructor.

private:
    int *ptr;
};

// Member functions definitions including constructor.
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr." << endl;
    // allocate memory for the pointer
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value.
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Length of line: " << obj.getLength() << endl;
}

// Main function for the program
int main()
{
    Line line(10);
    display(line);
    return 0;
}