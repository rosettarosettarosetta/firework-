#pragma once
#ifndef TEXTPRINT_H
#define TEXTPRINT_H

class Textprint
{
public:
	Textprint(wchar_t a[]);
	~Textprint()
	{

	}
	void setstr(wchar_t a[]);
	wchar_t getstr(int );
    virtual void print(int ) = 0;

private:
	wchar_t str[100] = { 0 };
};

#endif // TEXTPRINT_H