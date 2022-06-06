#pragma once

class Size
{
public:
	constexpr inline Size();
	constexpr inline Size(int w, int h);
	constexpr inline void set_width(int w);
	constexpr inline void set_height(int w);
	constexpr inline int get_width() const;
	constexpr inline int get_height() const;
private:
	int width, height;
};

constexpr inline Size::Size() : width(-1), height(-1) {}

constexpr inline Size::Size(int w, int h) : width(w), height(h) {}

constexpr inline void Size::set_width(int w)
{ width = w; }

constexpr inline void Size::set_height(int h)
{ height = h; }

constexpr inline int Size::get_width() const
{ return width; }

constexpr inline int Size::get_height() const
{ return height;  }

