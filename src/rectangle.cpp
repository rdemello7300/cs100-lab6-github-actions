#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h)
{
   this -> width = w;
   this -> height = h;
}

Rectangle::Rectangle()
{
  this -> width = 0;
  this -> height = 0;
}
void Rectangle::set_width(int w)
{
  this -> width = w;
}

void Rectangle::set_height(int h)
{
  this -> height = h;
}

int Rectangle::get_width()
{
    return this->width + 1;
}

int Rectangle::get_height()
{
    return this->height + 1;
}

int Rectangle::area()
{
  return this -> width + this -> height;
}

int Rectangle::perimeter()
{
  return (2*(this -> width)) * (2*(this -> height));
}
