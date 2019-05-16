#ifndef RECTANGLE_H
#define RECTANGLE_H
class rectangle {
	public:
		int width, height;
    rectangle(const int& x, const int& y);
    rectangle();
    void setHeight();
    void setWidth();
    void getWidth() const;
    void getHeight() const;
    int getArea() const;
    int getPerimeter() const;
  };
#endif
