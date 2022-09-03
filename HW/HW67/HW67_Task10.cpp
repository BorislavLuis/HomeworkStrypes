#include <iostream>
#include <string>

typedef std::string tString;
typedef bool tBitmap;

class cWindow
{
public:
	int Top, Bottom, Left, Right;
	cWindow();
	cWindow(const cWindow& object);
	
};
class cHint:public cWindow
{
public:
	tString sCaption;
	cHint();
};

class cBitButton :public cWindow
{
public:
	tBitmap aBitmap;
	cBitButton();
};

int main()
{
	cWindow a, b;
	cHint hint;
	cBitButton button;

	std::cout << "Top -> " << a.Top << std::endl;
	std::cout << "Bottom -> " << a.Bottom << std::endl;
	std::cout << "Left -> " << a.Left << std::endl;
	std::cout << "Right -> " << a.Right << std::endl;
	b.Top = 200;
	b.Bottom = 800;
	b.Left = 300;
	b.Right = 400;
	a = b;
	std::cout << "Top -> "<< a.Top << std::endl;
	std::cout << "Bottom -> " << a.Bottom << std::endl;
	std::cout << "Left -> " << a.Left << std::endl;
	std::cout << "Right -> " << a.Right << std::endl;

	std::cout << "Class cHint sCaption -> " << hint.sCaption << std::endl;
	std::cout << "Class cHint Top -> " << hint.Top << std::endl;
	std::cout << "Class cHint Bottom -> " << hint.Bottom << std::endl;
	std::cout << "Class cHint Left -> " << hint.Left << std::endl;
	std::cout << "Class cHint Right -> " << hint.Right << std::endl;

	std::cout << "Class cBitButton aBitmap -> " << button.aBitmap << std::endl;
	std::cout << "Class cBitButton Top -> " << button.Top << std::endl;
	std::cout << "Class cBitButton Bottom -> " << button.Bottom << std::endl;
	std::cout << "Class cBitButton Left -> " << button.Left << std::endl;
	std::cout << "Class cBitButton Right -> " << button.Right << std::endl;

	return 0;
}

cWindow::cWindow()
{
	Top = 0;
	Bottom = 1080;
	Left = 0;
	Right = 1920;
}
cWindow::cWindow(const cWindow& object)
{
	Top = object.Top;
	Bottom = object.Bottom;
	Left = object.Left;
	Right = object.Right;
}

cHint::cHint()
{
	sCaption = "Title";
	Top = 0;
	Bottom = 1080;
	Left = 0;
	Right = 1920;
}

cBitButton::cBitButton()
{
	aBitmap = true;
	Top = 0;
	Bottom = 1080;
	Left = 0;
	Right = 1920;
}