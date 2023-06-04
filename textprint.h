#pragma once
#ifndef TEXTPRINT_H
#define TEXTPRINT_H

class Textprint
{
public:
	Textprint(wchar_t a[])
	{
		setstr(a);
	}

	void setstr(wchar_t a[])
	{
		for (int i = 0; a[i]; i++)
			str[i] = a[i];
	}

	wchar_t getstr(int i)
	{
		return str[i];
	}
	virtual void print() = 0;

private:
	wchar_t str[100] = { 0 };
};

#endif // TEXTPRINT_H